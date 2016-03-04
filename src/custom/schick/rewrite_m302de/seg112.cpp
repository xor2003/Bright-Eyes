/**
 *	Rewrite of DSA1 v3.02_de functions of seg112 (travel events 4 / 10)
 *	Functions rewritten: 8/13
 */
#include <stdio.h>

#include "v302de.h"

#include "seg002.h"
#include "seg007.h"
#include "seg025.h"
#include "seg047.h"
#include "seg092.h"
#include "seg096.h"
#include "seg097.h"
#include "seg103.h"
#include "seg105.h"
#include "seg109.h"
#include "seg112.h"

#if !defined(__BORLANDC__)
namespace M302de {
#endif

/* Borlandified and identical */
void tevent_067(void)
{
	signed short i;
	signed short answer;
	signed short count;
	Bit8u *hero;

	if ((test_skill(Real2Host(get_first_hero_available_in_group()), 51, 6) > 0 && !ds_readb(0x3dcc)) ||
		ds_readb(0x3dcc) != 0)
	{
		GUI_output(get_city(0x168));

		do {
			answer = GUI_radio(get_city(0x16c), 3,
						get_city(0x170),
						get_city(0x174),
						get_city(0x178));
		} while (answer == -1);

		if (answer == 2) {

			ds_writeb(LOCATION, 6);
			do_location();
			ds_writeb(LOCATION, 0);

		} else if (answer == 3) {

			hero = get_hero(0);
			for (i = count = 0; i <= 6; i++, hero += SIZEOF_HERO) {

				if (host_readbs(hero + HERO_TYPE) != 0 &&
					host_readbs(hero + HERO_GROUP_NO) == ds_readbs(CURRENT_GROUP) &&
					!hero_dead(hero) &&
					test_attrib(hero, 4, 0) > 0)
				{
					count++;
				}
			}

			if (!ds_readb(0x3dcc) && count >= 3) {

				loot_multi_chest(p_datseg + 0xb16a, get_city(0x180));

				GUI_output(get_city(0x184));

				hero = Real2Host(get_first_hero_available_in_group());

				add_party_money(7L);

				ds_writeb(LOCATION, 6);
				do_location();
				ds_writeb(LOCATION, 0);
			} else {

				GUI_output(get_city(0x17c));

				hero = get_hero(0);
				for (i = 0; i <= 6; i++, hero += SIZEOF_HERO) {

					if (host_readbs(hero + HERO_TYPE) != 0 &&
						host_readbs(hero + HERO_GROUP_NO) == ds_readbs(CURRENT_GROUP))
					{
						sub_hero_le(hero, random_schick(8));
					}
				}

				ds_writeb(LOCATION, 6);
				do_location();
				ds_writeb(LOCATION, 0);

				TRV_load_textfile(-1);
			}

			ds_writeb(0x3dcc, 1);
		}
	} else {

		GUI_output(get_city(0x168));

		do {
			answer = GUI_radio(get_city(0x148), 2,
						get_city(0x170),
						get_city(0x174));
		} while (answer == -1);

		if (answer == 2) {
			ds_writeb(LOCATION, 6);
			do_location();
			ds_writeb(LOCATION, 0);
		}
	}
}

/* Borlandified and identical */
void tevent_068(void)
{
#if !defined(__BORLANDC__)
	D1_INFO("Reiseevent %d ist nicht implementiert\n", 68);
#endif
}

/* Borlandified and identical */
void tevent_069(void)
{
	if ((test_skill(Real2Host(get_first_hero_available_in_group()), 31, 5) > 0 && !ds_readb(0x3dcd)) ||
		ds_readb(0x3dcd) != 0)
	{
		TRV_found_camp_place(0);
		ds_writeb(0x3dcd, 1);
	}
}

/* Borlandified and identical */
void tevent_070(void)
{
	signed short l_si;

	if (test_skill(Real2Host(get_first_hero_available_in_group()), 31, 3) > 0 ||
		ds_readb(0x3dce) != 0)
	{
		ds_writeb(0x3dce, 1);

		if (test_skill(Real2Host(get_first_hero_available_in_group()), 29, 4) > 0 ||
			ds_readb(0x3dcf) != 0)
		{
			ds_writeb(0x3dcf, 1);
			ds_writeb(0x66d0, 130);
			l_si = TRV_found_camp_place(2);
			ds_writeb(0x66d0, -1);
		} else {
			l_si = TRV_found_camp_place(0);
		}

		if ((l_si && !ds_readb(0x3dd0) && test_skill(Real2Host(get_first_hero_available_in_group()), 26, 0) > 0) ||
			ds_readb(0x3dd0) != 0) {

			ds_writeb(0x3dd0, 1);

			if (!TRV_follow_trail_question()) {

				do {
					l_si = GUI_radio(get_city(0x00), 2, get_city(0x04), get_city(0x08));

				} while (l_si == -1);

				if (l_si == 1) {
					TRV_hunt_generic(25, 3, -1, 3, 8, 3, 7, 2, 4, 35, 0);
				}
			}
		}
	}
}

/* Orc-Monolith */
/* Borlandified and identical */
void tevent_071(void)
{
	signed short l_si;
	signed short have_raft;
	signed short i;
	Bit8u *hero;

	have_raft = 0;

	/* Perception + 8, Sinnesschaerfe + 8 */
	if (test_skill(hero = Real2Host(get_first_hero_available_in_group()), 51, 8) > 0 &&
		!ds_readb(0x3dd1))
	{
		ds_writeb(0x3dd1, 1);

		/* Track + 4, Faehrtensuche + 4 */
		if (test_skill(hero, 26, 4) > 0) {

			sprintf((char*)Real2Host(ds_readd(DTP2)),
				(char*)get_city(0x34),
				(char*)hero + HERO_NAME2,
				(char*)Real2Host(GUI_get_ptr(host_readbs(hero + HERO_SEX), 0)),
				(char*)Real2Host(GUI_get_ptr(host_readbs(hero + HERO_SEX), 3)));


			do {
				l_si = GUI_radio(Real2Host(ds_readd(DTP2)), 2,
						get_city(0x38),
						get_city(0x3c));
			} while (l_si == -1);

			if (l_si == 2) {
				/* investigate */

				do {
					l_si = GUI_radio(get_city(0x40), 3,
							get_city(0x44),
							get_city(0x48),
							get_city(0x4c));
				} while (l_si == -1);

				if (l_si == 1) {

					/* just swim */
					TRV_swimm(2, 5);

				} else if (l_si == 2) {

					/* build a raft before swimming */
					have_raft = 1;
					timewarp(HOURS(1));
					TRV_swimm(-1, 0);
				}

				if (l_si == 1 || l_si == 2) {

					sprintf((char*)Real2Host(ds_readd(DTP2)),
						(char*)get_city(0x58),
						(char*)hero + HERO_NAME2);
					do {
						l_si = GUI_radio(Real2Host(ds_readd(DTP2)), 2,
								get_city(0x5c),
								get_city(0x60));
					} while (l_si == -1);

					if (l_si == 1) {
						/* destroy monolith */

						GUI_output(get_city(0x64));

						/* REWARD: get gods estimation + 500 for each god */
						for (i = 1; i <= 14; i++) {
							add_ds_ds(GODS_ESTIMATION + 4 * i, 500L);
						}

						/* mark the statuette as destroyed => has effects in fights */
						ds_writeb(0x3dda, 1);

						add_hero_ap_all(10);

					} else {
						/* leave monolith */

						/* PUNISHMENT: set gods estimation to 0 for each god */
						for (i = 1; i <= 14; i++) {
							ds_writed(GODS_ESTIMATION + 4 * i, 0L);
						}
					}

					i = (!have_raft ? 1 : 2);

					do {
						l_si = GUI_radio(get_city(0x68), (signed char)i,
								get_city(0x6c),
								get_city(0x70));
					} while (l_si == -1);

					if (l_si == 1) {
						TRV_swimm(2, 5);
					} else {
						timewarp(HOURS(1));
						TRV_swimm(-1, 0);
					}
				}
			}
		}
	}
}

/**
 * \brief	all members of the current try to swim
 * \param	mod	modificator for the swim test
 * \param	percent	to get infectect with NUMBSKULL
 */
/* Borlandified and identical */
void TRV_swimm(signed short mod, signed short percent)
{
	signed short i;
	Bit8u *hero;

	hero = get_hero(0);

	for (i = 0; i <= 6; i++, hero += SIZEOF_HERO) {

		if (host_readbs(hero + HERO_TYPE) != 0 &&
			host_readbs(hero + HERO_GROUP_NO) == ds_readbs(CURRENT_GROUP) &&
			!hero_dead(hero))
		{

			if (test_skill(hero, 14, (signed char)mod) <= 0) {
				/* test failed */

				hero_disease_test(hero, 2, 20 - (host_readbs(hero + HERO_KK) + host_readbs(hero + HERO_KK_MOD)));

				loose_random_item(hero, percent, get_ltx(0x7e8));

				sub_hero_le(hero, random_schick(5));


				sprintf((char*)Real2Host(ds_readd(DTP2)),
					(char*)get_city(0x54),
					(char*)hero + HERO_NAME2);
			} else {
				sprintf((char*)Real2Host(ds_readd(DTP2)),
					(char*)get_city(0x50),
					(char*)hero + HERO_NAME2);
			}

			GUI_output(Real2Host(ds_readd(DTP2)));
		}
	}

}

/* a herb place you need to swim to */
/* Borlandified and identical */
void tevent_unused01(void)
{
	signed short answer;
	signed short has_raft;
	signed short options;
	Bit8u *hero;

	has_raft = 0;

	hero = Real2Host(get_first_hero_available_in_group());

	if ((test_skill(hero, 51, 8) > 0 && !ds_readb(0x3dd2)) ||
		ds_readb(0x3dd2) != 0)
	{

		ds_writeb(0x3dd2, 1);

		sprintf((char*)Real2Host(ds_readd(DTP2)),
			(char*)get_city(0x74),
			(char*)hero + HERO_NAME2,
			(char*)Real2Host(GUI_get_ptr(host_readbs(hero + HERO_SEX), 0)),
			(char*)Real2Host(GUI_get_ptr(host_readbs(hero + HERO_SEX), 3)));


		do {
			answer = GUI_radio(Real2Host(ds_readd(DTP2)), 2,
					get_city(0x78),
					get_city(0x7c));
		} while (answer == -1);

		if (answer == 2) {

			do {
				answer = GUI_radio(get_city(0x80), 3,
						get_city(0x84),
						get_city(0x88),
						get_city(0x8c));
			} while (answer == -1);

			if (answer == 1) {

				TRV_swimm(2, 5);

			} else if (answer == 2) {

				has_raft = 1;
				timewarp(HOURS(1));
				TRV_swimm(-1, 0);
			}

			if (answer == 1 || answer == 2) {

				GUI_output(get_city(0x98));

				ds_writeb(0x66d0, 63);
				TRV_inside_herb_place();
				ds_writeb(0x66d0, -1);

				options = (!has_raft ? 1 : 2);

				do {
					answer = GUI_radio(get_city(0x9c), (signed char)options,
								get_city(0xa0),
								get_city(0xa4));
				} while (answer == -1);

				if (answer == 1) {

					TRV_swimm(2, 5);

				} else {

					timewarp(HOURS(1));
					TRV_swimm(-1, 0);
				}
			}
		}
	}
}

#if !defined(__BORLANDC__)
}
#endif
