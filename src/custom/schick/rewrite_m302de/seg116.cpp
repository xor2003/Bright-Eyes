/**
 *	Rewrite of DSA1 v3.02_de functions of seg116 (travel events 8 / 10)
 *	Functions rewritten: 3/17
 */

#include "v302de.h"

#include "seg002.h"
#include "seg025.h"
#include "seg026.h"
#include "seg097.h"
#include "seg103.h"
#include "seg109.h"

#if !defined(__BORLANDC__)
namespace M302de {
#endif

#if defined(__BORLANDC__)
/* Borlandified and identical */
void tevent_130(void)
{
	signed short answer;

	if (TRV_enter_hut_question()) {

		ds_writews(0x434f, 0);

		ds_writeb(LOCATION, 6);
		do_location();
		ds_writeb(LOCATION, 0);

		TRV_load_textfile(-1);
		ds_writews(0x434f, -1);

		load_in_head(10);

		do {
			answer = GUI_dialogbox(Real2Host(ds_readd(DTP2)), (RealPt)NULL,
						get_city(0x4c), 2,
						get_city(0x50),
						get_city(0x54));
		} while (answer == -1);

		if (answer == 1) {

			do {
				answer = GUI_dialogbox(Real2Host(ds_readd(DTP2)), (RealPt)NULL,
							get_city(0x58), 3,
							get_city(0x5c),
							get_city(0x60),
							get_city(0x64));
			} while (answer == -1);

			if (answer == 1 || answer == 2) {
				GUI_dialog_na(0, answer == 1 ? get_city(0x68) : get_city(0x6c));
			} else {
					GUI_dialog_na(0, test_attrib(Real2Host(get_first_hero_available_in_group()), 2, 0) > 0 ? get_city(0x6c) : get_city(0x68));
			}
		}

		ds_writeb(LOCATION, 6);
		do_location();
		ds_writeb(LOCATION, 0);
	}
}
#endif

/* Borlandified and identical */
void tevent_131(void)
{
	/* entrance to the pirate cave */
	signed short answer;

	if (test_skill(Real2Host(get_first_hero_available_in_group()), 51, 8) > 0 && !ds_readb(0x3e05)) {

		ds_writeb(0x3e05, 1);

		GUI_output(get_city(0x70));

		do {
			answer = GUI_radio(get_city(0x74), 2,
						get_city(0x78),
						get_city(0x7c));
		} while (answer == -1);

		if (answer == 1) {
			ds_writeb(0x4333, 11);
		}

	} else {

		if (ds_readb(0x3e05) != 0) {

			do {
				answer = GUI_radio(get_city(0x80), 2,
							get_city(0x84),
							get_city(0x88));
			} while (answer == -1);

			if (answer == 1) {
				ds_writeb(0x4333, 11);
			}
		}
	}
}

#if defined(__BORLANDC__)
/* Borlandified and identical */
void tevent_132(void)
{

	if ((test_skill(Real2Host(get_first_hero_available_in_group()), 31, 1) > 0 && !ds_readb(0x3e06)) || ds_readb(0x3e06) != 0) {

		/* set this camp place as known */
		ds_writeb(0x3e06, 1);

		if ((test_skill(Real2Host(get_first_hero_available_in_group()), 29, 1) > 0 && !ds_readb(0x3e07)) || ds_readb(0x3e07) != 0) {
			ds_writeb(0x3e07, 1);
			ds_writebs(0x66d0, 61);
			TRV_found_camp_place(2);
			ds_writebs(0x66d0, -1);
		} else {
			TRV_found_camp_place(0);
		}
	}
}
#endif

void TLK_old_woman(signed short state)
{
	DUMMY_WARNING();
}

#if !defined(__BORLANDC__)
}
#endif
