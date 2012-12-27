/**
 *	Rewrite of DSA1 v3.02_de functions of seg117 (2xTravelevent, hunt and helpers)
 *	Functions rewritten: 3/16
 */

#if !defined(__BORLANDC__)
#include "schick.h"
#endif

#include "v302de.h"

#include "seg002.h"
#include "seg004.h"
#include "seg007.h"
#include "seg026.h"
#include "seg027.h"
#include "seg029.h"
#include "seg097.h"

#if !defined(__BORLANDC__)
namespace M302de {
#endif

/* static */
void pause_traveling(signed short ani_nr)
{

	ds_writeb(0xe5d2, 1);

	load_ani(ani_nr);

	draw_main_screen();

	init_ani(0);

	load_city_ltx(0xf0);

	ds_writew(0xe5d9, ds_readw(0x2ca2));
	ds_writew(0xe5d7, ds_readw(0x2ca4));
	ds_writew(0xe5d5, ds_readw(0xbffd));
	ds_writew(0xe5d3, ds_readw(0xe113));

	ds_writeb(0xb132, 1);

	/* c = b = a = 0 */
	ds_writew(0xe113, 0);
	ds_writew(0x2ca2, 0);
	ds_writeb(TRAVELING, 0);

	ds_writew(0x2ca4, ani_nr == 21 ? 60: 70);
	ds_writew(0xbffd, 9);

}

/* static */
void resume_traveling(void)
{
	ds_writew(0x2ca2, ds_readw(0xe5d9));
	ds_writew(0x2ca4, ds_readw(0xe5d7));
	ds_writew(0xbffd, ds_readw(0xe5d5));
	ds_writew(0xe113, ds_readw(0xe5d3));

	set_var_to_zero();

	/* b = a = 1 */
	ds_writeb(TRAVELING, 1);
	ds_writew(0x2846, 1);

	ds_writeb(0xe5d2, 0);
	ds_writeb(0xb132, 0);

}

/* should be static */
void do_snake_attack(void)
{
	Bit8u *hero_i;
	signed short choosen_hero;
	signed short i;
	signed short l_di;

	/* load snake picture */
	pause_traveling(30);

	GUI_output(get_city(0x64));

	hero_i = get_hero(0);

	for (l_di = i = 0; i <= 6; i++, hero_i += 0x6da) {

		/* hero is invalid */
		if (host_readb(hero_i + 0x21) == 0)
			continue;

		/* hero is not in current group */
		if (host_readb(hero_i + 0x87) != ds_readb(CURRENT_GROUP))
			continue;

		/* hero is dead */
		if (hero_dead(hero_i))
			continue;

		/* Original-Bug: something was forgotten */
		/* check GE+0 */
		if (test_attrib(hero_i, 4, 0) < l_di) {
			/* remember the hero */
			choosen_hero = i;
		}
	}

	if (l_di) {

		/* select the chosen hero */
		hero_i = get_hero(choosen_hero);

		/* print a message */
		sprintf((char*)Real2Host(ds_readd(DTP2)),
			(char*)get_city(0x68),
			hero_i + 0x10);

		GUI_output(Real2Host(ds_readd(DTP2)));

		/* hero gets 2 AP */
		add_hero_ap(hero_i, 2);

		if (random_schick(100) <= 50) {
			/* hero gets bitten */

			/* hero gets 3 AP */
			add_hero_ap(hero_i, 3);

			/* and 2 * 3W6 damage */
			sub_hero_le(hero_i, dice_roll(3, 6, 0) * 2);
		}
	} else {
		GUI_output(get_city(0x6c));
	}

	resume_traveling();
}

#if !defined(__BORLANDC__)
}
#endif

