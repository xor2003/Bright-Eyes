/*
 *	Rewrite of DSA1 v3.02_de functions of seg109 (travel events 1 / 10)
 *	Functions rewritten: 5/30
*/

#include "v302de.h"

#include "seg002.h"
#include "seg004.h"
#include "seg026.h"
#include "seg027.h"
#include "seg029.h"
#include "seg032.h"
#include "seg097.h"

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

/* 0x4f2 */
/**
 * enter_hut_question() - question if you want to rest in a hut
 *
 * Returns the answer 0 = no, 1 = yes
 */
signed short enter_hut_question(void)
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

void seg109_067e(signed short mod, signed short time)
{
#if !defined(__BORLANDC__)
	DUMMY_WARNING();
#else
#endif
}

/* The hunter Varnheim <-> Daspota */
void tevent_002(void)
{
	signed short answer;

	/* load dialog head */
	load_in_head(0x0a);

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

		if (answer == 1)
			GUI_dialog_na(0, get_city(0x10));
		else
			GUI_dialog_na(0, get_city(0x14));

		timewarp(0x546);
	}
}

#if !defined(__BORLANDC__)
}
#endif
