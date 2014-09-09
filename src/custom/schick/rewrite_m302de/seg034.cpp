/**
 *	Rewrite of DSA1 v3.02_de functions of seg034 (fight system)
 *	Functions rewritten: 6/6 (complete)
 *
 *	Borlandified and identical
 *	Compiler:	Borland C++ 3.1
 *	Call:		BCC.EXE -mlarge -O- -c -1 -Yo seg034.cpp
 */

#include <stdio.h>

#include "v302de.h"

#include "seg002.h"
#include "seg006.h"
#include "seg007.h"
#include "seg032.h"
#include "seg036.h"
#include "seg038.h"
#include "seg039.h"
#include "seg096.h"
#include "seg097.h"

#if !defined(__BORLANDC__)
namespace M302de {
#endif

/**
 * \brief	TODO
 * \param x_hero	x-coordinate of the hero
 * \param y_hero	y-coordinate of the hero
 * \param x		x-coordinate of the last position
 * \param y		y-coordinate of the last position
 * \param x_diff	x-coordinate difference {-1, 0, 1}
 * \param y_diff	y-coordinate difference {-1, 0, 1}
 * \param max_range	maximal range for the weapon
 *
 * \return	TODO {0, 1}
 **/
signed short seg034_000(signed short x_hero, signed short y_hero,
			signed short x, signed short y,
			signed short x_diff, signed short y_diff,
			signed short max_range)
{
	signed short fight_id_target;
	signed short fight_id;
	signed short beeline;

	fight_id = get_cb_val(x, y);
	fight_id_target = get_cb_val(x + x_diff, y + y_diff);

	beeline = calc_beeline(x + x_diff, y + y_diff, x_hero, y_hero);

	if ((fight_id != 0) && (calc_beeline(x, y, x_hero, y_hero) < beeline) && (beeline <= max_range)) {

		if ((x_hero == x) && (y_hero == y)) {

			if ((fight_id_target < 50) || ((fight_id_target >= 50) && is_in_word_array(fight_id_target - 50, (signed short*)(p_datseg + 0x5f46))))
			{
				return 1;
			} else {
				return 0;
			}

		} else if (((fight_id >= 50) ||
				((fight_id >= 10) && (fight_id < 30) && test_bit0(p_datseg + 0xd110 + 62 * fight_id)) ||
				((fight_id >= 30) && (fight_id < 50) && test_bit0(p_datseg + 0xcc38 + 62 * fight_id)) ||
				((fight_id < 10) && hero_dead(get_hero(fight_id - 1))))
				&&
				((fight_id_target >= 0) &&
				 ((fight_id_target < 50) || ((fight_id_target >= 50) && is_in_word_array(fight_id_target - 50, (signed short*)(p_datseg + 0x5f46))))))
			{

				if (((((x_diff == 1) || (x_diff == -1)) && (y_hero != y))) ||
					((((y_diff == 1) || (y_diff == -1)) && (x_hero != x))))
				{
					return 0;
				} else {
					return 1;
				}

			} else {
				return 0;
			}
	}

	if (x_diff == 1) {
		if ((fight_id_target >= 0) &&
			((fight_id_target < 50) || ((fight_id_target >= 50) && is_in_word_array(fight_id_target - 50, (signed short*)(p_datseg + 0x5f46))))
			&& ((x < 23) && (y == y_hero) && (calc_beeline(x_hero, y_hero, x + 1, y) <= max_range)))
		{
			return 1;
		} else {
			return 0;
		}

		return 0;
	}

	if (x_diff == -1) {
		if ((fight_id_target >= 0) &&
			((fight_id_target < 50) || ((fight_id_target >= 50) && is_in_word_array(fight_id_target - 50, (signed short*)(p_datseg + 0x5f46))))
			&& ((x > 0) && (y == y_hero) && (calc_beeline(x_hero, y_hero, x - 1, y) <= max_range)))
		{
			return 1;
		} else {
			return 0;
		}

		return 0;

	}

	if (y_diff == 1) {
		if ((fight_id_target >= 0) &&
			((fight_id_target < 50) || ((fight_id_target >= 50) && is_in_word_array(fight_id_target - 50, (signed short*)(p_datseg + 0x5f46))))
			&& ((y < 23) && (x == x_hero) && (calc_beeline(x_hero, y_hero, x, y + 1) <= max_range)))
		{
			return 1;
		} else {
			return 0;
		}

		return 0;

	}

	if (y_diff == -1) {
		if ((fight_id_target >= 0) &&
			((fight_id_target < 50) || ((fight_id_target >= 50) && is_in_word_array(fight_id_target - 50, (signed short*)(p_datseg + 0x5f46))))
			&& ((y > 0) && (x == x_hero) && (calc_beeline(x_hero, y_hero, x, y - 1) <= max_range)))
		{
			return 1;
		} else {
			return 0;
		}
	}

	return 0;
}

/**
 * \brief	TODO
 *
 * \param	px
 * \param	py
 * \param max_range	maximal range for the weapon
 *
 * \return	fight-id of the target
 */
signed char seg034_2e3(Bit8u *px, Bit8u *py, const signed short max_range)
{
	signed short x_diff;
	signed short y_diff;
	signed short x;
	signed short y;
	signed short fight_id;
	signed short x_screen;
	signed short y_screen;
	signed short from_kbd;
	/* TODO: the next two variables are constants */
	signed short l8 = 9;
	signed short l9 = 116;

	ds_writew(0xc3d1, ds_writew(0xc3d3, 0));

	update_mouse_cursor();

	ds_writew(0x29a0, ds_writew(0x299c, x_screen = l8 + 10 * (host_readws(px) + host_readws(py))));

	ds_writew(0x29a2, ds_writew(0x299e, y_screen = l9 + 5 * (host_readws(px) - host_readws(py))));

	mouse_move_cursor(ds_readws(0x299c), ds_readws(0x299e));

	refresh_screen_size();

	x = host_readws(px);
	y = host_readws(py);

	if (ds_readbs(0xe38f) != -1) {
		FIG_remove_from_list(ds_readbs(0xe38f), 0);
		ds_writebs(0xe38f, -1);
	}

	ds_writew(0xe066, 0);
	ds_writeb(0xe068, 0);
	ds_writeb(0xe069, host_readbs(px));
	ds_writeb(0xe06a, host_readbs(py));
	ds_writeb(0xe06b, 0);
	ds_writeb(0xe06c, 4);
	ds_writeb(0xe06d, 11);
	ds_writeb(0xe06e, 22);
	ds_writeb(0xe06f, 0);
	ds_writeb(0xe070, 0);
	ds_writeb(0xe071, 21);
	ds_writeb(0xe072, 10);
	ds_writeb(0xe07b, 0);
	ds_writeb(0xe073, 0);
	ds_writeb(0xe075, -1);
	ds_writeb(0xe074, -1);
	ds_writed(0xe07d, ds_readd(0xd85e));
	ds_writeb(0xe077, 1);
	ds_writeb(0xe078, 1);
	ds_writeb(0xe079, -1);

	ds_writeb(0xe38f, FIG_add_to_list(-1));

	draw_fight_screen_pal(0);

	do {
		handle_input();

		if ((ds_readws(ACTION) == 1) || (ds_readws(0xc3d3) != 0)) {

			/* cancel */

			ds_writew(0xc3d3, 0);

			FIG_remove_from_list(ds_readbs(0xe38f), 0);

			ds_writeb(0xe38f, -1);

			draw_fight_screen_pal(0);

			return -99;
		}

		from_kbd = 0;

		if ((ds_readws(ACTION) == 72) ||
			(ds_readws(ACTION) == 80) ||
			(ds_readws(ACTION) == 77) ||
			(ds_readws(ACTION) == 75))
		{
			from_kbd = 1;
		} else {

			x_diff = ds_readws(0x299c) - x_screen;
			y_diff = ds_readws(0x299e) - y_screen;

			if (((y_diff > 0) && (x_diff <= -10)) ||
				((x_diff < 0) && (y_diff >= 5)))
			{
				ds_writew(ACTION, 80);

			} else if (((y_diff < 0) && (x_diff >= 10)) ||
					((x_diff > 0) && (y_diff <= -5)))
			{
				ds_writew(ACTION, 72);

			} else if (((y_diff > 0) && (x_diff >= 10)) ||
					((x_diff > 0) && (y_diff >= 5)))
			{
				ds_writew(ACTION, 77);

			} else if (((y_diff < 0) && (x_diff <= -10)) ||
					((x_diff < 0) && (y_diff <= -5)))
			{
				ds_writew(ACTION, 75);
			}
		}

		if (ds_readws(0xc3d1) != 0) {
			ds_writew(ACTION, 28);
			ds_writew(0xc3d1, 0);
		}

		if (ds_readws(ACTION) == 77) {

			if (seg034_000(x, y, host_readws(px), host_readws(py), 1, 0, max_range)) {
				inc_ptr_ws(px);
			}
		} else if (ds_readws(ACTION) == 75) {
			if (seg034_000(x, y, host_readws(px), host_readws(py), -1, 0, max_range)) {
				dec_ptr_ws(px);
			}
		} else if (ds_readws(ACTION) == 72) {
			if (seg034_000(x, y, host_readws(px), host_readws(py), 0, 1, max_range)) {
				inc_ptr_ws(py);
			}
		} else if (ds_readws(ACTION) == 80) {
			if (seg034_000(x, y, host_readws(px), host_readws(py), 0, -1, max_range)) {
				dec_ptr_ws(py);
			}
		}

		if ((ds_readbs(0xe069) != host_readws(px)) || (ds_readbs(0xe06a) != host_readws(py))) {

			update_mouse_cursor();

			x_screen = l8 + 10 * (host_readws(px) + host_readws(py));
			y_screen = l9 + 5 * (host_readws(px) - host_readws(py));

			if (from_kbd != 0) {
				ds_writew(0x29a0, ds_writew(0x299c, x_screen));
				ds_writew(0x29a2, ds_writew(0x299e, y_screen));

				mouse_move_cursor(ds_readws(0x299c), ds_readws(0x299e));
			}

			refresh_screen_size();
			FIG_call_draw_pic();
			fight_id = get_cb_val(host_readws(px), host_readws(py));

			if ((fight_id > 0) && (fight_id < 50)) {

				if (fight_id < 10) {
					FIG_draw_char_pic(1, fight_id);
				} else {

					if (fight_id >= 30) {
						FIG_draw_enemy_pic(1, fight_id - 20);
					} else {
						FIG_draw_enemy_pic(1, fight_id);
					}
				}
			}

			FIG_remove_from_list(ds_readbs(0xe38f), 1);

			ds_writeb(0xe069, host_readws(px));
			ds_writeb(0xe06a, host_readws(py));

			FIG_add_to_list(ds_readbs(0xe38f));
			FIG_draw_figures();
			FIG_set_gfx();
		}

	} while (ds_readws(ACTION) != 28);

	FIG_remove_from_list(ds_readbs(0xe38f), 0);

	ds_writeb(0xe38f, -1);

	draw_fight_screen_pal(0);

	return get_cb_val(host_readws(px), host_readws(py));
}

struct coord {
	signed short x;
	signed short y;
};

struct dummy {
	struct coord a[4];
};

void seg034_718(signed short x, signed short y, Bit8u *px, Bit8u *py, signed short dir, signed short mode)
{
	signed short new_dir;
	signed short dist;
	signed short new_x;
	signed short new_y;
	signed char done;

#if !defined(__BORLANDC__)
        struct dummy a;
        a.a[0].x = 1;
        a.a[0].y = 0;
        a.a[1].x = 0;
        a.a[1].y = -1;
        a.a[2].x = -1;
        a.a[2].y = 0;
        a.a[3].x = 0;
        a.a[3].y = 1;
#else
        struct dummy a = *(struct dummy*)(p_datseg + 0x5f7c);
#endif

	done = 0;

	host_writew(px, x);
	host_writew(py, y);

	if (get_cb_val(x, y) == 0) {

		if (mode == 0) {
			return;
		}

		if (get_cb_val(x - a.a[dir].x, y - a.a[dir].y) == 0) {
			return;
		}
	}

	dist = 1;

	while (!done) {

		for (new_dir = 0; new_dir < 4; new_dir++) {

			new_x = host_readws(px) + a.a[new_dir].x * dist;
			new_y = host_readws(py) + a.a[new_dir].y * dist;

			if ((new_x >= 0) && (new_x < 24) && (new_y >= 0) && (new_y < 24) &&
				!get_cb_val(new_x, new_y))
			{

				if ((mode == 0) ||
					(!get_cb_val(new_x - a.a[dir].x, new_y - a.a[dir].y)))
				{

					done = 1;
					host_writew(px, new_x);
					host_writew(py, new_y);
					break;
				}
			}
		}

		dist++;
	}
}

void seg034_87b(void)
{
	signed short i;
	signed short x;
	signed short y;
	signed short l4;
	Bit8u *p1;
	Bit8u *p2;
	Bit8u *p3;

#if !defined(__BORLANDC__)
        struct dummy a;
        a.a[0].x = 1;
        a.a[0].y = 0;
        a.a[1].x = 0;
        a.a[1].y = -1;
        a.a[2].x = -1;
        a.a[2].y = 0;
        a.a[3].x = 0;
        a.a[3].y = 1;
#else
        struct dummy a = *(struct dummy*)(p_datseg + 0x5f8c);
#endif

	for (i = 0; i < ds_readws(NR_OF_ENEMIES); i++) {

		p1 = p_datseg + ENEMY_SHEETS + 62 * i;

		if (host_readbs(p1 + 0x35) > 0) {

			dec_ptr_bs(p1 + 0x35);

			if (!host_readbs(p1 + 0x35)) {

				if (!enemy_bit10(p1)) {

					if (is_in_byte_array(host_readbs(p1 + 0x01), p_datseg + TWO_FIELDED_SPRITE_ID)) {

						seg034_718(	host_readbs(Real2Host(ds_readd(0xbd28)) + 0x17 + 5 * i),
								host_readbs(Real2Host(ds_readd(0xbd28)) + 0x18 + 5 * i),
								(Bit8u*)&x, (Bit8u*)&y,
								host_readbs(Real2Host(ds_readd(0xbd28)) + 0x19 + 5 * i),
								1);

						p2 = Real2Host(FIG_get_ptr(host_readbs(p1 + 0x26)));

						host_writebs(p2 + 3, (signed char)x);
						host_writebs(p2 + 4, (signed char)y);

						l4 = ds_readbs(0xe35a + host_readbs(p2 + 0x13));

						p3 = Real2Host(FIG_get_ptr(l4));

						host_writeb(p3 + 3,
								x - a.a[host_readbs(Real2Host(ds_readd(0xbd28)) + 0x19 + 5 * i)].x);
						host_writeb(p3 + 4,
								y - a.a[host_readbs(Real2Host(ds_readd(0xbd28)) + 0x19 + 5 * i)].y);

						FIG_remove_from_list(host_readbs(p1 + 0x26), 1);

						FIG_add_to_list(host_readbs(p1 + 0x26));

						FIG_remove_from_list(l4, 1);

						FIG_add_to_list(l4);
					} else {
						seg034_718(	host_readbs(Real2Host(ds_readd(0xbd28)) + 0x17 + 5 * i),
								host_readbs(Real2Host(ds_readd(0xbd28)) + 0x18 + 5 * i),
								(Bit8u*)&x, (Bit8u*)&y,
								host_readbs(Real2Host(ds_readd(0xbd28)) + 0x19 + 5 * i),
								0);

						p2 = Real2Host(FIG_get_ptr(host_readbs(p1 + 0x26)));

						host_writebs(p2 + 3, (signed char)x);
						host_writebs(p2 + 4, (signed char)y);

						FIG_remove_from_list(host_readbs(p1 + 0x26), 1);

						FIG_add_to_list(host_readbs(p1 + 0x26));
					}

					place_obj_on_cb(x, y, i + 10, host_readbs(p1 + 1),
						(signed short)host_readbs(Real2Host(ds_readd(0xbd28)) + 0x19 + 5 * i));

					FIG_set_12_13(host_readbs(p1 + 0x26));

				} else {
					/* set the enemy dead */
					or_ptr_bs(p1 + 0x31, 1);
				}
			}
		}
	}
}

signed short seg034_aec(void)
{
	signed short i = 0;

	while (ds_readbs(0xd823 + i) != -1) {
		i++;
	}

	if (ds_readbs((0xd823 + 1) + i) == -2) {
		return 99;
	}

	return i;
}

/**
 * \brief Moves a hero on the chessboard
 *
 * \param hero		pointer to the hero
 * \param hero_pos	position of the hero in the group
 * \param px		pointer to the x-coordinate on the chessboard
 * \param py		pointer to the y-coordinate on the chessboard
 */
void FIG_move_hero(Bit8u *hero, signed short hero_pos, Bit8u *px, Bit8u *py)
{
	signed short l_si;
	signed short l_di;
	signed short x;
	signed short y;
	signed short l4;
	signed short x_bak;
	signed short y_bak;
	signed short fg_bak;
	signed short bg_bak;
	signed short x_screen;
	signed short y_screen;
	signed short l9;
	signed short l10 = 9;
	signed short l11 = 116;
	signed char l12;
	signed char l13;
	signed char l14;
	signed short l15;
	signed short l16;
	signed short l17;

	update_mouse_cursor();

	ds_writew(0x29a0, ds_writew(0x299c, x_screen = l10 + 10 * (host_readws(px) + host_readws(py))));

	ds_writew(0x29a2, ds_writew(0x299e, y_screen = l11 + 5 * (host_readws(px) - host_readws(py))));

	mouse_move_cursor(ds_readws(0x299c), ds_readws(0x299e));

	refresh_screen_size();

	ds_writew(0xc3d1, ds_writew(0xc3d3, 0));

	x = host_readws(px);
	y = host_readws(py);
	x_bak = x;
	y_bak = y;

	if (ds_readbs(0xe38f) != -1) {
		FIG_remove_from_list(ds_readbs(0xe38f), 0);
		ds_writebs(0xe38f, -1);
	}

	ds_writew(0xe066, 0);
	ds_writeb(0xe068, 0);
	ds_writeb(0xe069, (signed char)x);
	ds_writeb(0xe06a, (signed char)y);
	ds_writeb(0xe06b, 0);
	ds_writeb(0xe06c, 4);
	ds_writeb(0xe06f, 0);
	ds_writeb(0xe070, 0);
	ds_writeb(0xe071, 21);
	ds_writeb(0xe072, 10);
	ds_writeb(0xe06d, 11);
	ds_writeb(0xe06e, 22);
	ds_writeb(0xe07b, 0);
	ds_writeb(0xe073, 0);
	ds_writeb(0xe075, -1);
	ds_writeb(0xe074, -1);
	ds_writed(0xe07d, ds_readd(0xd85e));
	ds_writeb(0xe077, 1);
	ds_writeb(0xe078, 1);
	ds_writeb(0xe079, -1);

	ds_writeb(0xe38f, FIG_add_to_list(-1));

	draw_fight_screen_pal(0);

	do {
		handle_input();

		x_bak = x;
		y_bak = y;
		l9 = 0;

		if ((ds_readws(ACTION) == 72) ||
			(ds_readws(ACTION) == 80) ||
			(ds_readws(ACTION) == 77) ||
			(ds_readws(ACTION) == 75))
		{
			l9 = 1;
		} else {

			l16 = ((ds_readws(0x299c) - l10) / 10 + (ds_readws(0x299e) - l11) / 5) / 2;
			l17 = -((ds_readws(0x299e) - l11) / 5 - l16);

			if ((l16 != x) || (l17 != y)) {

				if ((l16 >= -1) && (l16 <= 24) && (l17 >= -1) && (l17 <= 24)) {
					ds_writew(ACTION, 999);
				}
			}
		}

		if (ds_readws(0xc3d1) != 0) {
			ds_writew(0xc3d1, 0);
			ds_writew(ACTION, 28);
		}

		if ((ds_readws(ACTION) == 77) && (x < 23)) {
			x++;
		} else if ((ds_readws(ACTION) == 75) && (x >= 0)) {
			x--;
		} else if ((ds_readws(ACTION) == 72) && (y <= 23)) {
			y++;
		} else if ((ds_readws(ACTION) == 80) && (y >= 0)) {
			y--;
		} else if (ds_readws(ACTION) == 999) {
			x = l16;
			y = l17;
		}

		if ((x < 0) && (y < 0)) {
			x = 0;
		}
		if ((x < 0) && (y > 23)) {
			x = 0;
		}

		if ((x != x_bak) || (y != y_bak)) {

			update_mouse_cursor();

			x_screen = l10 + 10 * (x + y);
			y_screen = l11 + 5 * (x - y);

			if (l9 != 0) {
				ds_writew(0x29a0, ds_writew(0x299c, x_screen));

				ds_writew(0x29a2, ds_writew(0x299e, y_screen));

				mouse_move_cursor(ds_readws(0x299c), ds_readws(0x299e));
			}

			refresh_screen_size();

			FIG_call_draw_pic();

			FIG_remove_from_list(ds_readbs(0xe38f), 0);

			ds_writeb(0xe069, x);
			ds_writeb(0xe06a, y);
			ds_writed(0xe07d, ds_readd(0xd85e));
			ds_writeb(0xe079, -1);
			ds_writeb(0xe38f, FIG_add_to_list(-1));

			FIG_draw_figures();
			FIG_set_gfx();

			l_si = 0;
			l13 = 0;

			if ((host_readws(px) != x) || (host_readws(py) != y)) {

				l15 = 0;

				/* TODO: why not (x > 23) ? */
				if ((x < 0) || (y < 0) || (y > 23)) {

					if (x < 0) {
						x = 0;
						l15 = 1;
					} else if (y < 0) {
						y = 0;
						l15 = 2;
					} else {
						y = 23;
						l15 = 3;
					}

					if ((get_cb_val(x, y) != 0) &&
						((host_readws(px) != x) || (host_readws(py) != y)))
					{

						l_si = 3;

						if (l15 == 1) {
							x = -1;
						} else if (l15 == 2) {
							y = -1;
						} else {
							y = 24;
						}

					} else {
						l14 = get_cb_val(x, y);
					}
				} else {
					l12 = get_cb_val(x, y);
				}

				if (l_si != 3) {

					if ((l15 != 0) && (host_readws(px) == x) && (host_readws(py) == y))
					{
						ds_writeb(0xd823, -1);
						l13 = 0;
					} else {
						FIG_set_cb_field(y, x, 124);
						l4 = seg038(hero, hero_pos, host_readws(px), host_readws(py), 10);
						l13 = seg034_aec();
					}

					if (l15 != 0) {
						FIG_set_cb_field(y, x, l14);

						l_di = 0;
						while (ds_readbs(0xd823 + l_di) != -1) {
							l_di++;
						}

						if (l15 == 1) {
							x = -1;
							if (host_readbs(hero + 0x33) > l13) {
								ds_writeb((0xd823 + 0) + l_di, 2);
								ds_writeb((0xd823 + 1) + l_di, -1);
							}
						} else if (l15 == 2) {
							y = -1;
							if (l13 < (host_readbs(hero + 0x33) - 1)) {
								ds_writeb((0xd823 + 0) + l_di, 1);
								ds_writeb((0xd823 + 1) + l_di, -1);
							}
						} else {
							y = 24;
							if (l13 < (host_readbs(hero + 0x33) - 1)) {
								ds_writeb((0xd823 + 0) + l_di, 3);
								ds_writeb((0xd823 + 1) + l_di, -1);
							}
						}

						l13++;
					} else {
						FIG_set_cb_field(y, x, l12);
					}

					if (l12 >= 50) {
						l_si = 3;
					} else if (l12 >= 10) {
						/* l12 is a monster */
						if (!test_bit0(p_datseg + 0xd37c + 62 * (l12 - 10 - (l12 >= 30 ? 20 : 0))))
						{
							l_si = 3;
						}
					} else if (l12 >0) {

						if (!hero_dead(get_hero(l12 - 1)) &&
							!hero_unc(get_hero(l12 - 1)) &&
							(l12 != hero_pos + 1))
						{
							l_si = 3;
						}
					} else if (l4 == -1) {
						l_si = 4;
					} else if (host_readbs(hero + 0x33) < l13) {
						l_si = 2;
					} else if ((x > 23) || (x < 0) || (y > 23) || (y < 0) || (get_cb_val(x, y) < 0)) {
						if ((host_readbs(Real2Host(ds_readd(0xbd2c)) + 0x14) > 3) || (x >= 0))
						{
							l_si = 1;
						}
					}
				}
			}

			get_textcolor(&fg_bak, &bg_bak);
			set_textcolor(255, 0);

			if (!l_si) {
				sprintf((char*)Real2Host(ds_readd(DTP2)),
					(char*)get_dtp(0x30), l13);
			}


			GUI_print_string(l_si == 1 ? get_dtp(0x34) :
						(l_si == 3 ? get_dtp(0x78) :
						(l_si == 2 ? get_dtp(0x80) :
						(l_si == 4 ? get_dtp(0xc0) : Real2Host(ds_readd(DTP2))))),
					 5, 190);

			set_textcolor(fg_bak, bg_bak);
		}

		if ((ds_readws(0xc3d3) != 0) || (ds_readws(ACTION) == 1)) {
			ds_writew(0xc3d3, 0);
			ds_writew(ACTION, 28);
			l_si = 5;
		}

	} while (ds_readws(ACTION) != 28);

	get_textcolor(&fg_bak, &bg_bak);
	set_textcolor(255, 0);
	GUI_print_string(p_datseg + 0x5f9c, 5, 190);
	set_textcolor(fg_bak, bg_bak);

	if ((host_readws(px) != x) || (host_readws(py) != y)) {

		if (!l_si || (l_si == 1) || (l_si == 2)) {

			if (l_si == 1) {

				if (GUI_bool(get_dtp(0x8c))) {
					host_writeb(hero + 0x84, 16);
					l_si = 0;
				} else {
					FIG_remove_from_list(ds_readbs(0xe38f), 0);
					ds_writeb(0xe38f, -1);
				}
			}

			if (!l_si || (l_si == 2)) {

				FIG_remove_from_list(ds_readbs(0xe38f), 0);
				ds_writeb(0xe38f, -1);

				seg036_00ae(hero, hero_pos);

				if (host_readbs(hero + 0x84) == 16) {
					host_writeb(hero + 0x33, 0);
				} else {
					FIG_search_obj_on_cb(hero_pos + 1, (signed short*)px, (signed short*)py);
				}
			}

		} else if (l_si == 3) {
			GUI_output(get_dtp(0xc4));
		} else if (l_si == 4) {
			GUI_output(get_dtp(0xc8));
		}
	}

	if (ds_readbs(0xe38f) != -1) {
		FIG_remove_from_list(ds_readbs(0xe38f), 0);
		ds_writebs(0xe38f, -1);
	}
}

#if !defined(__BORLANDC__)
}
#endif
