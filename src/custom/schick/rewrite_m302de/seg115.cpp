/**
 *	Rewrite of DSA1 v3.02_de functions of seg115 (travel events 7 / 10)
 *	Functions rewritten: 4/13
 */
#include <stdio.h>

#include "v302de.h"

#include "seg002.h"
#include "seg007.h"
#include "seg026.h"
#include "seg047.h"
#include "seg096.h"
#include "seg097.h"
#include "seg103.h"
#include "seg105.h"
#include "seg109.h"

#if !defined(__BORLANDC__)
namespace M302de {
#endif

/* the raft */
/* Borlandified and identical */
void tevent_016(void)
{
	signed short answer;
	Bit8u *hero;

	if (!ds_readb(0x3da9))
	{

		load_in_head(46);

		do {
			answer = GUI_dialogbox((RealPt)ds_readd(DTP2), NULL, get_city(0x4c), 2,
						get_city(0x50),
						get_city(0x54));
		} while (answer == -1);

		if (answer == 1)
		{
			/* ignore */
			GUI_dialog_na(0, get_city(0x58));
		} else {
			/* wave */

			do {
				answer = GUI_dialogbox((RealPt)ds_readd(DTP2), NULL, get_city(0x5c), 2,
							get_city(0x60),
							get_city(0x64));
			} while (answer == -1);

			if (answer == 1)
			{
				/* run away */
				GUI_dialog_na(0, get_city(0x68));
			} else {
				/* go towards them */

				do {
					answer = GUI_dialogbox((RealPt)ds_readd(DTP2), NULL, get_city(0x6c), 2,
								get_city(0x70),
								get_city(0x74));
				} while (answer == -1);

				if (answer == 2)
				{
					/* walk away */
					GUI_dialog_na(0, get_city(0x78));
				} else {
					/* help them */

					GUI_dialog_na(0, get_city(0x7c));

					hero = get_hero(get_hero_KK_best());

					/* test KK+3 */
					if (test_attrib(hero, 6, 3) > 0)
					{
						/* success */
						GUI_dialog_na(0, get_city(0x80));
						GUI_dialog_na(0, get_city(0x90));

						add_hero_ap_all(5);
					} else {
						/* fail */
						GUI_dialog_na(0, get_city(0x84));

						hero = get_hero(get_random_hero());

						/* GE+0 */
						if (test_attrib(hero, 4, 0) > 0)
						{
							/* success */
							timewarp(MINUTES(15));

							sprintf((char*)Real2Host(ds_readd(DTP2)) + 0x400,
								(char*)get_city(0x8c),
								(char*)hero + HERO_NAME2,
								(char*)Real2Host(GUI_get_ptr(host_readbs(hero + HERO_SEX), 0)));

							GUI_dialog_na(0, Real2Host(ds_readd(DTP2)) + 0x400);

							GUI_dialog_na(0, get_city(0x90));
						} else {
							/* fail */
							sprintf((char*)Real2Host(ds_readd(DTP2)) + 0x400,
								(char*)get_city(0x88),
								(char*)hero + HERO_NAME2,
								(char*)Real2Host(GUI_get_ptr(host_readbs(hero + HERO_SEX), 0)),
								(char*)Real2Host(GUI_get_ptr(host_readbs(hero + HERO_SEX), 2)),
								(char*)Real2Host(GUI_get_ptr(host_readbs(hero + HERO_SEX), 3)),
								(char*)Real2Host(GUI_get_ptr(host_readbs(hero + HERO_SEX), 2)));

							GUI_dialog_na(0, Real2Host(ds_readd(DTP2)) + 0x400);

							timewarp(HOURS(1));

							sprintf((char*)Real2Host(ds_readd(DTP2)) + 0x400,
								(char*)get_city(0x94),
								(char*)hero + HERO_NAME2,
								(char*)Real2Host(GUI_get_ptr(host_readbs(hero + HERO_SEX), 1)));

							GUI_dialog_na(0, Real2Host(ds_readd(DTP2)) + 0x400);

							add_hero_ap(hero, 5);

							loose_random_item(hero, 10, get_ltx(0x7e8));

							hero_disease_test(hero, 2, 20 - (host_readbs(hero + HERO_KK) + host_readbs(hero + HERO_KK_MOD)));
						}

					}
				}
			}
		}

		ds_writeb(0x3da9, 1);
	}
}

/* falling rocks */
/* Borlandified and identical */
void tevent_090(void)
{
	signed short i;
	Bit8u *hero;

	GUI_output(get_city(0x00));
	GUI_output(get_city(0x04));

	hero = get_hero(0);
	for (i = 0; i <= 6; i++, hero += SIZEOF_HERO)
	{
		if (host_readbs(hero + HERO_TYPE) &&
			host_readbs(hero + HERO_GROUP_NO) == ds_readbs(CURRENT_GROUP) &&
			!hero_dead(hero) &&
			test_skill(hero, 50, 0) <= 0)
		{
			/* failed */
			sub_hero_le(hero, random_schick(10));

			loose_random_item(hero, 10, get_ltx(0x7e8));
			loose_random_item(hero, 10, get_ltx(0x7e8));
		}
	}

	GUI_output(get_city(0x08));
}

/* Borlandified and identical */
void tevent_091(void)
{
	if ((test_skill(Real2Host(get_first_hero_available_in_group()), 29, 5) > 0 && !ds_readb(0x3ded)) ||
		ds_readb(0x3ded) != 0)
	{
		ds_writeb(0x66d0, 122);
		TRV_found_herb_place(0);
		ds_writeb(0x66d0, -1);
		ds_writeb(0x3ded, 1);
	}
}

/* Borlandified and identical */
void tevent_093(void)
{
	if ((test_skill(Real2Host(get_first_hero_available_in_group()), 31, 4) > 0 && !ds_readb(0x3dee)) ||
		ds_readb(0x3dee) != 0)
	{
		TRV_found_camp_place(0);
		ds_writeb(0x3dee, 1);
	}
}

#if !defined(__BORLANDC__)
}
#endif
