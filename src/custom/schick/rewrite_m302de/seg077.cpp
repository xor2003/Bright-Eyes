/**
 *	Rewrite of DSA1 v3.02_de functions of seg077 (dungeon: deadship)
 *	Functions rewritten: 4/11
 */
#include <stdio.h>

#include "v302de.h"

#include "seg000.h"
#include "seg002.h"
#include "seg004.h"
#include "seg007.h"
#include "seg025.h"
#include "seg026.h"
#include "seg027.h"
#include "seg075.h"
#include "seg076.h"
#include "seg092.h"
#include "seg095.h"
#include "seg096.h"
#include "seg097.h"
#include "seg103.h"
#include "seg105.h"

#if !defined(__BORLANDC__)
namespace M302de {
#endif

/* Borlandified and identical */
signed short DNG01_handler(void)
{
	signed short target_pos;
	signed short i;
	Bit8u *hero;


	target_pos = 4096 * ds_readbs(DUNGEON_LEVEL) + 256 * ds_readws(X_TARGET) + ds_readws(Y_TARGET);

	if (target_pos == 0x108)
	{
		DNG_fallpit_test(6);

	} else if (target_pos == 0x1309)
	{
		dec_ds_ws_post(X_TARGET);
		DNG_fallpit_test(6);

	} else if (target_pos == 0x1e05)
	{
		inc_ds_ws_post(Y_TARGET);
		DNG_fallpit_test(6);

	} else if (target_pos == 0x2706 || target_pos == 0x2709)
	{
		DNG_stub6();

	} else if (target_pos == 0x3e07)
	{
		DNG_fallpit_test(6);

	} else if (target_pos == 0x4706)
	{
		DNG_fallpit_test(6);
		inc_ds_ws_post(Y_TARGET);

	} else if (target_pos == 0x1d05 && target_pos != ds_readws(0x330e) && !ds_readbs(0x3315))
	{
		sprintf((char*)Real2Host(ds_readfp(TEXT_OUTPUT_BUF)),
			(char*)get_ltx(0x840),
			(char*)Real2Host(GUI_names_grammar(0, 3, 0)),
			(char*)Real2Host(GUI_2f2(2, 3, 0)));

		/* ITEM: get a SABRE */
		if (GUI_bool(Real2Host(ds_readfp(TEXT_OUTPUT_BUF))) && get_item(3, 1, 1))
		{
			ds_writeb(0x3315, 1);
		}

	} else if (target_pos == 0x3209 && target_pos != ds_readws(0x330e) && !ds_readbs(0x3316))
	{
		sprintf((char*)Real2Host(ds_readfp(TEXT_OUTPUT_BUF)),
			(char*)get_ltx(0x840),
			(char*)Real2Host(GUI_names_grammar(0, 12, 0)),
			(char*)Real2Host(GUI_2f2(2, 12, 0)));

		/* ITEM: get a CROSSBOW */
		if (GUI_bool(Real2Host(ds_readfp(TEXT_OUTPUT_BUF))) && get_item(12, 1, 1))
		{
			ds_writeb(0x3316, 1);
		}

	} else if (target_pos == 0x4209 && target_pos != ds_readws(0x330e) && !ds_readbs(0x3314))
	{
		/* ITEM: a magic AMULET */
		if (GUI_bool(get_dtp(0x1c)) && get_item(174, 1, 1))
		{
			ds_writeb(0x3314, 1);
			sub_ds_ds(GODS_ESTIMATION + 4 * 5, 100L);
		}

	} else if (target_pos == 0x4d06 && target_pos != ds_readws(0x330e))
	{
		seg092_06b4(0);

	} else if (ds_readbs((0xbd6e + 1)) == 2)
	{
		/* TRAP: heros may loose 2 LE with probability 10% */
		if (mod_day_timer(MINUTES(10)))
		{
			hero = get_hero(0);
			for (i = 0; i <= 6; i++, hero += SIZEOF_HERO)
			{
				if (random_schick(100) <= 10 &&
					host_readbs(hero + HERO_TYPE) != 0 &&
					host_readbs(hero + HERO_GROUP_NO) == ds_readbs(CURRENT_GROUP))
				{
					sub_hero_le(hero, 2);

					sprintf((char*)Real2Host(ds_readfp(TEXT_OUTPUT_BUF)),
						(char*)get_dtp(0x30),
						(char*)hero + HERO_NAME2);

					GUI_output(Real2Host(ds_readfp(TEXT_OUTPUT_BUF)));
				}
			}
		}

	} else if (target_pos == 0x5108 && !ds_readbs(0x3317))
	{
		/* NPC: ARDORA */
		ds_writew(TEXTBOX_WIDTH, 7);

		load_in_head(21);

		if (GUI_dialogbox(ds_readfp(DTP2), get_ltx(0xbd0), get_dtp(0x20), 2,
				get_ltx(0x08), get_ltx(0x0c)) == 1)
		{
			ds_writew(TEXTBOX_WIDTH, 3);

			GUI_dialogbox(ds_readfp(DTP2), get_ltx(0xbd0), get_dtp(0x24), 0);

			if (host_readbs(get_hero(6) + HERO_TYPE) != 0)
			{
				remove_npc(host_readbs(get_hero(6) + HERO_NPC_ID) + 19,
						31,
						host_readbs(get_hero(6) + HERO_NPC_ID) + ARCHIVE_FILE_NSC_LTX,
						NULL, NULL);
			}

			add_npc(ARCHIVE_FILE_NSC_LTX + 4);
		} else {
			ds_writew(TEXTBOX_WIDTH, 3);

			GUI_dialogbox(ds_readfp(DTP2), get_ltx(0xbd0), get_dtp(0x28), 0);
		}

		ds_writeb(0x3317, 1);

		add_hero_ap_all(20);

	} else if (target_pos == 0x5e07 && target_pos != ds_readws(0x330e))
	{
		if (GUI_bool(get_dtp(0x2c)))
		{
			/* check if a ROPE LADDER or a ROPE is available */
			/* Original-Bug: Why not check for a mage with staffspell level >= 3? */
			if (get_first_hero_with_item(121) != -1 ||
				get_first_hero_with_item(32) != -1)
			{
				/* Original-Bug: better get_first_hero_available_in_group() */
				if (test_skill(get_hero(0), 10, 0) > 0)
				{
					ds_writeb(0xbd95 + 32 * ds_readws(Y_TARGET) + ds_readws(X_TARGET), 0x50);
					DNG_dec_level();
					ds_writeb(0xbd95 + 32 * ds_readws(Y_TARGET) + ds_readws(X_TARGET), 0x60);
					inc_ds_ws_post(Y_TARGET);
				}
			} else {
				GUI_output(get_ltx(0x844));
			}
		}

	} else if (target_pos == 0x280b && target_pos != ds_readws(0x330e))
	{
		if (GUI_bool(get_dtp(0x60)))
		{
			leave_dungeon();
			ds_writebs(CURRENT_TOWN, (signed char)ds_readws(0x4338));
			ds_writew(X_TARGET, ds_readws(0x433a));
			ds_writew(Y_TARGET, ds_readws(0x433c));
			ds_writeb(LOCATION, 0);
			ds_writeb(DIRECTION, (ds_readws(0x433e) + 2) & 3);

			GUI_output(get_dtp(0x3c));

			if (ds_readws(DEATHTRAP) == 1 && ds_readws(DEATHTRAP_STEPS) != 0)
			{
				load_ani(18);
				init_ani(1);
				set_var_to_zero();
				GUI_output(get_dtp(0x40));
			} else {
				GUI_output(get_dtp(0x44));
			}

			ds_writeb(0x45b8, 1);
			timewarp(HOURS(6));
			ds_writeb(0x4475, 3);
		}
	}

	ds_writew(0x330e, target_pos);

	return 0;
}

/* Borlandified and identical */
void DNG01_chest1_x1(RealPt chest)
{
	RealPt ptr_bak;

	ptr_bak = (RealPt)host_readd(Real2Host(chest) + 11);
	host_writed(Real2Host(chest) + 11, (Bit32u)RealMake(datseg, 0x41ec));
	loot_simple_chest(Real2Host(chest));
	host_writed(Real2Host(chest) + 11, (Bit32u)ptr_bak);
}

/* Borlandified and identical */
void DNG01_chest2_x1(RealPt chest)
{
	RealPt ptr_bak;

	ptr_bak = (RealPt)host_readd(Real2Host(chest) + 11);
	host_writed(Real2Host(chest) + 11, (Bit32u)RealMake(datseg, 0x41f4));
	loot_simple_chest(Real2Host(chest));
	host_writed(Real2Host(chest) + 11, (Bit32u)ptr_bak);
}

/* Borlandified and identical */
void DNG01_chest3_x1(RealPt chest)
{
	RealPt ptr_bak;

	ptr_bak = (RealPt)host_readd(Real2Host(chest) + 11);
	host_writed(Real2Host(chest) + 11, (Bit32u)RealMake(datseg, 0x41fe));
	loot_simple_chest(Real2Host(chest));
	host_writed(Real2Host(chest) + 11, (Bit32u)ptr_bak);
}

#if !defined(__BORLANDC__)
}
#endif
