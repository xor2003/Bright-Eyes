/**
 *	Rewrite of DSA1 v3.02_de functions of seg036 (Fight Hero KI)
 *	Functions rewritten: 7/10
 */

#include <string.h>

#include "v302de.h"

#include "seg002.h"
#include "seg005.h"
#include "seg006.h"
#include "seg007.h"
#include "seg032.h"
#include "seg038.h"
#include "seg106.h"

#if !defined(__BORLANDC__)
namespace M302de {
#endif

/* 0x000 */
/* static */
/* Borlandified  and identical */

/**
 * KI_copy_ani_sequence() - copies an ani sequence
 * @dst:	destination pointer for data
 * @ani_nr:
 * @mode:	DAT-File to use 3 = WEAPANI.DAT, else ANI.DAT
 *
 * Returns the length of the sequence in bytes.
 */
signed short KI_copy_ani_sequence(Bit8u *dst, signed short ani_nr, signed short mode)
{
	Bit8u *p_datbuffer;
	Bit8u *p_datitem;
	signed char len;

	signed short i;
	signed short ani_max_nr;


	/* set the right buffer */
	p_datbuffer = Real2Host(ds_readd(BUFFER_ANIDAT));

	/* This function is never calld with mode == 3 */
	if (mode == 3)
		p_datbuffer = Real2Host(ds_readd(BUFFER_WEAPANIDAT));

	/* read how many ani sequences are in the file */
	ani_max_nr = host_readw(p_datbuffer);

	/* check if the desired ani_nr is in the range */
	if (ani_nr < 0)
		return 0;

	if (ani_nr > ani_max_nr)
		return 0;

	/* set p_datitem to the first (0) ani sequence */
	p_datitem = p_datbuffer;
	p_datitem += ani_max_nr + 2;
	/* set len to the lenght first (0) ani sequence */
	len = host_readb(p_datbuffer + 2);

	/* forward to the desired ani sequence */
	for (i = 1; i <= ani_nr; i++) {
		p_datitem += len;
		len = host_readb(p_datbuffer + i + 2);
	}

	p_datitem++;

	len = len - 2;

	/* copy the ani sequenecs to dst */
	for (i = 0; len > i; i++) {
		host_writeb(dst, host_readb(p_datitem));
		p_datitem++;
		dst++;
	}

	return len;
}

/* Borlandified  and identical */
void seg036_00ae(Bit8u *in_ptr, signed short a2)
{
	signed short i;
	signed char dir1;
	signed char dir2;
	Bit8u *ptr1;
	signed char dir3;
	Bit8u *ptr2;

	ds_writeb(0xd8ce, 0);
	ds_writeb(0xd9c0, host_readbs(in_ptr + 0x9b));

	ptr1 = p_datseg + 0xd8cf;
	ptr2 = Real2Host(ds_readd(0x2555 + 4 * host_readbs(in_ptr + 0x9b)));

	i = 0;

	while (ds_readbs(0xd823 + i) != -1) {

		if (host_readbs(in_ptr + 0x82) != ds_readbs(0xd823 + i)) {

			dir2 = dir1 = -1;
			dir3 = host_readbs(in_ptr + 0x82);
			dir2 = dir3;
			dir3++;

			if (dir3 == 4) {
				dir3 = 0;
			}

			if (ds_readbs(0xd823 + i) != dir3) {

				dir1 = dir3;
				dir3++;

				if (dir3 == 4) {
					dir3 = 0;
				}

				if (ds_readbs(0xd823 + i) != dir3) {

					dir2 = host_readbs(in_ptr + 0x82) + 4;
					dir1 = -1;
				}
			}

			host_writeb(in_ptr + 0x82, ds_readbs(0xd823 + i));
			ptr1 += KI_copy_ani_sequence(ptr1, host_readws(ptr2 + dir2 * 2), 2);

			if (dir1 != -1) {
				ptr1 += KI_copy_ani_sequence(ptr1, host_readws(ptr2 + dir1 * 2), 2);
			}
		}

		if (ds_readbs(0xd823 + i) == ds_readbs(0xd824 + i)) {
			ptr1 += KI_copy_ani_sequence(ptr1, host_readws(ptr2 + (ds_readbs(0xd823 + i) + 12) * 2), 2);
			i += 2;
			host_writeb(in_ptr + 0x33, host_readbs(in_ptr + 0x33) - 2);
		} else {
			ptr1 += KI_copy_ani_sequence(ptr1, host_readws(ptr2 + (ds_readbs(0xd823 + i) + 8) * 2), 2);
			i ++;
			dec_ptr_bs(in_ptr + 0x33);
		}
	}

	host_writeb(ptr1, -1);
	FIG_call_draw_pic();
	FIG_remove_from_list(ds_readbs(0xe38e), 0);
	ds_writeb(0xe38e, -1);
	FIG_set_0e(host_readbs(in_ptr + 0x81), 0);
	draw_fight_screen(0);
	memset(p_datseg + 0xd8ce, -1, 0xf3);
	FIG_init_list_elem(a2 + 1);
}

/**
 * KI_change_hero_weapon() - changes the weapon of a hero
 * @hero:	the hero with a broken weapon
 *
 * Returns
 *	 1 if a weapon was found or
 *	 0 if the hero fights now with bare hands.
*/
/* Borlandified  and identical */
signed short KI_change_hero_weapon(Bit8u *hero)
{
	signed short pos;
	signed short has_new_weapon = 0;
	Bit8u *item_p;
	signed short item_id;
	Bit8u *ptr;

	for (pos = 7; pos < 23; pos++) {

		item_id = host_readws(hero + 0x196 + pos * 14);
		item_p = get_itemsdat(item_id);

		/* grab the first melee weapon on top of the knapsack,
		 * and exchange it with the broken weapon. */
		if (item_weapon(item_p) &&
			(host_readbs(item_p + 3) != 7) &&
			(host_readbs(item_p + 3) != 8) &&
			(host_readbs(item_p + 3) != 5))
		{
			move_item(3, pos, hero);
			has_new_weapon = 1;
			break;
		}
	}

	if (!has_new_weapon) {

		/* find a free slot, to get rid of the broken weapon */
		for (pos = 7; pos < 23; pos++) {
			if (host_readws(hero + 0x196 + pos * 14) == 0) {
				move_item(3, pos, hero);
				has_new_weapon = 2;
				break;
			}
		}

		/* if nothing helps, put it in the left hand */
		if (!has_new_weapon) {
			move_item(3, 4, hero);
		}

		has_new_weapon = 0;
	}

	ptr = Real2Host(FIG_get_ptr(host_readbs(hero + 0x81)));
	host_writeb(ptr + 0x2, host_readbs(hero + 0x82));
	host_writeb(ptr + 0xd, -1);
	draw_fight_screen_pal(0);
	host_writeb(hero + 0x33, host_readbs(hero + 0x33) - 2);

	return has_new_weapon;
}

/* 0x39b */

/**
 * KI_can_attack_neighbour() - check if a neighbour can be attacked
 * @start_x:	X-Coordinate of the hero
 * @start_y:	Y-Coordinate of the hero
 * @offset_x:	X-Direction -1/0/+1
 * @offset_y:	Y-Direction -1/0/+1
 * @mode:	0 = Attack only Enemies / 1 = Attack heroes and enemies / 2 = Attack only Heros
 *
 * Returns 1 if an attack is possible in that mode, else 0.
 */
/* Borlandified  and identical */
signed short KI_can_attack_neighbour(signed short start_x, signed short start_y,
			signed short offset_x, signed short offset_y,
			signed short mode)
{
	signed char target = get_cb_val(start_x + offset_x, start_y + offset_y);

	if (mode == 1) {
		/* target is hero or enemy */
		if ( ( (target > 0) && (target < 10) &&
			!hero_dead(get_hero(target - 1)) &&
			!hero_unc(get_hero(target - 1))
			) || (

			((target >= 10) && (target < 30) &&
				!enemy_dead(p_datseg + 0xd0df + target * 0x3e) &&
				enemy_bb(p_datseg + 0xd0df + target * 0x3e))))
		{
			return 1;
		} else {
			return 0;
		}

	} else if (!mode) {
		/* target is an enemy */
		if ((target >= 10) && (target < 30) &&
			!enemy_dead(p_datseg + 0xd0df + target * 0x3e))
		{
			return 1;
		} else {
			return 0;
		}
	} else if (mode == 2) {
		/* target is a hero */
		if ((target > 0) && (target < 10) &&
			!hero_dead(get_hero(target - 1)) &&
			!hero_unc(get_hero(target - 1))) {

			return 1;
		} else {
			return 0;
		}
	}

	return 0;
}

signed short KI_search_spell_target(signed short x, signed short y,
				signed short dir, signed short mode)
{
	signed short x_diff;
	signed short y_diff;
	signed char obj_id;
	signed short done;
	signed short will_attack;

	done = 0;
	x_diff = 0;
	y_diff = 0;
	will_attack = 0;

	while (done == 0) {

		/* calculate the offset from direction */
		if (dir == 0) {
			x_diff++;
		} else if (dir == 1) {
			y_diff--;
		} else if (dir == 2) {
			x_diff--;
		} else {
			y_diff++;
		}

		/* check the field is on the chessboard */
		if ((y + y_diff < 0) || (y + y_diff > 23) ||
			(x + x_diff < 0) || (x + x_diff > 23))
		{
			done = 1;
			continue;
		}

		/* get the fight object ID of the object on that field */
		obj_id = get_cb_val(x + x_diff, y + y_diff);

		if (mode == 1) {

			/* attack everyone */
			if ( ((obj_id > 0) && (obj_id < 10) &&
				!hero_dead(get_hero(obj_id - 1)) &&
				!hero_unc(get_hero(obj_id - 1))
				) || (
				(obj_id >= 10) && (obj_id < 30) &&
					!enemy_dead(p_datseg + 0xd0df + obj_id * 62) &&
					enemy_bb(p_datseg + 0xd0df + obj_id * 62))
				)
			{
				will_attack = 1;
				done = 1;

			} else if ( (obj_id != 0) && (((obj_id >= 10) && (obj_id < 30) &&
					!enemy_dead(p_datseg + 0xd0df + obj_id * 62)
					) || (obj_id >= 50) &&
						!is_in_word_array(obj_id - 50, (signed short*)(p_datseg + 0x5f46))
					))
				{
					done = 1;
				}

		} else if (mode == 0) {

			/* attack only enemies */
			if ((obj_id >= 10) && (obj_id < 30) && !enemy_dead(p_datseg + 0xd0df + obj_id * 62))
			{
				will_attack = 1;
				done = 1;
			} else if ((obj_id != 0) &&
					 (
#ifdef M302de_ORIGINAL_BUGFIX
						(obj_id > 0) &&
#endif
						 ((obj_id < 10) &&
						!hero_dead(get_hero(obj_id - 1)) &&
						!hero_unc(get_hero(obj_id - 1))
						) || (
							(obj_id >= 50) &&
							!is_in_word_array(obj_id - 50, (signed short*)(p_datseg + 0x5f46))
						)
					)
				)
				{
					done = 1;
				}
		}
	}

	if (will_attack == 0) {
		return 0;
	} else {
		return obj_id;
	}
}

/* 0x863 */

/**
 * KI_get_spell() - ???
 * @spell:	spell index
 * @mode:	mode 0/1
 */
signed short KI_get_spell(signed short spell, signed short mode)
{
	Bit8u * p;
	signed short retval = -1;

	/* make a pointer to the spell description */
	p = p_datseg + spell * 10 + 0x99d;

	if (mode == 0) {
		if (host_readb(p + 7) == 2)
			retval = 1;
		else if (host_readb(p + 7) == 1 || host_readb(p + 7) == 3)
			retval = 0;
		else
			retval = 2;
	} else {
		if (host_readb(p + 7) == 3)
			retval = 1;
		else if (host_readb(p + 7) == 0)
			retval = 2;
	}

	return retval;
}

/* 0xc39 */

/**
 * KI_count_available_heros() - count heros in group
 * @index:	index of the calling hero
 *
 * Retval: Number of heros in the group - 1
 */
signed short KI_count_heros(signed short index)
{
	signed short cnt = 0;
	signed short i;

	/* for each hero in this group */
	for (i = 0; ds_readb(0x2d36 + ds_readb(CURRENT_GROUP)) > i; i++) {

		if (i == index)
			continue;

		if (!check_hero(get_hero(i)))
			continue;

		cnt++;
	}

	return cnt;
}

#if !defined(__BORLANDC__)
}
#endif
