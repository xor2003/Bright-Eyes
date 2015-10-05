/*
 *	Rewrite of DSA1 v3.02_de functions of seg068 (Thorwal)
 *	Special City: Thorwal
 *	Functions rewritten: 5/13
 *
*/

#include <stdio.h>
#include <string.h>

#include "v302de.h"

#include "seg002.h"
#include "seg007.h"
#include "seg026.h"
#include "seg058.h"
#include "seg097.h"

#if !defined(__BORLANDC__)
namespace M302de {
#endif

/* Borlandified and identical */
void THO_eisenhof(void)
{
	signed short answer;
	Bit32s money;

	do {
		answer = GUI_radio(get_city(0xbc), 3,
					get_city(0xc0),
					get_city(0xc4),
					get_city(0xc8));
	} while (answer == -1);

	if (answer == 1) {

		ds_writews(TYPEINDEX, 41);
		do_smith();

	} else if (answer == 2) {

		GUI_input(get_city(0xcc), 0);

		money = get_party_money();
		money -= 10;
		set_party_money(money);

		/* test for CH+0 */
		if (test_attrib(Real2Host(get_first_hero_available_in_group()), 2, 0) > 0) {

			GUI_input(get_city(0xd0), 0);

			sprintf((char*)Real2Host(ds_readd(DTP2)),
					(char*)get_dtp(4 * (random_schick(26) + 55)));
			GUI_input(Real2Host(ds_readd(DTP2)), 0);
		} else {
			GUI_input(get_city(0xd4), 0);
		}
	}
}

/* Borlandified and identical */
void thorwal_imman(void)
{

	unsigned short tmp;

	tmp = get_current_season();

	if ((tmp == 1 || tmp == 3) && (ds_readb(DAY_OF_WEEK) == 5)) {
		/* ask to visit the game */
		if (GUI_bool(get_city(0xdc)) != 0) {

		tmp = random_schick(4) + 0x38;
		sprintf((char*)Real2Host(ds_readd(DTP2)),
			(char*)get_city(0xe0),
			/* winner */
			(char*)get_city(tmp * 4),
			/* looser */
			(char*)get_city((random_schick(7) + 0x3c) * 4),
			/* winner */
			(char*)get_city(tmp * 4),
			/* winners points */
			random_interval(15, 30),
			/* loosers points */
			random_schick(14));

		GUI_input(Real2Host(ds_readd(DTP2)), 0);
		}
	} else {
		/* no imman game at the moment */
		GUI_input(get_city(0xd8), 0);
	}

}

/* Borlandified and identical */
void thorwal_botschaft(void)
{
	int closed = 0;

	/* At the 6th month in year 17 Hal another message is shown */
	if (ds_readbs(YEAR) > 17 ||
		(ds_readbs(YEAR) == 17 && ds_readbs(MONTH) > 5)) {

		closed = 1;
	}

	GUI_input( (!closed) ? get_city(0x110): get_city(0x114), 0);
}

/* Borlandified and identical */
void THO_bank(void)
{
	signed short answer;
	signed short done;
	signed short l3;
	Bit32s p_money;

	done = 0;

	if (ds_readws(BANK_DEPOSIT) <= -1000) {

		GUI_input(get_city(0x134), 0);

		if (ds_readws(DEBT_DAYS) == 0) {
			ds_writews(DEBT_DAYS, 7);
		}
	}

	load_in_head(16);

	do {

		sprintf((char*)Real2Host(ds_readd(0xd2eb)),
			(char*)get_city(0x120),
			ds_readws(BANK_DEPOSIT));

		do {
			answer = GUI_dialogbox((RealPt)ds_readd(DTP2), get_city(0x144),
						Real2Host(ds_readd(0xd2eb)), 3,
						get_city(0x124), get_city(0x128), get_city(0x140));
		} while (answer == -1);


		if (answer == 2) {

			answer = GUI_input(get_city(0x12c), 3);

			if (answer <= 0) {
				GUI_dialogbox((RealPt)ds_readd(DTP2), get_city(0x144),
						get_city(0x13c), 0);
			} else {

				if (ds_readws(DAYS_TO_CENS) != 0 ||
					(ds_readws(BANK_DEPOSIT) > 0 && ds_readws(BANK_DEPOSIT) + 200 < answer) ||
					(ds_readws(BANK_DEPOSIT) <= 0 && answer > 200))
				{
					GUI_dialogbox((RealPt)ds_readd(DTP2), get_city(0x144),
							get_city(0x130), 0);
				} else {

					if (ds_readws(BANK_DEPOSIT) < answer) {

						if (ds_readws(BANK_DEPOSIT) > 0) {
							answer -= ds_readws(BANK_DEPOSIT);
							p_money = get_party_money();
							p_money += 10 * ds_readws(BANK_DEPOSIT);
							set_party_money(p_money);
							ds_writews(BANK_DEPOSIT, 0);
						}

						add_ds_ws(MONTHLY_CREDIT, answer);

						if (ds_readws(MONTHLY_CREDIT) > 200) {

							GUI_dialogbox((RealPt)ds_readd(DTP2), get_city(0x144),
									get_city(0x130), 0);

							l3 = ds_readws(MONTHLY_CREDIT) - 200;
							answer -= l3;
							ds_writews(MONTHLY_CREDIT, 200);

							if (answer < 0) {
								answer = 0;
							}
						}

						if (ds_readws(MONTHLY_CREDIT) >= 200) {
							ds_writews(DAYS_TO_CENS, 30);
						}
					}

					sub_ds_ws(BANK_DEPOSIT, answer);
					p_money = get_party_money();
					p_money += 10 * answer;
					set_party_money(p_money);
				}
			}

		} else if (answer == 1) {

			if (ds_readws(BANK_DEPOSIT) >= 30000) {

				/* prevent overflow  at 32767 */
				GUI_output(p_datseg + 0x7c44);

			} else {

				answer = GUI_input(get_city(0x12c), 3);
				p_money = get_party_money();

				if (answer * 10 > p_money) {
					GUI_output(get_ltx(0x644));
				} else {

					if (answer <= 0) {

						GUI_dialogbox((RealPt)ds_readd(DTP2), get_city(0x144),
								get_city(0x13c), 0);

					} else {

						p_money -= 10 * answer;
						set_party_money(p_money);
						ds_writews(DAYS_TO_CENS, 0);
						add_ds_ws(BANK_DEPOSIT, answer);

						if (ds_readws(MONTHLY_CREDIT) != 0) {

							sub_ds_ws(MONTHLY_CREDIT, answer);

							if (ds_readws(MONTHLY_CREDIT) < 0) {
								ds_writews(MONTHLY_CREDIT, 0);
							}
						}
						if (ds_readws(BANK_DEPOSIT) > -1000) {
							ds_writews(DEBT_DAYS, 0);
						}
					}
				}
			}
		} else {
			done = 1;
		}

	} while (!done);
}

/* Borlandified and identical */
void thorwal_mueller(void)
{
	if (GUI_bool(get_city(0x40))) {

		GUI_output((ds_readw(0x3354) == 0) ? /* first visit ? */
			get_city(0x44) : get_city(0x48));

		/* mark the miller as visited */
		ds_writew(0x3354, 1);
	}
}

#if !defined(__BORLANDC__)
}
#endif
