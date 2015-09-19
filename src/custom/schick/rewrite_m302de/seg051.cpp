/*
 *	Rewrite of DSA1 v3.02_de functions of seg051 (wilderness camp)
 *	Functions rewritten: 3/3 (complete)
 *
 *	Borlandified and identical
 *	Compiler:	Borland C++ 3.1
 *	Call:		BCC.EXE -mlarge -O- -c -1 -Yo seg051.cpp
*/

#include <stdio.h>
#include <string.h>

#include "v302de.h"

#include "seg002.h"
#include "seg004.h"
#include "seg007.h"
#include "seg025.h"
#include "seg027.h"
#include "seg029.h"
#include "seg032.h"
#include "seg047.h"
#include "seg049.h"
#include "seg051.h"
#include "seg096.h"
#include "seg097.h"
#include "seg098.h"
#include "seg103.h"
#include "seg104.h"
#include "seg105.h"

#if !defined(__BORLANDC__)
namespace M302de {
#endif

void do_wildcamp(void)
{
	signed short l_si;
	signed short l_di;
	signed short i;
	signed short done;
	signed short answer;
	signed char stock_tries;
	signed char herb_tries;
	signed char herb_hours;
	RealPt hero;
	signed char l3;
	signed short l4;
	signed short l5;
	signed short l6;
	signed char have_guards;
	signed char l8;

	done = 0;
	stock_tries = 0;
	herb_tries = 0;
	l_di = ds_writews(0x2846, 1);

	for (i = 0; i <= 6; i++) {
		ds_writebs(0xe3c1 + i, ds_writebs(0xe3c8 + i, ds_writebs(0xe3cf + i , ds_writeb(0xe3d6 + i, 0))));
	}

	for (i = 0; i < 3; i++) {
		ds_writebs(0xe3be + i, -1);
	}

	i = !ds_readb(0xe4c8) ? 6 : 7;
	draw_loc_icons(i, 9, 16, 25, 11, 20, 17, 48);

	while (done == 0) {

		if (ds_readws(0x2846) != 0) {
			draw_main_screen();
			set_var_to_zero();
			load_ani(2);
			init_ani(0);
			GUI_print_loc_line(get_ltx(0x4c8));
			set_audio_track(149);
			ds_writew(0x2846, l_di = 0);
		}

		if (l_di) {
			GUI_print_loc_line(get_ltx(0x4c8));
			l_di = 0;
		}

		handle_gui_input();

		if (ds_readws(0xc3d3) != 0 || ds_readws(ACTION) == 73) {

			i = !ds_readb(0xe4c8) ? 6 : 7;

			answer = GUI_radio(get_ltx(0x4cc), i,
						get_ltx(0x4d0), get_ltx(0x4d4),
						get_ltx(0x350), get_ltx(0x4d8),
						get_ltx(0x4ec), get_ltx(0x4f0),
						get_ltx(0xcb8)) -1;

			if (answer != -2) {
				ds_writews(ACTION, answer + 129);
			}
		}

		if (ds_readws(ACTION) == 129) {

			answer = -1;

			for (i = 0; i <= 6; i++) {

				if (!ds_readbs(0xe3cf + i) && !ds_readbs(0xe3c1 + i) &&
					!ds_readbs(0xe3c8 + i) && is_hero_available_in_group(get_hero(i)))
				{
					ds_writeb(0xe3d6 + i, 0);
					answer = 0;
				}
			}

			if (answer == -1) {
				GUI_output(get_ltx(0x530));
			} else {

				for (i = 0; i < 3; i++) {

					sprintf((char*)Real2Host(ds_readd(DTP2)), (char*)get_ltx(0x504), i + 1);

					do {
						answer = select_hero_ok(Real2Host(ds_readd(DTP2)));

						/* Original-Bug: not checked answer for following options */
						if ((answer != -1 && ds_readbs(0xe3cf + answer) != 0) ||
							ds_readbs(0xe3c1 + answer) != 0 ||
							ds_readbs(0xe3c8 + answer) != 0)
						{
							GUI_output(get_ltx(0x52c));
							answer = -1;
						}

						if (answer != -1) {
							if (hero_busy(get_hero(answer))) {
								GUI_output(get_ltx(0xb68));
								answer = -1;
							}
						}

					} while (answer == -1);

					inc_ds_bs_post(0xe3d6 + answer);
					ds_writebs(0xe3be + i, answer);
				}
			}

		} else if (ds_readws(ACTION) == 130) {

			if (ds_readb(0xe4c8) == 99) {
				l_di = replenish_stocks(ds_readws(0xd331) + 99, stock_tries);
			} else {
				l_di = replenish_stocks(ds_readws(0xd331), stock_tries);
			}

			if (l_di) {
				stock_tries++;
			}

		} else if (ds_readws(ACTION) == 131) {

			GUI_use_talent2(0, get_ltx(0x62c));

		} else if (ds_readws(ACTION) == 132) {

			answer = select_hero_ok(get_ltx(0x4f4));

			if (answer != -1) {
				if (hero_busy(get_hero(answer))) {
					GUI_output(get_ltx(0xb68));
					answer = -1;
				}
			}

			if (answer != -1) {

				hero = (RealPt)ds_readd(HEROS) + 0x6da * answer;


				if (host_readbs(Real2Host(hero) + 0x21) >= 7) {

					if (ds_readbs(0xe3d6 + answer) != 0 ||
						ds_readbs(0xe3c1 + answer) != 0 ||
						ds_readbs(0xe3c8 + answer) != 0)
					{
						GUI_output(get_ltx(0x52c));

					} else {

						if (ds_readbs(0xe3cf + answer) != 0) {
							GUI_output(get_ltx(0x538));
						} else {
							ds_writebs(0xe3cf + answer, use_magic(hero));
						}
					}
				} else {
					GUI_output(get_ltx(0x528));
				}
			}

		} else if (ds_readws(ACTION) == 133) {
			/* COLLECT HERBS */

			ds_writews(SKILLED_HERO_POS, get_skilled_hero_pos(29));

			answer = select_hero_ok(get_ltx(0x518));

			if (answer != -1 && hero_busy(get_hero(answer))) {
				GUI_output(get_ltx(0xb68));
				answer = -1;
			}

			if (answer != -1) {

				if (ds_readbs(0xe3c1 + answer) != 0)
				{

					sprintf((char*)Real2Host(ds_readd(DTP2)),
						(char*)get_ltx(0xc8c),
						(char*)get_hero(answer) + 0x10);

					GUI_output(Real2Host(ds_readd(DTP2)));

				} else if (ds_readbs(0xe3d6 + answer) != 0 ||
						ds_readbs(0xe3c8 + answer) != 0 ||
						ds_readbs(0xe3cf + answer) != 0)
				{
					GUI_output(get_ltx(0x52c));

				} else {

					if (herb_tries < 1)
					{
						hero = (RealPt)ds_readd(HEROS) + 0x6da * answer;

						herb_hours = GUI_input(get_ltx(0x51c), 1);

						if (herb_hours > 0)
						{
							ds_writebs(0xe3c1 + answer, herb_tries = l_di = 1);

							if (ds_readbs(0xe4c8) == 99) {
								gather_herbs(Real2Host(hero), herb_hours - 1, ds_readws(0xd32f) + 99);
							} else {
								gather_herbs(Real2Host(hero), herb_hours - 1, ds_readws(0xd32f));
							}
						}
					} else {
						GUI_output(get_ltx(0x540));
					}
				}
			}
		} else if (ds_readws(ACTION) == 134) {

			if (GUI_bool(get_ltx(0x4f8))) {

				l3 = ds_readds(DAY_TIMER) / HOURS(1);

				l3 = ds_readds(DAY_TIMER) < HOURS(8) ? 8 - l3 : 24 - l3 + 8;

				l4 = l3 / 3;
				l5 = l4;
				l_si = 0;
				have_guards = 0;

				if (ds_readws(0x434f) == -1) {

					if ((ds_readbs(0xe3be) == -1 ? 60 : 10) > random_schick(100) && !ds_readds(INGAME_TIMERS + 0x10))
					{
						ds_writews(0x434f, random_schick(3) - 1);
					}
				} else {
					have_guards = 1;
				}

				l8 = 0;
				l6 = l3;

				if (ds_readbs(0xe3be + l_si) != -1) {

					sprintf((char*)Real2Host(ds_readd(DTP2)),
						(char*)get_ltx(0xc18),
						(char*)get_hero(ds_readbs(0xe3be + l_si)) + 0x10);

					GUI_print_loc_line(Real2Host(ds_readd(DTP2)));
				}

				do {

					ds_writeb(FOOD_MOD, 1);
					timewarp(HOURS(1));
					ds_writeb(FOOD_MOD, 0);
					l5--;
					l8++;
					l6--;

					if (l_si == ds_readws(0x434f) && l4 / 2 >= l5) {
						done = 1;
					}

					if (l5 == 0 && l_si < 2) {

						l5 = l4;
						l_si++;

						if (ds_readbs(0xe3be + l_si) != -1) {

							sprintf((char*)Real2Host(ds_readd(DTP2)),
								(char*)get_ltx(0xc18),
								(char*)get_hero(ds_readbs(0xe3be + l_si)) + 0x10);

							GUI_print_loc_line(Real2Host(ds_readd(DTP2)));
						}
					}

				} while (l6 > 0 && done == 0);

				if (done == 0) {

					hero = (RealPt)ds_readd(HEROS);

					for (i = 0; i <= 6; i++, hero += 0x6da) {
						if (host_readbs(Real2Host(hero) + 0x21) != 0 &&
							host_readbs(Real2Host(hero) + 0x87) == ds_readbs(CURRENT_GROUP) &&
							ds_readbs(0xe3d6 + i) < 2 &&
							ds_readbs(0xe3cf + i) != 1)
						{
							GRP_hero_sleep(Real2Host(hero), ds_readws(0xd32d));
						}
					}

				} else if (!have_guards) {

					ds_writews(0x434f, -1);
					ds_writeb(0x26ac, 1);
					ds_writew(0x26c1, 1);

					do_fight(ds_readws(0x6692 + 2 * random_schick(4)));

					if (ds_readb(0x4333) != 99 && ds_readw(0xc3c1) == 0) {

						draw_main_screen();
						set_var_to_zero();
						load_ani(2);
						init_ani(0);
						GUI_print_loc_line(get_ltx(0x4c8));
						set_audio_track(149);

						ds_writew(0x2846, l_di = 0);

						if (l6 > 0) {
							ds_writeb(FOOD_MOD, 1);
							timewarp_until(HOURS(8));
							ds_writeb(FOOD_MOD, 0);
						}
					}
				} else {
					ds_writews(0x434f, ds_readbs(0xe3be + ds_readws(0x434f)));
				}

				done = 1;
			}
		} else if (ds_readws(ACTION) == 135) {
			done = 1;
		}
	}

	for (i = 0; i <= 6; i++) {
		ds_writeb(0xe3c1 + i, ds_writeb(0xe3c8 + i, 0));
	}

	turnaround();
}

signed short gather_herbs(Bit8u *hero, signed short hours, signed short mod)
{
	signed short i;
	signed short herbs;
	Bit8u *ptr;
	signed char herb_count[12];

	memset(herb_count, 0 , 12);

	timewarp(HOURS((hours + 1)));

	ptr = p_datseg + 0x669c;

	for (herbs = i = 0; i < 12; i++, ptr += 4) {

		if (host_readb(ptr) == ds_readb(0x66d0)) {
			add_ptr_bs(ptr + 1, 10);
			inc_ptr_bs(ptr + 2);
		}

		if (random_schick(100) <= host_readb(ptr + 1) &&
			test_skill(hero, 29, host_readb(ptr + 3) - hours + mod) > 0) {

			herb_count[i] = give_hero_new_item(hero, host_readb(ptr), 0, random_schick(host_readb(ptr + 2)));

			if (herb_count[i] != 0) {
				herbs++;
			}
		}

		if (host_readb(ptr) == ds_readb(0x66d0)) {
			sub_ptr_bs(ptr + 1, 10);
			dec_ptr_bs(ptr + 2);
		}
	}

	if (herbs) {

		/* print a sentence with all the herb names */
		sprintf((char*)Real2Host(ds_readd(DTP2)),
			(char*)get_ltx(0x520),
			(char*)hero + 0x10);

		for (i = 0; i < 12; i++) {

			if (herb_count[i] != 0) {

				sprintf((char*)Real2Host(ds_readd(0xd2eb)),
					(char*)p_datseg + 0x66d1, /* "%d %s" */
					herb_count[i],
					Real2Host(GUI_names_grammar((herb_count[i] > 1 ? 4 : 0) + 0x4002, ds_readb(0x669c + 4 * i), 0)));

				strcat((char*)Real2Host(ds_readd(DTP2)), (char*)Real2Host(ds_readd(0xd2eb)));

				if (--herbs > 1) {
					/* add a comma ", " */
					strcat((char*)Real2Host(ds_readd(DTP2)), (char*)p_datseg + 0x66d7);
				} else if (herbs == 1) {
					/* add an and " UND " */
					strcat((char*)Real2Host(ds_readd(DTP2)), (char*)p_datseg + 0x66da);
				}
			}
		}

		/* add a dot "." */
		strcat((char*)Real2Host(ds_readd(DTP2)), (char*)p_datseg + 0x66e0);

	} else {

		/* no herbs found */

		sprintf((char*)Real2Host(ds_readd(DTP2)),
			(char*)get_ltx(0x558),
			(char*)hero + 0x10);
	}

	GUI_output(Real2Host(ds_readd(DTP2)));

	return 0;
}

/**
 * \brief	replenish the stocks (water and food)
 * \param mod	modificator for the skill test
 * \param tries	how often was tried to replenish stocks
 * \returns 0 if replenish was not possible or 1 if replenish was possible
 */
signed short replenish_stocks(signed short mod, signed short tries)
{
	signed short hero_pos;
	signed short l_di;
	signed short retval;
	signed short j;
	RealPt hero;
	Bit8u *hero2;

	retval = 0;
	mod += 5;

	ds_writews(SKILLED_HERO_POS, get_skilled_hero_pos(31));
	hero_pos = select_hero_ok(get_ltx(0x508));

	if (hero_pos != -1 && hero_busy(get_hero(hero_pos))) {
		GUI_output(get_ltx(0xb68));
		hero_pos = -1;
	}

	if (hero_pos != -1) {

		if (ds_readb(0xe3c8 + hero_pos) != 0) {

			sprintf((char*)Real2Host(ds_readd(DTP2)),
				(char*)get_ltx(0xc88),
				(char*)get_hero(hero_pos) + 0x10);

			GUI_output(Real2Host(ds_readd(DTP2)));

		} else {

			if (ds_readb(0xe3c1 + hero_pos) != 0 ||
				ds_readb(0xe3cf + hero_pos) != 0 ||
				ds_readb(0xe3d6 + hero_pos) != 0)
			{
				GUI_output(get_ltx(0x52c));

			} else {

				if (tries < 2) {

					timewarp(HOURS(1));
					ds_writed(0x3e20, (Bit32u)(hero = (RealPt)ds_readd(HEROS) + 0x6da * hero_pos));
					ds_writeb(0xe3c8 + hero_pos, 1);
					retval = 1;

					/* search for water */
					if (test_skill(Real2Host(hero), 31, mod) > 0 || ds_readd(INGAME_TIMERS + 4)) {

						/* found water */
						sprintf((char*)Real2Host(ds_readd(DTP2)),
							(char*)get_ltx(0x510),
							(char*)Real2Host(hero) + 0x10);

						/* fill up all waterskins and remove thirst of all living heros in the current group */
						hero2 = get_hero(0);
						for (l_di = 0; l_di <= 6; l_di++, hero2 += 0x6da) {
							if (host_readbs(hero2 + 0x21) != 0 &&
								host_readbs(hero2 + 0x87) == ds_readbs(CURRENT_GROUP) &&
								!hero_dead(hero2))
							{
								host_writebs(hero2 + 0x80, 0);

								for (j = 0; j < 23; j++) {
									if (host_readws(hero2 + 14 * j + 0x196) == 30) {
										and_ptr_bs(hero2 + 14 * j + 0x196 + 4, 0xfb);
										and_ptr_bs(hero2 + 14 * j + 0x196 + 4, 0xfd);
									}
								}
							}
						}
					} else {

						sprintf((char*)Real2Host(ds_readd(DTP2)),
							(char*)get_ltx(0x550),
							(char*)Real2Host(hero) + 0x10);
					}

					GUI_print_loc_line(Real2Host(ds_readd(DTP2)));
					delay_or_keypress(200);

					/* search for food */
					if (test_skill(Real2Host(hero), 26, mod) > 0 || ds_readd(INGAME_TIMERS + 0xc)) {

						/* remove hunger of all living heros in the current group */
						hero2 = get_hero(0);
						for (l_di = 0; l_di <= 6; l_di++, hero2 += 0x6da) {
							if (host_readbs(hero2 + 0x21) != 0 &&
								host_readbs(hero2 + 0x87) == ds_readbs(CURRENT_GROUP) &&
								!hero_dead(hero2))
							{
								host_writebs(hero2 + 0x7f, 0);
							}
						}

						/* the group may get three food packages */
						if (!get_item(45, 1, 3)) {
							strcpy((char*)Real2Host(ds_readd(DTP2)), (char*)get_ltx(0x4c8));
							ds_writew(0x2846, 1);
						} else {
							sprintf((char*)Real2Host(ds_readd(DTP2)),
								(char*)get_ltx(0x514),
								(char*)Real2Host(hero) + 0x10);
						}

					} else {

						sprintf((char*)Real2Host(ds_readd(DTP2)),
							(char*)get_ltx(0x554),
							(char*)Real2Host(hero) + 0x10);
					}

					GUI_print_loc_line(Real2Host(ds_readd(DTP2)));
					delay_or_keypress(200);

				} else {
					GUI_output(get_ltx(0x50c));
				}
			}
		}
	}

	return retval;
}

#if !defined(__BORLANDC__)
}
#endif
