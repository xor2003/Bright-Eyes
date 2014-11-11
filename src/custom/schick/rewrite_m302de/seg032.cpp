/*
 *	Rewrite of DSA1 v3.02_de functions of seg032 (fight)
 *	Functions rewritten: 11/12
*/
#include <stdlib.h>
#include <string.h>

#include "v302de.h"

#include "seg000.h"
#include "seg002.h"
#include "seg004.h"
#include "seg005.h"
#include "seg006.h"
#include "seg007.h"
#include "seg008.h"
#include "seg033.h"
#include "seg037.h"
#include "seg038.h"
#include "seg042.h"
#include "seg043.h"
#include "seg097.h"

#if !defined(__BORLANDC__)
namespace M302de {
#endif

/**
 *	FIG_set_cb_field - sets an object to a chessboard position
 *	@y:		the Y-Coordinate on the chessboard
 *	@x:		the X-Coordinate on the chessboard
 *	@object:	number of the object
 *			0=free, 1-6=heroes, >10=enemies,
 *			>50walls, trees, etc
 *			-3 = flee
 *
 *	This function is called multiple times when an entrant in a fight
 *	is moving. The initial placements of static objects are also done
 *	with this function.
 */
/* Borlandified and identical */
void FIG_set_cb_field(signed short y, signed short x, signed char object)
{

	/* check that the object is in the borders */
	if (y < 0 || y > 24 || x < 0 || x > 24)
		return;

	set_cb_val(x, y, object);
}

/* Borlandified and identical */
void draw_fight_screen_pal(signed short mode)
{
	FIG_draw_pic();

	/* check for palette update */
	if (ds_readbs(0x2845) != -1) {

		update_mouse_cursor();

		/* clear framebuffer */
#if !defined(__BORLANDC__)
		PhysPt p = Real2Phys((RealPt)ds_readd(0xd2ff));

		for (int i = 0; i < 64000; i+=4) {
			mem_writed(p + i, 0);
		}
#else
		memset((RealPt)ds_readd(0xd2ff), 0, 64000);
#endif

		/* set palettes */
		set_palette(p_datseg + 0x2783, 0x00, 0x20);
		set_palette(p_datseg + 0x7d0e, 0x80, 0x14);
		set_palette(Real2Host((RealPt)ds_readd(0xc3a9) + 0xfa02), 0x60, 0x20);

		ds_writeb(0x2845, -1);

		refresh_screen_size();
	}

	draw_fight_screen(mode);
}

/**
 *	FIG_choose_next_hero	-	chooses the next hero on turn
 *
 *	This is simply done randomly.
 */
/* Borlandified and identical */
signed short FIG_choose_next_hero(void)
{
#if !defined(__BORLANDC__)
	signed short loop_cnt = 0;
	long tries[7] = {0, 0, 0, 0, 0, 0, 0};
#endif

	signed short retval;

	do {
		retval = random_schick(7) - 1;

#if !defined(__BORLANDC__)
		tries[retval]++;

		if (++loop_cnt > 200) {
			D1_ERR("Possible infinite loop in %s()\n", __func__);
			D1_ERR("I'll try to get a possible hero\n");

			retval = -1;

			/*
			 * print random statistic
			 */
			for (int i = 0; i < 7; i++)
				D1_ERR("tries[%d] = %ld\n", i, tries[i]);

			/*
			 * search by hand for a hero and dump the
			 * interesting bits
			 */
			Bit8u *hero = get_hero(0);
			for (int i = 0; i < 7; i++, hero += 0x6da) {
				D1_ERR("Hero %d typus = %x group=%x current_group=%x actions=%x\n",
					i, host_readb(hero + 0x21),
					host_readb(hero + 0x87),
					ds_readb(CURRENT_GROUP),
					host_readb(hero + 0x83));

				if (host_readb(hero + 0x21) &&
					host_readb(hero + 0x87) == ds_readb(CURRENT_GROUP) &&
					host_readb(hero + 0x83))
						retval = i;
			}

			/* exit if we didnt found a hero */
			if (retval == 0xffff) {
				D1_ERR("Sorry, this is an infinite loop.\n");
				D1_ERR("I'll exit\n");
				exit(1);
			}

			return retval;
		}
#endif


	/* search for a hero who has a class, is in the current group and
		something still unknown */
	} while (host_readb(get_hero(retval) + 0x21) == 0 ||
			host_readb(get_hero(retval) + 0x87) != ds_readb(CURRENT_GROUP) ||
			host_readb(get_hero(retval) + 0x83) == 0);

	return retval;
}
/**
 *	FIG_choose_next_enemy	-	chooses the next enemy on turn
 *
 *	This is simply done randomly.
 *	Orig_BUG: I had this loop running infinitely.
 */
/* Borlandified and identical */
signed short FIG_choose_next_enemy(void)
{
	signed short retval;

#if !defined(__BORLANDC__)
	Bit8u *enemy;
	unsigned short i;
	unsigned short loop_cnt = 0;
	long tries[20] = {	0, 0, 0, 0, 0,
				0, 0, 0, 0, 0,
				0, 0, 0, 0, 0,
				0, 0, 0, 0, 0};
#endif

	do {

		retval = random_schick(ds_readw(NR_OF_ENEMIES)) - 1;

#if !defined(__BORLANDC__)
		tries[retval]++;

		if (++loop_cnt > 200) {
			D1_ERR("Possible infinite loop in %s()\n", __func__);
			D1_ERR("I'll try to get a possible enemy\n");

			retval = -1;

			/*
			 * print random statistic
			 */
			for (i = 0; i < 20; i++)
				D1_ERR("tries[%d] = %ld\n", i, tries[i]);

			/*
			 * search by hand for an enemy and dump	the
			 * interesting bits
			 */
			enemy = p_datseg + ENEMY_SHEETS;
			for (i = 0; i < ds_readw(NR_OF_ENEMIES); i++, enemy += 62) {
				D1_ERR("Enemy %02d %x %x\n",
					i, host_readb(enemy),
					host_readb(enemy + 0x28));

				if (host_readb(enemy) &&
					host_readb(enemy + 0x28))
						retval = i;
			}

			/* exit if we didnt found an enemy */
			if (retval == 0xffff) {
				D1_ERR("Sorry, this is an infinite loop.\n");
				D1_ERR("I'll exit\n");
				exit(1);
			}

			return retval;
		}
		enemy = p_datseg + ENEMY_SHEETS + retval * 62;
#endif

	} while (ds_readbs(ENEMY_SHEETS + retval * 62) == 0 || ds_readbs(ENEMY_SHEETS + 0x28 + retval * 62) == 0);

	return retval;
}

/**
 *	FIG_count_active_enemies -	return the number of active enemies
 *
 */
/* Borlandified and identical */
signed short FIG_count_active_enemies(void)
{
	Bit8u *enemy;
	signed short i, retval = 0;

	for (i = 0; i < 20; i++) {

		enemy = p_datseg + ENEMY_SHEETS + i * 62;

		/* if enemy has no monster class */
		if ((host_readb(enemy) != 0) &&
			!enemy_dead(enemy) &&
			!enemy_stoned(enemy) &&
			!enemy_cursed(enemy) &&
			!enemy_uncon(enemy) &&
			!enemy_busy(enemy) &&
			!host_readbs(enemy + 0x35))
		{
			retval++;
		}
	}

	return retval;
}

/**
 *	FIG_is_enemy_active -	checks if an enemy is active
 *	@enemy:	pointer to the enemy sheet
 *
 *	Returns 1 if enemy can act or 0 if not.
 */
//static
/* Borlandified and identical */
signed short FIG_is_enemy_active(Bit8u *enemy)
{
	if (enemy_sleeps(enemy) ||
		enemy_dead(enemy) ||
		enemy_stoned(enemy) ||
		enemy_bit11(enemy) ||
		enemy_uncon(enemy) ||
		enemy_busy(enemy) ||
		enemy_bit8(enemy) ||
		(host_readbs(enemy + 0x35) > 0))
	{
		return 0;
	}

	return 1;
}

/**
 *	FIG_get_first_active_hero -	returns the first active hero
 *
 *	Returns the index of the firsta active hero.
 */
/* Borlandified and identical */
signed short FIG_get_first_active_hero(void)
{
	Bit8u *hero_i;
	signed short i;

	hero_i = get_hero(0);

	for (i = 0; i <= 6; i++, hero_i += 0x6da) {
		/* check class */
		if ((host_readb(hero_i + 0x21) != 0) &&
			(host_readb(hero_i + 0x87) == ds_readb(CURRENT_GROUP)) &&
			!hero_dead(hero_i) &&
			!hero_stoned(hero_i) &&
			!hero_cursed(hero_i) &&
			!hero_unkn3(hero_i) &&
			!hero_unc(hero_i))
		{
			return i;
		}
	}

	return -1;
}

/**
 *	seg032_02db -	currently unknown
 *
 *	Returns 1 if FIG_get_first_active_hero() returns -1
 *	and at least one hero in the group is not dead and has
 *	something at offset 0x84 set (maybe sleeping).
 *
 */
//static
/* Borlandified and identical */
unsigned short seg032_02db(void)
{
	Bit8u *hero_i;
	signed short i;

	if (FIG_get_first_active_hero() == -1) {
		hero_i = get_hero(0);
		for (i = 0; i <= 6; i++, hero_i += 0x6da) {
			if ((host_readb(hero_i + 0x21) != 0) &&
				(host_readb(hero_i + 0x87) == ds_readb(CURRENT_GROUP)) &&
				!hero_dead(hero_i) &&
				(host_readb(hero_i + 0x84) == 0x10))
			{
				return 1;
			}
		}

		return 0;
	} else {
		return 0;
	}
}

//static
/* Borlandified and identical */
unsigned short FIG_fight_continues(void)
{

	if (seg032_02db()) {
		ds_writew(0x5f14, 1);
		return 0;
	}

	if (FIG_get_first_active_hero() == -1) {
		ds_writew(0xc3c1, 1);
		return 0;
	}

	if (FIG_count_active_enemies() == 0)
		return 0;

	return 1;
}

/* Borlandified and identical */
void FIG_do_round(void)
{
	signed short i;
	signed short hero_attacks;
	signed short monster_attacks;
	signed short pos;
	signed short x_coord;
	signed short y_coord;
	signed short l3;
	signed char turn;
	RealPt hero;
	RealPt monster;
	signed short x;
	signed short y;
	Bit8u *p1;

	if (!FIG_fight_continues()) {
		/* this fight is over */
		ds_writew(IN_FIGHT, 0);
	}

#if !defined(__BORLANDC__)
	D1_INFO("Kampfrunde %d beginnt\n", ds_readws(FIGHT_ROUND));
#endif

	hero_attacks = 0;

	/* initialize heros #attacks and BP */
	for (i = 0; i <= 6; ds_writeb((0xd84a + 1) + i, 0), i++) {

		hero = (RealPt)ds_readd(HEROS) + 0x6da * i;

		if ((host_readbs(Real2Host(hero) + 0x21) != 0) &&
			(host_readbs(Real2Host(hero) + 0x87) == ds_readbs(CURRENT_GROUP)) &&
			(host_readbs(Real2Host(hero) + 0x84) != 16))
		{
			/* set #attacks to 1 */
			host_writeb(Real2Host(hero) + 0x83, 1);

			/* give this hero 8 BP */
			host_writeb(Real2Host(hero) + 0x33, 8);

			if (host_readbs(Real2Host(hero) + 0x47) * 50 <= host_readws(Real2Host(hero) + 0x2d8)) {
				/* give BP Malus -1 */
				dec_ptr_bs(Real2Host(hero) + 0x33);
			}

			if (host_readbs(Real2Host(hero) + 0x47) * 75 <= host_readws(Real2Host(hero) + 0x2d8)) {
				/* give BP Malus -2 */
				sub_ptr_bs(Real2Host(hero) + 0x33, 2);
			}

			if (host_readbs(Real2Host(hero) + 0x47) * 100 <= host_readws(Real2Host(hero) + 0x2d8)) {
				/* give BP Malus -2 */
				sub_ptr_bs(Real2Host(hero) + 0x33, 2);

			}

			/* TODO: */
			host_writew(Real2Host(hero) + 0x9d, 0);

			hero_attacks++;

			if (host_readbs(Real2Host(hero) + 0xa0) != 0) {
				/* Axxeleratus => BP + 4 */
				add_ptr_bs(Real2Host(hero) + 0x33, 4);

				/* one extra attack */
				inc_ptr_bs(Real2Host(hero) + 0x83);

				hero_attacks++;
			}

			if (host_readbs(Real2Host(hero) + 0x47) * 110 <= host_readws(Real2Host(hero) + 0x2d8)) {
				/* too much weight, set BP to 1 */
				host_writeb(Real2Host(hero) + 0x33, 1);
			}
		}
	}

	monster_attacks = 0;

	for (i = 0; i < ds_readws(NR_OF_ENEMIES); i++) {

		/* set #attacks */
		ds_writeb(0xd373 + 62 * i, ds_readbs(0xd366 + 62 * i));

		monster_attacks += ds_readbs(0xd366 + 62 * i);

		/* set BP */
		ds_writeb(0xd36e + 62 * i, ds_readbs(0xd36d + 62 * i));

		ds_writeb(0xd837 + i, 0);
	}

	l3 = 0;


	/* turn == 0 means monsters attack first, turn == 1 means heros attack fisrt */
	turn = (ds_readbs(0x26ac) == 2 ? 1 : (ds_readbs(0x26ac) == 1 ? 0 : random_interval(0, 1)));


	while ((ds_readws(IN_FIGHT) != 0) && (hero_attacks + monster_attacks > 0)) {

		if (ds_readws(0xe318) == 2) {
			ds_writew(0xe318, 0);
		}

		/* decide if heros or monsters are next */
		if (l3 == 0) {

			/* flip turn */
			turn ^= 1;

			if (!turn) {

				if (hero_attacks <= monster_attacks) {
					l3 = 1;
				} else if (!hero_attacks) {
					turn = 1;
				} else if (monster_attacks != 0) {
					l3 = hero_attacks / monster_attacks;
				} else {
					l3 = hero_attacks;
				}
			}

			if (turn == 1) {

				if (monster_attacks == 0) {
					turn = 0;
					l3 = 1;
				} else if (monster_attacks <= hero_attacks) {
					l3 = 1;
				} else {
					l3 = (hero_attacks ? monster_attacks / hero_attacks : monster_attacks);
				}
			}
		}

		if (turn == 0) {
			/* heros on turn */

			pos = FIG_choose_next_hero();

			hero = (RealPt)ds_readd(HEROS) + 0x6da * pos;

			dec_ptr_bs(Real2Host(hero) + 0x83);

			if (hero_sleeps(Real2Host(hero)) && !hero_dead(Real2Host(hero))) {

				/* hero sleeps and is not dead */

				if (random_schick(100) < 75) {

					/* awake him (or her) */

					and_ptr_bs(Real2Host(hero) + 0xaa, 0xfd);

					p1 = Real2Host(FIG_get_ptr(host_readbs(Real2Host(hero) + 0x81)));

					host_writeb(p1 + 0x02, host_readbs(Real2Host(hero) + 0x82));
					host_writeb(p1 + 0x0d, -1);
					host_writeb(p1 + 0x05, 0);
					host_writeb(p1 + 0x06, 0);
				}
			}

			if (FIG_search_obj_on_cb(pos + 1, &x_coord, &y_coord) &&
				check_hero(Real2Host(hero)))
			{
				if (host_readbs(Real2Host(hero) + 0x96) != 0) {
					dec_ptr_bs(Real2Host(hero) + 0x96);
				} else {
					if (host_readbs(Real2Host(hero) + 0x97) != 0) {
						dec_ptr_bs(Real2Host(hero) + 0x97);
					}

					/* save the fight_id of this hero */
					ds_writew(0x26b3, pos + 1);

					/* select a fight action */
					FIG_menu(Real2Host(hero), pos, x_coord, y_coord);

					if ((host_readbs(Real2Host(hero) + 0x84) == 2) ||
						(host_readbs(Real2Host(hero) + 0x84) == 4) ||
						(host_readbs(Real2Host(hero) + 0x84) == 5) ||
						(host_readbs(Real2Host(hero) + 0x84) == 15))
					{

						FIG_do_hero_action(hero, pos);

						if (host_readbs(Real2Host(hero) + 0x86) >= 10) {

							if (host_readbs(Real2Host(hero) + 0x86) >= 30) {
								sub_ptr_bs(Real2Host(hero) + 0x86, 20);
							}

							if (test_bit0(p_datseg + 0xd110 + 62 * host_readbs(Real2Host(hero) + 0x86)))
							{
								if (is_in_byte_array(host_readbs(p_datseg + 0xd0e0 + 62 * host_readbs(Real2Host(hero) + 0x86)), p_datseg + TWO_FIELDED_SPRITE_ID))
								{

									FIG_search_obj_on_cb(host_readbs(Real2Host(hero) + 0x86) + 20, &x, &y);

									p1 = Real2Host(FIG_get_ptr(host_readbs(p_datseg + 0xd105 + 62 * host_readbs(Real2Host(hero) + 0x86))));
									p1 = Real2Host(FIG_get_ptr(ds_readbs(0xe35a + host_readbs(p1 + 0x13))));

									if (host_readbs(p1 + 0x14) >= 0) {
										FIG_set_cb_field(y, x, host_readbs(p1 + 0x14));
									} else {
										FIG_set_cb_field(host_readbs(p1 + 0x04), host_readbs(p1 + 0x03), 0);
									}
								}
							}
						}

						herokeeping();
					}

					/* set fight_id of the hero to 0 */
					ds_writew(0x26b3, 0);
				}
			}

			if (!FIG_fight_continues()) {
				/* this fight is over */
				ds_writew(IN_FIGHT, 0);
			}

			hero_attacks--;

		} else {
			/* monsters on turn */

			pos = FIG_choose_next_enemy();

			monster = (RealPt)RealMake(datseg, 0xd34b + 62 * pos);

			dec_ptr_bs(Real2Host(monster) + 0x28);

			if (FIG_search_obj_on_cb(pos + 10, &x_coord, &y_coord) &&
				FIG_is_enemy_active(Real2Host(monster)))
			{
				if (host_readbs(Real2Host(monster) + 0x2f) != 0) {
					dec_ptr_bs(Real2Host(monster) + 0x2f);
				} else {

					ds_writew(0x26b5, pos + 10);

					host_writebs(Real2Host(monster) + 0x2b, 1);

					enemy_turn(Real2Host(monster), pos, x_coord, y_coord);

					if ((host_readbs(Real2Host(monster) + 0x2b) == 2) ||
						(host_readbs(Real2Host(monster) + 0x2b) == 4) ||
						(host_readbs(Real2Host(monster) + 0x2b) == 5) ||
						(host_readbs(Real2Host(monster) + 0x2b) == 15))
					{

						FIG_do_monster_action(monster, pos);

						if (host_readbs(Real2Host(monster) + 0x2d) >= 10) {

							if (host_readbs(Real2Host(monster) + 0x2d) >= 30) {
								sub_ptr_bs(Real2Host(monster) + 0x2d, 20);
							}

							if (test_bit0(p_datseg + 0xd110 + 62 * host_readbs(Real2Host(monster) + 0x2d)))
							{
								if (is_in_byte_array(host_readbs(p_datseg + 0xd0e0 + 62 * host_readbs(Real2Host(monster) + 0x2d)), p_datseg + TWO_FIELDED_SPRITE_ID))
								{

									FIG_search_obj_on_cb(host_readbs(Real2Host(monster) + 0x2d) + 20, &x, &y);

									p1 = Real2Host(FIG_get_ptr(host_readbs(p_datseg + 0xd105 + 62 * host_readbs(Real2Host(monster) + 0x2d))));
									p1 = Real2Host(FIG_get_ptr(ds_readbs(0xe35a + host_readbs(p1 + 0x13))));

									if (host_readbs(p1 + 0x14) >= 0) {
										FIG_set_cb_field(y, x, host_readbs(p1 + 0x14));
									} else {
										FIG_set_cb_field(host_readbs(p1 + 0x04), host_readbs(p1 + 0x03), 0);
									}
								}
							}
						}

						herokeeping();
					}

					ds_writew(0x26b5, 0);
				}
			}

			if (!FIG_fight_continues()) {
				ds_writew(IN_FIGHT, 0);
			}

			monster_attacks--;
		}

		l3--;

		if (ds_readbs(0xe38e) != -1) {

			FIG_remove_from_list(ds_readbs(0xe38e), 0);
			ds_writeb(0xe38e, -1);
		}

		if (ds_readbs(0xe38f) != -1) {

			FIG_remove_from_list(ds_readbs(0xe38f), 0);
			ds_writeb(0xe38f, -1);
		}

	}

#if !defined(__BORLANDC__)
	D1_INFO("Kampfrunde %d endet\n", ds_readws(FIGHT_ROUND));
#endif
}


/*
 * \brief	loads some special textures for the ghost ship
 */
/* Borlandified and identical */
void FIG_load_ship_sprites(void)
{
	signed short l_si;
	signed short l_di;
	signed short i;
	signed short width;
	signed short height;
	signed short const1 = 10;
	signed short const2 = 118;
	signed short l3;
	signed short l4;
	Bit8u *ptr;
	struct nvf_desc nvf;

	for (i = 0; i < 24; i++) {

		for (l_di = 0; l_di < 24; l_di++) {

			l_si = host_readbs(Real2Host(ds_readd(0xbd2c)) + 0x15 + 25 * i + l_di);

			if ((l_si >= 108) && (l_si <= 111)) {

				l_si -= 50;

			if (NOT_NULL(Real2Host(host_readd(Real2Host(ds_readd(0xe388)) + 4 * l_si)))) {

				/* this sprite has already been buffered */

				ptr = Real2Host(host_readd(Real2Host(ds_readd(0xe388)) + 4 * l_si));

			} else {
				/* this sprite has not been used yet */

				ptr = Real2Host(ds_readd(0xd86e));

				nvf.dst = ptr;
				nvf.src = Real2Host(ds_readd(0xbd30));
				nvf.nr = l_si;
				nvf.type = 0;
				nvf.width = (Bit8u*)&width;
				nvf.height = (Bit8u*)&height;

				process_nvf(&nvf);
#if !defined(__BORLANDC__)
				/* BE-fix */
				width = host_readws((Bit8u*)&width);
				height = host_readws((Bit8u*)&height);
#endif

				/* buffer this picture */
				host_writed(Real2Host(ds_readd(0xe388)) + 4 * l_si, ds_readd(0xd86e));
				host_writew(Real2Host(ds_readd(0xe384)) + 2 * l_si, width);
				host_writew(Real2Host(ds_readd(0xe380)) + 2 * l_si, height);

				/* adjust the pointer */
				add_ds_ws(0xd86e, width * height + 8);

				/* adjust the counter */
				sub_ds_ds(0xe370, width * height + 8L);

				/* check for error */
				if (ds_readds(0xe370) < 0L) {
					/* "ERROR ON OBJECT MALLOC" */
					GUI_input(p_datseg + 0x5f18, 0);
				}
			}


			/* calculate screen coordinates */
			l3 = const1 - host_readws(Real2Host(ds_readd(0xe384)) + 2 * l_si) / 2 + 10 * (l_di + i);
			l4 = const2 - host_readws(Real2Host(ds_readd(0xe380)) + 2 * l_si) + 5 * (l_di - i);

			l3 += ds_readws(0x6060 + 2 * l_si);
			l4 += ds_readws(0x60de + 2 * l_si);

			/* set screen coordinates */
			ds_writew(0xc011, l3);
			ds_writew(0xc013, l4);
			ds_writew(0xc015, l3 + host_readws(Real2Host(ds_readd(0xe384)) + 2 * l_si) - 1);
			ds_writew(0xc017, l4 + host_readws(Real2Host(ds_readd(0xe380)) + 2 * l_si) - 1);
			ds_writed(0xc019, host_readd(Real2Host(ds_readd(0xe388)) + 4 * l_si));
			ds_writed(0xc00d, ds_readd(0xc3a9));

			do_pic_copy(2);

			ds_writed(0xc00d, ds_readd(0xd2ff));

			}
		}
	}
}

#if !defined(__BORLANDC__)
}
#endif
