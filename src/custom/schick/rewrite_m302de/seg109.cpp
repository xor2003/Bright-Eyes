/*
 *	Rewrite of DSA1 v3.02_de functions of seg109 (travel events 1 / 10)
 *	Functions rewritten: 20/30
*/

#include <stdio.h>

#include "v302de.h"

#include "seg002.h"
#include "seg004.h"
#include "seg007.h"
#include "seg025.h"
#include "seg026.h"
#include "seg027.h"
#include "seg029.h"
#include "seg032.h"
#include "seg047.h"
#include "seg051.h"
#include "seg097.h"
#include "seg103.h"
#include "seg105.h"
#include "seg109.h"

#if !defined(__BORLANDC__)
namespace M302de {
#endif

/* Borlandified and identical */
void TRV_load_textfile(signed short travel_event)
{
	load_buffer_1(190);

	if (travel_event == -1) {
		travel_event = ds_readws(0xb133);
	}

	load_city_ltx( (travel_event == 37 || travel_event == 47 || travel_event == 100) ? 237 :
			( travel_event == 16 ? 198 :
			( travel_event < 30 ? 191 :
			( travel_event < 54 ? 192 :
			( travel_event < 70 ? 193 :
			( travel_event < 90 ? 194 :
			( travel_event < 111 ? 195 :
			( travel_event < 126 ? 196 :
			( travel_event < 143 ? 197 : 198)))))))));

	ds_writews(0xb133, travel_event);
}

#if defined(__BORLANDC__)
/* Borlandified and identical */
void TRV_event(signed short travel_event)
{
	signed short tw_bak;
	signed short bak1;
	signed short bak2;
	signed short traveling_bak;
	void (*event_handler)(void);

	TRV_load_textfile(travel_event);

	tw_bak = ds_readws(TEXTBOX_WIDTH);
	bak1 = ds_readws(0x2ca2);
	bak2 = ds_readws(0x2ca4);
	traveling_bak = ds_readb(TRAVELING);
	ds_writews(0x2ca2, 0);
	ds_writews(0x2ca4, 0);
	ds_writeb(TRAVELING, 0);
	ds_writews(TEXTBOX_WIDTH, 9);
	ds_writeb(0x2c98, 1);
	ds_writeb(0xb132, 1);

	event_handler = (void (*)(void))ds_readd(0xaeea + 4 * travel_event);
	if (event_handler) event_handler();

	ds_writeb(0xb132, 0);
	ds_writeb(TRAVELING, traveling_bak);
	ds_writews(0x2ca2, bak1);
	ds_writews(0x2ca4, bak2);
	ds_writews(TEXTBOX_WIDTH, tw_bak);
	ds_writeb(0x2c98, 0);
	load_buffer_1(19);
	ds_writew(0xe113, 1);
}
#endif

/**
 * \brief	executes a fight and load a textfile
 * \param fight_nr	ID of the fight
 * \param travel_event	ID of the travel event
 * \return return value of the fight
 */
/* Borlandified and identical */
signed short TRV_fight_event(signed short fight_nr, signed short travel_event)
{
	signed short retval;

	retval = do_fight(fight_nr);
	TRV_load_textfile(travel_event);

	return retval;
}

/* Borlandified and identical */
void TRV_found_herb_place(signed short a0)
{
	signed short answer;
	signed short randval;
	Bit8u *hero;

	hero = Real2Host(get_first_hero_available_in_group());

	randval = random_schick(5) + 2;

	sprintf((char*)Real2Host(ds_readd(DTP2)),
		(char*)get_dtp(0x0000),
		(char*)get_dtp(4 * randval),
		(char*)hero + 0x10,
		(char*)(a0 != 0 ? get_dtp(0x00a8) : p_datseg + 0xb13b));

	do {
		answer = GUI_radio(Real2Host(ds_readd(DTP2)), 2,
				get_dtp(0x0004),
				get_dtp(0x0008));

	} while (answer == -1);

	if (answer == 1) {
		TRV_inside_herb_place();
	}
}

/* Borlandified and identical */
void TRV_inside_herb_place(void)
{
	signed short hero_pos;
	signed short hours;
	signed short bak;

	load_ani(1);
	draw_main_screen();
	init_ani(0);
	hero_pos = select_hero_ok(get_ltx(0x518));

	if (hero_pos != -1) {

		hours = GUI_input(get_ltx(0x51c), 1);

		if (hours > 0) {
			bak = ds_readbs(0x45b8);
			ds_writebs(0x45b8, 1);

			gather_herbs(get_hero(hero_pos), hours - 1, -3);

			ds_writebs(0x45b8, bak);
		}
	}

	set_var_to_zero();
	ds_writew(0x2846, 1);
}

/* Borlandified and identical */
signed short TRV_found_camp_place(signed short a0)
{
	signed short answer;
	signed short randval;

	randval = random_schick(5) + 10;
	sprintf((char*)Real2Host(ds_readd(DTP2)),
		(char*)get_dtp(0x020),
		(char*)get_dtp(4 * randval),
		(char*)(a0 == 1 ? get_dtp(0xa8) : (a0 == 2 ? get_dtp(0xb4) : p_datseg + 0xb13c)));
	do {
		answer = GUI_radio(Real2Host(ds_readd(DTP2)), 2,
					get_dtp(0x24),
					get_dtp(0x28));
	} while (answer == -1);

	if (answer == 1) {

		ds_writew(0xd32d, ds_writews(0xd331, ds_writews(0xd32f, 0)));

		if (a0 == 1) {
			ds_writews(0xd331, -3);
		} else if (a0 == 2) {
			ds_writews(0xd32f, -3);
		}

		ds_writeb(0xe4c8, 1);
		ds_writeb(LOCATION, 6);

		do_location();

		ds_writeb(LOCATION, ds_writeb(0xe4c8, 0));

		TRV_load_textfile(-1);

		ds_writew(0xd32d, ds_writews(0xd331, ds_writews(0xd32f, 0)));
		ds_writew(0x2846, 2);

		return 1;
	}

	return 0;
}

/* Borlandified and identical */
void TRV_found_replenish_place(signed short a0)
{
	signed short hero_pos;
	signed short answer;

	sprintf((char*)Real2Host(ds_readd(DTP2)),
		(char*)get_dtp(0x040),
		(char*)get_dtp(4 * (random_schick(5) + 11)),
		(char*)(a0 != 0 ? get_dtp(0xb4) : p_datseg + 0xb13d));
	do {
		answer = GUI_radio(Real2Host(ds_readd(DTP2)), 2,
					get_dtp(0x54),
					get_dtp(0x58));
	} while (answer == -1);

	if (answer == 1) {

		load_ani(1);
		draw_main_screen();
		init_ani(0);

		/* Original-Bug: This code assumes, that the leader of the group will replenish the stocks,
		 *		 which may not be the case, since replenish_stocks() asks who may do it.
		 *		 To be prepared clear these arrays for all heros.
		*/
#ifdef M302de_ORIGINAL_BUGFIX
		for (hero_pos = 0; hero_pos <= 7; hero_pos++) {
			ds_writeb(0xe3c8 + hero_pos,
				ds_writeb(0xe3c1 + hero_pos,
				ds_writeb(0xe3cf + hero_pos,
				ds_writeb(0xe3d6 + hero_pos, 0))));
		}
#else
		hero_pos = get_hero_index(Real2Host(get_first_hero_available_in_group()));

		ds_writeb(0xe3c8 + hero_pos, ds_writeb(0xe3c1 + hero_pos, ds_writeb(0xe3cf + hero_pos, ds_writeb(0xe3d6 + hero_pos, 0))));
#endif

		/* Original-Bug: the second argument is is the counter of replenish tries, not the position of the leader.
		 * Trigger:	Leave the first two hero slots empty an call this function. */
#ifdef M302de_ORIGINAL_BUGFIX
		replenish_stocks(-3, 0);
#else
		replenish_stocks(-3, hero_pos);
#endif

		timewarp(HOURS(1));

		set_var_to_zero();

		ds_writew(0x2846, 1);
	}
}

#if defined(__BORLANDC__)
/* depends on: do_location() */
/* Borlandified and identical */
void TRV_found_inn(signed short city, signed short type)
{
	load_ani(12);
	draw_main_screen();
	init_ani(0);

	if (GUI_bool(get_dtp(0x5c))) {
		ds_writew(CITYINDEX, city);
		ds_writew(TYPEINDEX, type);
		ds_writeb(LOCATION, 7);

		do_location();

		ds_writeb(LOCATION, 0);

		TRV_load_textfile(-1);
	}

	set_var_to_zero();
	ds_writew(0x2846, 1);
}
#endif

/**
 * \brief	question if you want to rest in a hut
 * \return the answer 0 = no, 1 = yes
 */
/* Borlandified and identical */
signed short TRV_enter_hut_question(void)
{
	signed short answer;

	load_ani(8);
	draw_main_screen();
	init_ani(0);

	answer = GUI_bool(get_dtp(0x60));

	set_var_to_zero();
	ds_writew(0x2846, 1);

	return answer;
}

/* Borlandified and identical */
signed short TRV_follow_trail_question(void)
{
	signed short answer;
	Bit8u *hero;

	hero = Real2Host(get_first_hero_available_in_group());

	sprintf((char*)Real2Host(ds_readd(DTP2)),
		(char*)get_dtp(0x64),
		(char*)hero + 0x10);

	do {
		answer = GUI_radio(Real2Host(ds_readd(DTP2)), 2,
				get_dtp(0x68),
				get_dtp(0x6c));

	} while (answer == -1);

	return answer - 1;
}

/* Borlandified and identical */
signed short TRV_cross_a_ford(Bit8u *msg, signed short time, signed short mod)
{
	signed short answer;
	signed short done;

	done = 0;
	ds_writeb(0xe5d2, 1);

	load_ani(7);
	draw_main_screen();
	init_ani(0);

	do {
		sprintf((char*)Real2Host(ds_readd(DTP2)),
			(char*)get_dtp(0x88),
			(char*)msg);

		do {
			answer = GUI_radio(Real2Host(ds_readd(DTP2)), 2,
						get_dtp(0x8c),
						get_dtp(0x90));
		} while (answer == -1);

		if (answer == 1) {
			done = 1;
			TRV_ford_test(mod, time);
		} else {
			answer = GUI_bool(get_dtp(0x9c));

			if (answer == 1) {
				done = ds_writew(0x4336, 1);
			}
		}

	} while (!done);

	set_var_to_zero();
	ds_writeb(0xe5d2, 0);
	ds_writew(0x2846, 1);
	return 1;
}

/* Borlandified and identical */
void TRV_ford_test(signed short mod, signed short time)
{
	signed short i;
	Bit8u *hero;

	hero = get_hero(0);
	for (i = 0; i <= 6; i++, hero += 0x6da) {

		if (host_readbs(hero + 0x21) != 0 &&
			host_readbs(hero + 0x87) == ds_readbs(CURRENT_GROUP) &&
			!hero_dead(hero))
		{
			/* Original-Bugfix: tests fail if their result is lower or equal than zero */
#ifdef M302de_ORIGINAL_BUGFIX
			if (test_attrib(hero, 4, mod) < 0)
#else
			if (test_attrib(hero, 4, mod) == 0)
#endif
			{
				/* test failed */
				timewarp(MINUTES(time));

				sprintf((char*)Real2Host(ds_readd(DTP2)),
					(char*)get_dtp(0x94),
					(char*)hero + 0x10);

				hero_disease_test(hero, 2, 20 - (host_readbs(hero + 0x47) + host_readbs(hero + 0x48)));

				loose_random_item(hero, 1, get_ltx(0x7e8));
			} else {
				/* test succeded */
				timewarp(MINUTES(10));

				sprintf((char*)Real2Host(ds_readd(DTP2)),
					(char*)get_dtp(0x98),
					(char*)hero + 0x10);
			}

			GUI_output(Real2Host(ds_readd(DTP2)));
		}
	}
}

/* Borlandified and identical */
signed short TRV_ferry(Bit8u *msg, signed short price)
{
	signed short done;
	signed short answer;
	signed short nr_heros;
	Bit32u p_money;

	done = 0;
	nr_heros = count_heroes_in_group();

	do {

		sprintf((char*)Real2Host(ds_readd(DTP2)),
			(char*)get_dtp(0x70),
			(char*)msg,
			price, 5 * price);

		do {
			answer = GUI_radio(Real2Host(ds_readd(DTP2)), 3,
						get_dtp(0x74),
						get_dtp(0x78),
						get_dtp(0x7c));
		} while (answer == -1);

		if (answer == 1) {

			price *= 5 * nr_heros;
			p_money = get_party_money();

			if (price > p_money) {
				GUI_output(get_ltx(0x644));
			} else {
				done = 1;
				p_money -= price;
				set_party_money(p_money);
				timewarp(MINUTES(30));
			}

		} else if (answer == 2) {

			price *= nr_heros;
			p_money = get_party_money();

			if (price > p_money) {
				GUI_output(get_ltx(0x644));
			} else {
				p_money -= price;
				set_party_money(p_money);

				sprintf((char*)Real2Host(ds_readd(DTP2)),
					(char*)get_dtp(0x80),
					done = random_schick(6));

				GUI_output(Real2Host(ds_readd(DTP2)));

				timewarp(HOURS(done));

				done = 1;
			}
		} else {

			if (GUI_bool(get_dtp(0x84))) {
				ds_writew(0x4336, done = 1);
			}
		}

	} while (!done);

	return 1;
}

/* Borlandified and identical */
#if defined(__BORLANDC__)
void tevent_001(void)
{
	TRV_found_inn(40, 65);
}
#endif

/* The hunter Varnheim <-> Daspota */
/* Borlandified and identical */
void tevent_002(void)
{
	signed short answer;

	/* load dialog head */
	load_in_head(10);

	/* show dialogbox */
	do {
		answer = GUI_dialogbox((RealPt)ds_readd(DTP2),
				NULL,
				get_city(0x00),
				3,
				get_city(0x04),
				get_city(0x08),
				get_city(0x0c));

	} while (answer == -1);

	/* talk to the hunter for 15 min */
	if (answer == 1 || answer == 2) {

		GUI_dialog_na(0, answer == 1 ? get_city(0x10) : get_city(0x14));

		timewarp(MINUTES(15));
	}
}

/* Borlandified and identical */
void tevent_003(void)
{
	TRV_ferry(get_dtp(0x114), 5);
}

/* Borlandified and identical */
void tevent_004(void)
{
	if ((test_skill(Real2Host(get_first_hero_available_in_group()), 26, 2) > 0 && !ds_readb(0x3da2)) ||
		ds_readb(0x3da2) != 0)
	{
		ds_writeb(0x3da2, 1);
		if (!TRV_follow_trail_question()) {
			TRV_hunt_generic(29, 6, -2, 4, 10, 8, 7, 5, 7, 80, 0);
		}
	}
}

/* Borlandified and identical */
void TRV_hunt_generic(signed short ani_id, signed short city_index, signed short mod1, signed short mod2,
			signed short mod3, signed short ap_all1, signed short ap_hero, signed short ap_all2,
			signed short ap_all3, signed short foods1, signed short foods2)
{
	signed short l_di;
	signed short i;
	signed short l4;
	signed short answer;
	Bit8u *hero;

	ds_writeb(0xe5d2, 1);

	load_ani(ani_id);
	draw_main_screen();
	init_ani(0);

	GUI_output(get_city(4 * city_index));

	hero = get_hero(0);
	for (i = l_di = 0; i <= 6; i++, hero += 0x6da) {

		if ((host_readbs(hero + 0x21) != 0) &&
			(host_readbs(hero + 0x87) == ds_readbs(CURRENT_GROUP)) &&
			!hero_dead(hero) &&
			test_skill(hero, 13, mod1) <= 0)
		{
			l_di++;
		}
	}

	if (l_di) {

		do {
			answer = GUI_radio(get_city(4 * (city_index + 1)), 2,
						get_city(4 * (city_index + 7)),
						get_city(4 * (city_index + 8)));
		} while (answer == -1);

	} else {

		i = select_hero_ok_forced(get_city(4 * (city_index + 2)));

		hero = get_hero(i);

		if (test_skill(hero, 13, mod2) <= 0) {

			do {
				answer = GUI_radio(get_city(4 * (city_index + 1)), 2,
							get_city(4 * (city_index + 7)),
							get_city(4 * (city_index + 8)));
			} while (answer == -1);
		} else {

			sprintf((char*)Real2Host(ds_readd(DTP2)),
				(char*)get_city(4 * (city_index + 3)),
				(char*)hero + 0x10);

			GUI_input(Real2Host(ds_readd(DTP2)), l_di = 0);

			if ((i = test_skill(hero, 7, mod3)) > 0) {
				l_di++;
			}

			if ((l4 = test_skill(hero, 7, mod3)) > 0) {
				l_di++;
			}

			if (l_di == 2 || i == 99 || l4 == 99) {

				sprintf((char*)Real2Host(ds_readd(DTP2)),
					(char*)get_city(4 * (city_index + 4)),
					(char*)hero + 0x10);

				GUI_output(Real2Host(ds_readd(DTP2)));

				add_hero_ap_all(ap_all1);
				add_hero_ap(hero, ap_hero);

				timewarp(HOURS(1));

				get_item(45, 1, foods1);

				answer = 0;
			} else {

				sprintf((char*)Real2Host(ds_readd(DTP2)),
					(char*)get_city(4 * (l_di == 1 ? city_index + 5 : city_index + 6)),
					(char*)hero + 0x10);

				do {
					answer = GUI_radio(Real2Host(ds_readd(DTP2)), 2,
								get_city(4 * (city_index + 7)),
								get_city(4 * (city_index + 8)));
				} while (answer == -1);
			}
		}
	}

	if (answer == 2) {

		add_hero_ap_all(ap_all2);

		if (foods2 != 0) {
			get_item(45, 1, foods2);
		}

	} else if (answer == 1) {

		GUI_output(get_city(4 * (city_index + 9)));

		timewarp(HOURS(2));

		add_hero_ap_all(ap_all3);
	}

	set_var_to_zero();
	ds_writeb(0xe5d2, 0);
	ds_writew(0x2846, 1);
}

#if defined(__BORLANDC__)
/* Borlandified and identical */
void tevent_005(void)
{
	if ((test_skill(Real2Host(get_first_hero_available_in_group()), 31, 0) > 0 && !ds_readb(0x3da3)) ||
		ds_readb(0x3da3) != 0)
	{
		TRV_found_camp_place(1);
		ds_writeb(0x3da3, 1);
	}
}
#endif

/* Borlandified and identical */
void tevent_006(void)
{
	TRV_ferry(get_dtp(0x114), 4);
}

#if !defined(__BORLANDC__)
}
#endif
