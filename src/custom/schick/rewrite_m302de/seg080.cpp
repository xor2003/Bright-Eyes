/**
 *	Rewrite of DSA1 v3.02_de functions of seg080 (dungeon: wolvcave, cave)
 *	Functions rewritten: 9/9 (complete)
 *
 *	Borlandified and identical
 *	Compiler:	Borland C++ 3.1
 *	Call:		BCC.EXE -mlarge -O- -c -1 -Yo seg080.cpp
 */

#include <stdio.h>

#include "v302de.h"

#include "seg000.h"
#include "seg002.h"
#include "seg003.h"
#include "seg004.h"
#include "seg007.h"
#include "seg025.h"
#include "seg027.h"
#include "seg032.h"
#include "seg047.h"
#include "seg092.h"
#include "seg096.h"
#include "seg097.h"
#include "seg103.h"
#include "seg105.h"
#include "seg113.h"

#if !defined(__BORLANDC__)
namespace M302de {
#endif

/**
 * \brief   dungeon handler of the wolfcave
 */
signed short DNG04_handler(void)
{
	signed short pos;
	signed short i;
	signed short tw_bak;
	Bit8u *hero;

	tw_bak = ds_readws(TEXTBOX_WIDTH);
	ds_writew(TEXTBOX_WIDTH, 7);

        pos = (ds_readbs(DUNGEON_LEVEL) << 12) + (ds_readws(X_TARGET) << 8) + ds_readws(Y_TARGET);

	if (pos == 0x607 && pos != ds_readws(DNG_HANDLED_POS) && !ds_readb(DNG04_CORPSE0_FLAG))
	{
		/* DNG04_corpse0 */
		seg092_06b4(0);

	} else if (pos == 0x808 && pos != ds_readws(DNG_HANDLED_POS) && !ds_readb(DNG04_GAP_FLAG))
	{
		/* do you want to grab into the gap ? */
		do {
			i = GUI_radio(get_tx(2), 2,
						get_tx(3),
						get_tx(4));
		} while (i == -1);

		if (i == 2)
		{
			hero = Real2Host(get_first_hero_available_in_group());

			sprintf((char*)Real2Host(ds_readd(DTP2)),
				(char*)get_tx(5),
				(char*)hero + HERO_NAME2);

			GUI_output(Real2Host(ds_readd(DTP2)));

			sub_hero_le(hero, 2);

			/* get a magic AMULET */
			get_item(175, 1, 1);

			ds_writeb(DNG04_GAP_FLAG, 1);
		}

	} else if (pos == 0x50b && pos != ds_readws(DNG_HANDLED_POS) && !ds_readb(DNG04_HELMET_FLAG))
	{
		/* do you want the SILVER HELMET? */
		if (GUI_bool(get_tx(7)))
		{
			/* get a SILVER HELMET */
			if (get_item(213, 1, 1))
			{
				/* mark SILVER HELMET as taken */
				ds_writeb(DNG04_HELMET_FLAG, 1);
			}
		}

	} else if (pos == 0x10c && pos != ds_readws(DNG_HANDLED_POS))
	{
		/* DNG04_corpse1 */
		seg092_06b4(0);

	} else if (pos == 0x803 && pos != ds_readws(DNG_HANDLED_POS))
	{
		/* the ceiling may drop on your head */
		GUI_output(get_tx(9));

		hero = get_hero(0);
		for (i = 0; i <= 6 ; i++, hero += SIZEOF_HERO)
		{
			if (host_readbs(hero + HERO_TYPE) != HERO_TYPE_NONE &&
				host_readbs(hero + HERO_GROUP_NO) == ds_readbs(CURRENT_GROUP) &&
				!hero_dead(hero) &&
				test_skill(hero, TA_SCHLEICHEN, 2) <= 0)
			{
				sprintf((char*)Real2Host(ds_readd(DTP2)),
					(char*)get_tx(10),
					(char*)hero + HERO_NAME2);

				GUI_output(Real2Host(ds_readd(DTP2)));

				sub_group_le(dice_roll(2, 6, 0));

				break;
			}
		}

	} else if (pos == 0x703 && pos != ds_readws(DNG_HANDLED_POS))
	{
		GUI_output(get_tx(11));

	} else if (pos == 0x505 && pos != ds_readws(DNG_HANDLED_POS))
	{
		GUI_output(get_tx(12));

	} else if (pos == 0xa0d && pos != ds_readws(DNG_HANDLED_POS))
	{
		/* dig into a heap of dirt? */
		if (GUI_bool(get_tx(13)) && GUI_bool(get_tx(14)))
		{
			GUI_output(get_tx(15));

			i = get_free_mod_slot();

			/* Original-BUG: assumption the leader is at pos 0 */
			/* CH-5 for 1 day */
			set_mod_slot(i, DAYS(1), get_hero(0) + (HERO_ATTRIB + 3 * ATTRIB_CH), -5, 0);
		}

	} else if (pos == 0xe0e && pos != ds_readws(DNG_HANDLED_POS))
	{
		/* the ceiling may drop on your head */
		GUI_output(get_tx(9));

		hero = get_hero(0);
		for (i = 0; i <= 6 ; i++, hero += SIZEOF_HERO)
		{
			if (host_readbs(hero + HERO_TYPE) != HERO_TYPE_NONE &&
				host_readbs(hero + HERO_GROUP_NO) == ds_readbs(CURRENT_GROUP) &&
				!hero_dead(hero) &&
				test_skill(hero, TA_SCHLEICHEN, 4) <= 0)
			{
				sprintf((char*)Real2Host(ds_readd(DTP2)),
					(char*)get_tx(10),
					(char*)hero + HERO_NAME2);

				GUI_output(Real2Host(ds_readd(DTP2)));

				sub_group_le(dice_roll(1, 6, 2));

				break;
			}
		}

	} else if (pos == 0xa06 && pos != ds_readws(DNG_HANDLED_POS) && !ds_readb(DNG04_LANTERN_FLAG))
	{
		/* do you want a LANTERN? */
		if (GUI_bool(get_tx(16)))
		{
			/* get a LANTERN */
			if (get_item(25, 1, 1))
			{
				/* mark LANTERN as taken */
				ds_writeb(DNG04_LANTERN_FLAG, 1);
			}
		}

	} else if (pos == 0xa02 && pos != ds_readws(DNG_HANDLED_POS))
	{
		/* a very deep gap */
		i = 1;
		hero = Real2Host(get_first_hero_available_in_group());

		if (!ds_readb(DNG04_DEEPGAP_FLAG) || test_attrib(hero, ATTRIB_GE, 0) > 0)
		{
			ds_writeb(DNG04_DEEPGAP_FLAG, 1);

			i = GUI_bool(get_tx(17));
		}

		if (i)
		{
			if (test_attrib(hero, ATTRIB_GE, 0) > 0)
			{
				sprintf((char*)Real2Host(ds_readd(DTP2)),
					(char*)get_tx(18),
					(char*)hero + HERO_NAME2,
					(char*)Real2Host(GUI_get_ptr(host_readbs(hero + HERO_SEX), 3)),
					(char*)Real2Host(GUI_get_ptr(host_readbs(hero + HERO_SEX), 0)));

				GUI_output(Real2Host(ds_readd(DTP2)));

			} else {

				sprintf((char*)Real2Host(ds_readd(DTP2)),
					(char*)get_tx(19),
					(char*)hero + HERO_NAME2,
					(char*)Real2Host(GUI_get_ptr(host_readbs(hero + HERO_SEX), 0)),
					(char*)hero + HERO_NAME2);

				GUI_output(Real2Host(ds_readd(DTP2)));

				hero_disappear(hero, 0, -1);
			}
		}
	}

	if (pos == 0x601 && pos != ds_readws(DNG_HANDLED_POS) && !ds_readb(DNG04_CORPSE2_FLAG))
	{
		/* DNG04_corpse2 */
		seg092_06b4(0);

	} else if ((pos == 0xd06 || pos == 0xe06 || pos == 0xe05) && pos != ds_readws(DNG_HANDLED_POS))
	{
		/* Probability of 5% to get bitten by a rat */
		if (mod_day_timer(MINUTES(10)))
		{
			hero = get_hero(0);
			for (i = 0; i <= 6 ; i++, hero += SIZEOF_HERO)
			{
				if (random_schick(100) <= 5 &&
					host_readbs(hero + HERO_TYPE) != HERO_TYPE_NONE &&
					host_readbs(hero + HERO_GROUP_NO) == ds_readbs(CURRENT_GROUP) &&
					!hero_dead(hero))
				{
					sub_hero_le(hero, 2);

					sprintf((char*)Real2Host(ds_readd(TEXT_OUTPUT_BUF)),
						(char*)get_tx(21),
						(char*)hero + HERO_NAME2);

					GUI_output(Real2Host(ds_readd(TEXT_OUTPUT_BUF)));
				}
			}
		}

	} else if (ds_readb((0xbd6e + 1)) == 2)
	{
		/* Probability of 10% to get bitten by a rat */
		if (mod_day_timer(MINUTES(10)))
		{
			hero = get_hero(0);
			for (i = 0; i <= 6 ; i++, hero += SIZEOF_HERO)
			{
				/* Original-Bug: forgot to check if the hero is dead */
				if (random_schick(100) <= 10 &&
					host_readbs(hero + HERO_TYPE) != HERO_TYPE_NONE &&
					host_readbs(hero + HERO_GROUP_NO) == ds_readbs(CURRENT_GROUP))
				{
					sub_hero_le(hero, 2);

					sprintf((char*)Real2Host(ds_readd(TEXT_OUTPUT_BUF)),
						(char*)get_tx(25),
						(char*)hero + HERO_NAME2);

					GUI_output(Real2Host(ds_readd(TEXT_OUTPUT_BUF)));
				}
			}
		}

	} else if (pos == 0x70f && pos != ds_readws(DNG_HANDLED_POS))
	{
		/* the exit of this dungeon */
		leave_dungeon();

		ds_writeb(CURRENT_TOWN, ds_readb(TRV_DEST_REACHED));
		ds_writew(X_TARGET, ds_readws(ARRIVAL_X_TARGET));
		ds_writew(Y_TARGET, ds_readws(ARRIVAL_Y_TARGET));
		ds_writeb(LOCATION, 0);
		ds_writeb(DIRECTION, (ds_readb(ARRIVAL_DIRECTION) + 2) & 0x03);

		sprintf((char*)Real2Host(ds_readd(DTP2)),
			(char*)get_tx(26),
			(char*)get_ttx(ds_readws(TRV_DESTINATION) + 0xeb));

		GUI_output(Real2Host(ds_readd(DTP2)));

		timewarp(HOURS(2));

		ds_writeb(FADING_STATE, 3);
	}

	ds_writew(TEXTBOX_WIDTH, tw_bak);
	ds_writew(DNG_HANDLED_POS, pos);

	return 0;
}

void DNG04_corpse0(RealPt ptr)
{
	loot_corpse(ptr, get_tx(1), p_datseg + DNG04_CORPSE0_FLAG);
}

void DNG04_corpse1(RealPt ptr)
{
	loot_corpse(ptr, get_tx(8), p_datseg + DNG04_CORPSE1_FLAG);
}

void DNG04_corpse2(RealPt ptr)
{
	loot_corpse(ptr, get_tx(20), p_datseg + DNG04_CORPSE2_FLAG);
}

void DNG04_corpse0_chest(RealPt chest)
{
	RealPt bak;

	bak = (RealPt)host_readd(Real2Host(chest) + 11);
	host_writed(Real2Host(chest) + 11, (Bit32u)RealMake(datseg, DNG04_CHEST_CORPSE0));

	loot_chest(Real2Host(chest), get_tx(22), get_tx(6));

	host_writed(Real2Host(chest) + 11, (Bit32u)bak);
}

void DNG04_corpse1_chest(RealPt chest)
{
	RealPt bak;

	bak = (RealPt)host_readd(Real2Host(chest) + 11);
	host_writed(Real2Host(chest) + 11, (Bit32u)RealMake(datseg, DNG04_CHEST_CORPSE1));

	loot_chest(Real2Host(chest), get_tx(23), get_tx(6));

	host_writed(Real2Host(chest) + 11, (Bit32u)bak);
}

void DNG04_corpse2_chest(RealPt chest)
{
	RealPt bak;

	bak = (RealPt)host_readd(Real2Host(chest) + 11);
	host_writed(Real2Host(chest) + 11, (Bit32u)RealMake(datseg, DNG04_CHEST_CORPSE2));

	loot_chest(Real2Host(chest), get_tx(24), get_tx(6));

	host_writed(Real2Host(chest) + 11, (Bit32u)bak);
}

/**
 * \brief   dungeon handler of a cave
 */
signed short DNG05_handler(void)
{
	signed short pos;
	signed short tmp;
	signed short tw_bak;
	Bit8u *hero;

	tw_bak = ds_readws(TEXTBOX_WIDTH);
	ds_writew(TEXTBOX_WIDTH, 7);

	pos = (ds_readbs(DUNGEON_LEVEL) << 12) + (ds_readws(X_TARGET) << 8) + ds_readws(Y_TARGET);

	if (pos == 0x70e && pos != ds_readws(DNG_HANDLED_POS) && ds_readw(DNG05_TRASH_FLAG) == 0)
	{
		if (GUI_bool(get_tx(1)) && GUI_bool(get_tx(15)))
		{
			ds_writew(DNG05_TRASH_FLAG, 1);

			hero = Real2Host(get_first_hero_available_in_group());

			GUI_output(get_tx(16));

			tmp = get_free_mod_slot();
			set_mod_slot(tmp, DAYS(1), hero + (HERO_ATTRIB + 3 * ATTRIB_CH), -5, 0);

			add_party_money(20L);
		}

	} else if (pos == 0x50c && pos != ds_readws(DNG_HANDLED_POS) && !ds_readb(DNG05_PROVIANT_FLAG))
	{
		if (GUI_bool(get_tx(2)))
		{
			GUI_output(get_tx(3));

			get_item(45, 1, 10);

			ds_writeb(DNG05_PROVIANT_FLAG, 1);
		}

	} else if (pos == 0x907 && pos != ds_readws(DNG_HANDLED_POS) && !ds_readb(DNG05_BATS_FLAG))
	{
		if (GUI_bool(get_tx(4)))
		{
			GUI_output(get_tx(5));

			ds_writeb(DNG05_BATS_FLAG, 1);
		}

	} else if (pos == 0x309 && pos != ds_readws(DNG_HANDLED_POS) && !ds_readb(DNG05_GOD_FLAG))
	{
		do {
			tmp = GUI_radio(get_tx(6), 2,
						get_tx(7),
						get_tx(8));
		} while (tmp == -1);

		add_ds_ds((GODS_ESTIMATION + 4 * 4), tmp == 1 ? -15 : 15);

		GUI_output(get_tx(9));

		ds_writeb(DNG05_GOD_FLAG, 1);

	} else if (pos == 0x805 && pos != ds_readws(DNG_HANDLED_POS))
	{
		if (random_schick(100) < 30)
		{
			ds_writew(MAX_ENEMIES, random_schick(100) < 10 ? 3 : 2);
			ds_writew((FIG_FLEE_POSITION + 0),
				 ds_writew((FIG_FLEE_POSITION + 2),
				 ds_writew((FIG_FLEE_POSITION + 4),
				 ds_writew((FIG_FLEE_POSITION + 6), 0x827))));

			do_fight(FIGHTS_F061_4B);
		}

	} else if (pos == 0xb01 && pos != ds_readws(DNG_HANDLED_POS))
	{
		GUI_output(get_tx(11));

	} else if (pos == 0x601 && pos != ds_readws(DNG_HANDLED_POS))
	{
		if (GUI_bool(get_tx(12)))
		{
			hero = Real2Host(get_first_hero_available_in_group());

			sprintf((char*)Real2Host(ds_readd(DTP2)),
				(char*)get_tx(13),
				(char*)hero + HERO_NAME2);

			GUI_output(Real2Host(ds_readd(DTP2)));

			sub_hero_le(hero, dice_roll(1, 3, 2));

			hero_disease_test(hero, 1, 65);
		}

	} else if (pos == 0x30e && pos != ds_readws(DNG_HANDLED_POS))
	{
		load_ani(32);
		init_ani(1);

		GUI_output(get_tx(14));

		set_var_to_zero();

		ds_writew(X_TARGET, 5);
		ds_writew(AREA_PREPARED, -1);

	} else if (pos == 0x60f && pos != ds_readws(DNG_HANDLED_POS))
	{
		/* the exit of this dungeon */
		leave_dungeon();

		ds_writeb(CURRENT_TOWN, ds_readb(TRV_DEST_REACHED));
		ds_writew(X_TARGET, ds_readws(ARRIVAL_X_TARGET));
		ds_writew(Y_TARGET, ds_readws(ARRIVAL_Y_TARGET));
		ds_writeb(LOCATION, 0);
		ds_writeb(DIRECTION, (ds_readb(ARRIVAL_DIRECTION) + 2) & 0x03);

		sprintf((char*)Real2Host(ds_readd(DTP2)),
			(char*)get_tx(17),
			(char*)get_ttx(ds_readws(TRV_DESTINATION) + 0xeb));

		GUI_output(Real2Host(ds_readd(DTP2)));

		timewarp(HOURS(2));

		ds_writeb(FADING_STATE, 3);
	}

	ds_writew(TEXTBOX_WIDTH, tw_bak);
	ds_writew(DNG_HANDLED_POS, pos);

	return 0;
}

/**
 * \brief   print introductions of dungeon #5 fights
 *
 * \param   fight_id    ID of the fight
 */
void DNG5_fight_intro(signed short fight_id)
{
	if (fight_id == 76) {
		GUI_output(get_tx(10));
	}
}

#if !defined(__BORLANDC__)
}
#endif
