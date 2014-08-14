/*
 *	Rewrite of DSA1 v3.02_de functions of seg099 (spells 1/3)
 *	Spells:		Dispell / Domination / Demonology / Elements /
 *			Movement / Healing / Clairvoyance
 *	Functions rewritten 37/39
 *
*/

#include <stdio.h>
#include <string.h>

#include "v302de.h"

#include "seg000.h"
#include "seg002.h"
#include "seg006.h"
#include "seg007.h"
#include "seg039.h"
#include "seg047.h"
#include "seg074.h"
#include "seg075.h"
#include "seg096.h"
#include "seg097.h"
#include "seg098.h"

#if !defined(__BORLANDC__)
namespace M302de {
#endif

/* Borlandified and identical */
void spell_beherrschung(void)
{
	ds_writed(SPELLTARGET,
		(Bit32u)((RealPt)ds_readd(HEROS) + (host_readbs(get_spelluser() + 0x86) - 1) * 0x6da));

	if (!hero_cursed(Real2Host(ds_readd(SPELLTARGET)))) {
		ds_writew(0xac0e, -2);
	} else {
		if (Real2Host(ds_readd(SPELLTARGET)) == get_spelluser()) {
			strcpy((char*)Real2Host(ds_readd(DTP2)), (char*)get_dtp(0));
			ds_writew(0xac0e, 0);
		} else {
			ds_writew(0xac0e, random_interval(2, 5) * 4);

			if (host_readws(get_spelluser() + 0x64) < ds_readws(0xac0e)) {
				ds_writew(0xac0e, -2);
			} else {
				and_ptr_bs(Real2Host(ds_readd(SPELLTARGET)) + 0xaa, 0xdf);
				sprintf((char*)Real2Host(ds_readd(DTP2)),
					(char*)get_dtp(0x4),
					(char*)Real2Host(ds_readd(SPELLTARGET)) + 0x10);
			}
		}
	}
}

/* Borlandified and identical */
void spell_destructibo(void)
{
#if !defined(__BORLANDC__)
        D1_INFO("Zauberspruch \"Destructibo\" ist nicht implementiert\n");
#endif
	ds_writew(0xac0e, -2);
}

/* Borlandified and identical */
void spell_gardanium(void)
{
	signed short answer;

	/* prepare a question */
	sprintf((char*)Real2Host(ds_readd(0xd2f3)),
		(char*)get_dtp(0x8), (char*)(get_spelluser() + 0x10));

	/* ask and get the answer */
	answer = GUI_input(Real2Host(ds_readd(0xd2f3)), 2);

	/* clear the textbuffer */
	host_writeb(Real2Host(ds_readd(0xd2f3)), 0);

	if (answer > 0) {

		if (host_readws(get_spelluser() + 0x64) >= answer) {
			/* enough AE */

			/* TODO: this adds the AE to a variable no one reads */
			add_ds_ws(0x333e, answer);
			/* set AE costs */
			ds_writew(0xac0e, answer);
			/* prepare the message */
			strcpy((char*)Real2Host(ds_readd(0xd2f3)),
				(char*)get_dtp(0x1c));
		} else {
			/* not enough AE */
			sprintf((char*)Real2Host(ds_readd(0xd2f3)),
				(char*)get_ltx(0x97c), (char*)get_spelluser() + 0x10);
			/* set AE costs */
			ds_writew(0xac0e, 0);
		}
	} else {
		ds_writew(0xac0e, 0);
	}
}

/* Borlandified and identical */
void spell_illusionen(void)
{
	/* Set pointer to enemy target */
	ds_writed(SPELLTARGET_E,
		(Bit32u)RealMake(datseg, host_readbs(get_spelluser() + 0x86) * 0x3e + 0xd0df));

	/* check if enemy is an illusion */
	if (enemy_illusion(get_spelltarget_e())) {

		/* AEcosts = enemy level - spelluser_level */
		ds_writew(0xac0e,
			(host_readbs(get_spelltarget_e() + 0x29)
			 -host_readbs(get_spelluser() + 0x27)) * 2);

		/* AEcost are at least 5 */
		if (ds_readws(0xac0e) < 5)
			ds_writew(0xac0e, 5);

		/* check if spelluser has enough AE */
		if (host_readws(get_spelluser() + 0x64) < ds_readws(0xac0e)) {
			/* NO: spell has no effect */
			ds_writew(0xac0e, -2);
		} else {
			/* YES: spell has effect */
			ds_writew(0xe3a4, 1);
			/* kill enemy */
			or_ptr_bs(get_spelltarget_e() + 0x31, 1);
		}
	} else {
		/* print a failure message */
		sprintf((char*)Real2Host(ds_readd(DTP2)),
			(char*)get_dtp(0xc),
			(char*)Real2Host(GUI_names_grammar(0x8000, host_readbs(get_spelltarget_e()), 1)));

		/* costs 2 AE */
		ds_writew(0xac0e, 2);
	}
}

/* Borlandified and identical */
void spell_verwandlung(void)
{
	signed short i;

	/* set spelltarget */
	ds_writed(SPELLTARGET,
		(Bit32u)((RealPt)ds_readd(HEROS) + (host_readbs(get_spelluser() + 0x86) - 1) * 0x6da));

	if (hero_stoned(Real2Host(ds_readd(SPELLTARGET)))) {

		/* set AEcosts */
		ds_writew(0xac0e, random_schick(10) * 5);

		/* check if spelluser has enough AE */
		if (host_readws(get_spelluser() + 0x64) < ds_readws(0xac0e)) {
			/* NO: spell has no effect */
			ds_writew(0xac0e, -2);
		} else {
			/* YES: spell has effect */
			/* unset stoned bit */
			and_ptr_bs(Real2Host(ds_readd(SPELLTARGET)) + 0xaa, 0xfb);
			sprintf((char*)Real2Host(ds_readd(DTP2)),
				(char*)get_dtp(0x10),
				(char*)Real2Host(ds_readd(SPELLTARGET)) + 0x10);
		}
	} else {
		if (hero_transformed(Real2Host(ds_readd(SPELLTARGET)))) {

			and_ptr_bs(Real2Host(ds_readd(SPELLTARGET)) + 0xab, 0xbf);

			/* increase attributes */
			for (i = 0; i <= 6; i++)
				inc_ptr_bs(Real2Host(ds_readd(SPELLTARGET)) + 0x35 + i * 3);
			sprintf((char*)Real2Host(ds_readd(DTP2)),
				(char*)get_ltx(0x8d4),
				(char*)Real2Host(ds_readd(SPELLTARGET)) + 0x10);
		} else {

#ifdef M302de_ORIGINAL_BUGFIX
			/* Broken format string, %S must be %s */
			host_writeb(get_dtp(0x14) + 5, 's');
#endif

			sprintf((char*)Real2Host(ds_readd(DTP2)),
				(char*)get_dtp(0x14),
				(char*)Real2Host(ds_readd(SPELLTARGET)) + 0x10);
			ds_writew(0xac0e, 0);
		}
	}
}

/* Borlandified and identical */
void spell_band(void)
{
	if (host_readbs(get_spelluser() + 0x86) >= 10) {
		/* cast enemy */

		/* Set pointer to enemy target */
		ds_writed(SPELLTARGET_E,
			(Bit32u)RealMake(datseg, host_readbs(get_spelluser() + 0x86) * 0x3e + 0xd0df));

		if (host_readbs(get_spelltarget_e() + 1) == 0x1c) {
			/* does not work on skeletons */
			ds_writew(0xac0e, -2);
			return;
		}

		or_ptr_bs(get_spelltarget_e() + 0x31, 0x20);

		sprintf((char*)Real2Host(ds_readd(DTP2)),
				(char*)get_dtp(0x18),
				Real2Host(GUI_names_grammar(0x8000,
					host_readbs(get_spelltarget_e()), 1)));
	} else {
		/* cast hero */

		/* Set pointer to hero target */
		ds_writed(SPELLTARGET,
			(Bit32u)((RealPt)ds_readd(HEROS) + (host_readbs(get_spelluser() + 0x86) - 1) * 0x6da));

		if (Real2Host(ds_readd(SPELLTARGET)) == get_spelluser()) {
			/* don't cast yourself */

			/* set AE costs */
			ds_writew(0xac0e, 0);

			/* prepare message */
			strcpy((char*)Real2Host(ds_readd(DTP2)),
				(char*)get_dtp(0x1c0));
		} else {
			/* set status bit */
			or_ptr_bs(Real2Host(ds_readd(SPELLTARGET)) + 0xaa, 0x80);

			/* prepare message */
			sprintf((char*)Real2Host(ds_readd(DTP2)),
					(char*)get_dtp(0x18),
					(char*)Real2Host(ds_readd(SPELLTARGET)) + 0x10);
		}
	}
}

/* Borlandified and identical */
void spell_bannbaladin(void)
{

	/* Set pointer to enemy target */
	ds_writed(SPELLTARGET_E,
		(Bit32u)RealMake(datseg, host_readbs(get_spelluser() + 0x86) * 0x3e + 0xd0df));

	if (host_readbs(get_spelltarget_e() + 0x36) != 0) {

		ds_writew(0xac0e, 0);

		sprintf((char*)Real2Host(ds_readd(DTP2)),
				(char*)get_dtp(0x20),
				Real2Host(GUI_names_grammar(0,
					host_readbs(get_spelltarget_e()), 1)));
	} else {

		if (host_readbs(get_spelltarget_e() + 1) == 0x1c) {
			ds_writew(0xac0e, -2);
			return;
		}

		or_ptr_bs(get_spelltarget_e() + 0x32, 1);

		sprintf((char*)Real2Host(ds_readd(DTP2)),
				(char*)get_dtp(0x24),
				Real2Host(GUI_names_grammar(0x8000,
					host_readbs(get_spelltarget_e()), 1)));
	}
}

/* Borlandified and identical */
void spell_boeser_blick(void)
{
	/* set attacked foe */
	ds_writed(SPELLTARGET_E,
		(Bit32u)RealMake(datseg, host_readbs(get_spelluser() + 0x86) * 0x3e + 0xd0df));

	/* this spell does not work on all kind of sleletons */
	if (host_readb(get_spelltarget_e() + 1) == 0x1c) {
		ds_writew(0xac0e, -2);
	} else {
		/* set "Boeser Blick" Flag */
		or_ptr_bs(get_spelltarget_e() + 0x32, 2);

		/* set number of attacks to 2 */
		host_writeb(get_spelltarget_e() + 0x1b, 2);

		/* prepare message */
		sprintf((char*)Real2Host(ds_readd(0xd2f3)),
			(char*)get_dtp(0x28),
			(char*)Real2Host(GUI_names_grammar(0x8000, host_readbs(get_spelltarget_e()), 1)));

	}
}

/* Borlandified and identical */
void spell_grosse_gier(void)
{
#if !defined(__BORLANDC__)
	D1_INFO("Zauberspruch \"Grosse Gier\" ist nicht implementiert\n");
#endif
	ds_writew(0xac0e, -2);
}

/* Borlandified and identical */
void spell_grosse_ver(void)
{
	ds_writed(SPELLTARGET_E,
		(Bit32u)RealMake(datseg, host_readbs(get_spelluser() + 0x86) * 0x3e + 0xd0df));

	/* this spell does not work on all kind of sleletons */
	if (host_readb(get_spelltarget_e() + 1) == 0x1c) {
		ds_writew(0xac0e, -2);
		return;
	} else {

		/* cost is 8 AP */
		ds_writew(0xac0e, 8);
	}

	/* Sub -2 from AT */
	host_writeb(get_spelltarget_e() + 0x1c,
		host_readb(get_spelltarget_e() + 0x1c) - 2);

	/* Sub -2 from PA */
	host_writeb(get_spelltarget_e() + 0x1d,
		host_readb(get_spelltarget_e() + 0x1d) - 2);
}

/* Borlandified and identical */
void spell_herrdertiere(void)
{

	/* Set pointer to enemy target */
	ds_writed(SPELLTARGET_E,
		(Bit32u)RealMake(datseg, host_readbs(get_spelluser() + 0x86) * 0x3e + 0xd0df));

	if (!host_readbs(get_spelltarget_e() + 0x36)) {

		ds_writew(0xac0e, 0);

		sprintf((char*)Real2Host(ds_readd(DTP2)),
				(char*)get_dtp(0x2c),
				Real2Host(GUI_names_grammar(0,
					host_readbs(get_spelltarget_e()), 1)));
	} else {

		ds_writew(0xac0e, host_readbs(get_spelltarget_e() + 0x1a));

		if (host_readws(get_spelluser() + 0x64) < ds_readws(0xac0e)) {
			ds_writew(0xac0e, -2);
		} else {

			or_ptr_bs(get_spelltarget_e() + 0x32, 1);

			sprintf((char*)Real2Host(ds_readd(DTP2)),
				(char*)get_dtp(0x24),
				Real2Host(GUI_names_grammar(0x8000,
					host_readbs(get_spelltarget_e()), 1)));
		}
	}
}

/* Borlandified and identical */
void spell_horriphobus(void)
{

	/* Set pointer to enemy target */
	ds_writed(SPELLTARGET_E,
		(Bit32u)RealMake(datseg, host_readbs(get_spelluser() + 0x86) * 0x3e + 0xd0df));

	/* this spell does not work on all kind of sleletons */
	if (host_readb(get_spelltarget_e() + 1) == 0x1c) {
		ds_writew(0xac0e, -2);
	} else {
		or_ptr_bs(get_spelltarget_e() + 0x32, 4);
		and_ptr_bs(get_spelltarget_e() + 0x32, 0xfd);

		sprintf((char*)Real2Host(ds_readd(DTP2)),
			(char*)get_dtp(0x30),
			Real2Host(GUI_names_grammar(0x8000,
				host_readbs(get_spelltarget_e()), 1)));
	}
}

/* Borlandified and identical */
void spell_magischerraub(void)
{
#if !defined(__BORLANDC__)
        D1_INFO("Zauberspruch \"Magischer Raub\" ist nicht implementiert\n");
#endif
}

/* Borlandified and identical */
void spell_respondami(void)
{
#if !defined(__BORLANDC__)
        D1_INFO("Zauberspruch \"Respondami\" ist nicht implementiert\n");
#endif
}

/* Borlandified and identical */
void spell_sanftmut(void)
{
	spell_herrdertiere();
}

/* Borlandified and identical */
void spell_somnigravis(void)
{

	if (host_readbs(get_spelluser() + 0x86) >= 10) {
		/* cast an enemy */

		/* Set pointer to enemy target */
		ds_writed(SPELLTARGET_E,
			(Bit32u)RealMake(datseg, host_readbs(get_spelluser() + 0x86) * 0x3e + 0xd0df));

		/* this spell does not work on all kind of sleletons */
		if (host_readb(get_spelltarget_e() + 1) == 0x1c) {
			ds_writew(0xac0e, -2);
			return;
		}

		/* set the flag */
		or_ptr_bs(get_spelltarget_e() + 0x31, 2);

		/* prepare message */
		sprintf((char*)Real2Host(ds_readd(DTP2)),
			(char*)get_dtp(0x34),
			Real2Host(GUI_names_grammar(0x8000,
				host_readbs(get_spelltarget_e()), 1)));
		return;
	}

	/* cast hero */

	/* Set pointer to hero target */
	ds_writed(SPELLTARGET,
		(Bit32u)((RealPt)ds_readd(HEROS) + (host_readbs(get_spelluser() + 0x86) - 1) * 0x6da));

	if (Real2Host(ds_readd(SPELLTARGET)) == get_spelluser()) {
		/* don't cast yourself */

		/* set AE costs */
		ds_writew(0xac0e, 0);

		/* prepare message */
		strcpy((char*)Real2Host(ds_readd(DTP2)),
			(char*)get_dtp(0x1c0));
	} else {
		/* set the flag */
		or_ptr_bs(get_spelltarget() + 0xaa, 2);

		/* prepare message */
		sprintf((char*)Real2Host(ds_readd(DTP2)),
			(char*)get_dtp(0x34),
			(char*)get_spelltarget() + 0x10);
	}
}

/* Borlandified and identical */
void spell_zwingtanz(void)
{
	/* Set pointer to enemy target */
	ds_writed(SPELLTARGET_E,
		(Bit32u)RealMake(datseg, host_readbs(get_spelluser() + 0x86) * 0x3e + 0xd0df));

	/* this spell does not work on all kind of sleletons */
	if (host_readb(get_spelltarget_e() + 1) == 0x1c) {
		ds_writew(0xac0e, -2);
	} else {

		/* set the flag */
		or_ptr_bs(get_spelltarget_e() + 0x32, 8);

		/* prepare message */
		sprintf((char*)Real2Host(ds_readd(DTP2)),
			(char*)get_dtp(0x38),
			Real2Host(GUI_names_grammar(0x8000,
				host_readbs(get_spelltarget_e()), 1)));
	}
}

/* Demonologie / Demonology */

/* Borlandified and identical */
void spell_furor_blut(void)
{
#if !defined(__BORLANDC__)
        D1_INFO("Zauberspruch \"Furor Blut\" ist nicht implementiert\n");
#endif
	ds_writew(0xac0e, -2);
}

/* Borlandified and identical */
void spell_geister_bannen(void)
{
#if !defined(__BORLANDC__)
        D1_INFO("Zauberspruch \"Geister bannen\" ist nicht implementiert\n");
#endif
}

/* Borlandified and identical */
void spell_geister_rufen(void)
{
#if !defined(__BORLANDC__)
        D1_INFO("Zauberspruch \"Geister rufen\" ist nicht implementiert\n");
#endif
	ds_writew(0xac0e, -2);
}

/* Borlandified and identical */
void spell_heptagon(void)
{
#if !defined(__BORLANDC__)
        D1_INFO("Zauberspruch \"Heptagon\" ist nicht implementiert\n");
#endif
	ds_writew(0xac0e, -2);
}

/* Borlandified and identical */
void spell_kraehenruf(void)
{
	signed short caster_level;
	signed short pa_value;
	signed short i;
	signed short damage;


	caster_level = host_readbs(get_spelluser() + 0x27) + 2;

	pa_value = get_attackee_parade();

	damage = 0;

	for (i = 0; i < caster_level; i++) {

		/* only 40 % chance of success */
		if (random_schick(20) <= 8) {

			if (random_schick(20) > pa_value) {
				damage++;
			}
		}
	}

	FIG_do_spell_damage(damage);
}

/* Borlandified and identical */
void spell_skelettarius(void)
{
	Bit8u *enemy;
	signed short x;
	signed short y;
	signed char unk;

	/* Set pointer to enemy target */
	ds_writed(SPELLTARGET_E,
		(Bit32u)RealMake(datseg, host_readbs(get_spelluser() + 0x86) * 0x3e + 0xd0df));

	/* check if the enemy is dead */
	if (!enemy_dead(get_spelltarget_e())) {

		/* prepare message */
		sprintf((char*)Real2Host(ds_readd(DTP2)),
			(char*)get_dtp(0x3c),
			Real2Host(GUI_names_grammar(0x8000,
				host_readbs(get_spelltarget_e()), 1)));

		/* set ae costs */
		ds_writew(0xac0e, 0);
	} else {

		/* prepare message */
		sprintf((char*)Real2Host(ds_readd(DTP2)),
			(char*)get_dtp(0x40),
			Real2Host(GUI_names_grammar(0x8000,
				host_readbs(get_spelltarget_e()), 1)));

		enemy = Real2Host(FIG_get_ptr(host_readbs(get_spelltarget_e() + 0x26)));

		x = host_readbs(enemy + 3);
		y = host_readbs(enemy + 4);

		if (host_readbs(enemy + 0x13) != -1) {
			FIG_remove_from_list(ds_readbs(0xe35a + host_readbs(enemy + 0x13)), 0);
		}

		FIG_remove_from_list(host_readbs(get_spelltarget_e() + 0x26), 0);

		unk = host_readbs(get_spelltarget_e() + 0x28);

		fill_enemy_sheet(host_readbs(get_spelluser() + 0x86) - 10, 0x10, 0);

		FIG_load_enemy_sprites(get_spelltarget_e(), x, y);

		or_ptr_bs(get_spelltarget_e() + 0x32, 2);
		host_writebs(get_spelltarget_e() + 0x28, unk);
	}
}

/* Elemente / Elements */

/* Borlandified and identical */
void spell_elementare(void)
{
#if !defined(__BORLANDC__)
        D1_INFO("Zauberspruch \"Elementare\" ist nicht implementiert\n");
#endif
	ds_writew(0xac0e, -2);
}

/* Borlandified and identical */
void spell_nihilatio(void)
{
#if !defined(__BORLANDC__)
        D1_INFO("Zauberspruch \"Nihilatio\" ist nicht implementiert\n");
#endif
}

/* Borlandified and identical */
void spell_solidirid(void)
{
#if !defined(__BORLANDC__)
        D1_INFO("Zauberspruch \"Solidirid\" ist nicht implementiert\n");
#endif
}


/* Bewegung / Movement */

/* Borlandified and identical */
void spell_axxeleratus(void)
{
	signed short hero_pos;
	signed short slot;

	hero_pos = host_readbs(get_spelluser() + 0x86) - 1;

	/* Set pointer to hero target */
	ds_writed(SPELLTARGET,
		(Bit32u)((RealPt)ds_readd(HEROS) + hero_pos * 0x6da));

	if (!host_readbs(get_spelltarget() + 0xa0)) {

		/* AT-bonus for the current weapon */
		slot = get_free_mod_slot();
		set_mod_slot(slot, 90,
			get_spelltarget() + 0x68 + host_readbs(get_spelltarget() + 0x78),
			2, hero_pos);

		/* PA-bonus for the current weapon */
		slot = get_free_mod_slot();
		set_mod_slot(slot, 90,
			get_spelltarget() + 0x6f + host_readbs(get_spelltarget() + 0x78),
			2, hero_pos);

		/* axxeleratus active flag */
		slot = get_free_mod_slot();
		set_mod_slot(slot, 90,
			get_spelltarget() + 0xa0,
			1, hero_pos);

		/* prepare message */
		sprintf((char*)Real2Host(ds_readd(DTP2)),
			(char*)get_dtp(0x44),
			(char*)get_spelltarget() + 0x10);

	} else {
		/* axxeleratus already active */
		ds_writew(0xac0e, -2);
	}

}

/* Borlandified and identical */
void spell_foramen(void)
{
	signed short x;
	signed short y;

	if (ds_readws(0xd011) != 5) {
		return;
	}

	x = ds_readws(X_TARGET);
	y = ds_readws(Y_TARGET);

	switch (ds_readbs(DIRECTION)) {
		case 0:	y--; break;
		case 1:	x++; break;
		case 2: y++; break;
		case 3: x--; break;
	}

	and_ptr_bs(Real2Host(ds_readd(0xe488)) + y * 16 + x, 0x0f);
	or_ptr_bs(Real2Host(ds_readd(0xe488)) + y * 16 + x, 0x20);
	ds_writeb(0xbd4d, host_readbs(Real2Host(ds_readd(0xe488)) + y * 16 + x));

	DNG_open_door();

	add_hero_ap(get_spelluser(), 1);

	ds_writebs(0xbd3e, ds_writebs(0xbd3f, ds_writebs(0xbd40, -1)));
	ds_writew(0xd013, 1);
}

/* Borlandified and identical */
void spell_motoricus(void)
{
#if !defined(__BORLANDC__)
        D1_INFO("Zauberspruch \"Motoricus\" ist nicht implementiert\n");
#endif
}

/* Borlandified and identical */
void spell_spurlos(void)
{
#if !defined(__BORLANDC__)
        D1_INFO("Zauberspruch \"Spurlos\" ist nicht implementiert\n");
#endif
}

/* Borlandified and identical */
/* TODO: this is a stub as long as select_teleport_dest() is not implemented */
void spell_transversalis(void)
{
	if (!ds_readbs(DUNGEON_INDEX) && !ds_readbs(CURRENT_TOWN)) {

		/* prepare message */
		strcpy((char*)Real2Host(ds_readd(DTP2)),
			(char*)get_dtp(0x48));

	} else {
		/* set spell costs */
		ds_writew(0xac0e, select_teleport_dest());

		if (ds_readws(0xac0e) > 0) {
			/* check AE */
			if (host_readws(get_spelluser() + 0x64) < ds_readws(0xac0e)) {
				/* abort */
				ds_writew(0xac0e, -2);
			} else {
				/* play sound */
				play_voc(0x130);

				/* set new coordinates */
				ds_writew(X_TARGET, ds_readws(0x7de5));
				ds_writew(Y_TARGET, ds_readws(0x7de7));
			}
		}
	}

	ds_writew(0x7de5, ds_writew(0x7de7, -1));
}

/* Borlandified and identical */
void spell_ueber_eis(void)
{
#if !defined(__BORLANDC__)
        D1_INFO("Zauberspruch \"Ueber Eis\" ist nicht implementiert\n");
#endif
	ds_writew(0xac0e, -2);
}


/* Heilung / Healing */

/* Borlandified and identical */
void spell_balsam(void)
{

	signed short le;

	/* Set pointer to hero target */
	ds_writed(SPELLTARGET,
		(Bit32u)((RealPt)ds_readd(HEROS) + (host_readbs(get_spelluser() + 0x86) - 1) * 0x6da));

	ds_writew(0xac0e, 0);

	if ((ds_readw(0xe318) != 0) ||
		((host_readbs(get_spelluser() + 0x89) != 0) && ds_readws(IN_FIGHT) != 0))
	{
		/* automatic */
		le = (host_readws(get_spelltarget() + 0x5e) - host_readws(get_spelltarget() + 0x60)) / 2;
	} else {
		/* prepare message */
		sprintf((char*)Real2Host(ds_readd(DTP2)),
			(char*)get_dtp(0x4c),
			(char*)get_spelluser() + 0x10,
			(char*)get_spelltarget() + 0x10);

		/* ask question */
		le = GUI_input(Real2Host(ds_readd(DTP2)), 2);

		/* terminate string */
		host_writeb(Real2Host(ds_readd(DTP2)), 0);
	}

	if (le != -1) {

		if (le < 7) {
			/* costs are at least 7 */
			ds_writew(0xac0e, 7);
		} else {
			if (host_readws(get_spelltarget() + 0x5e) - host_readws(get_spelltarget() + 0x60) < le) {
				ds_writew(0xac0e, host_readws(get_spelltarget() + 0x5e) - host_readws(get_spelltarget() + 0x60));
				le = ds_readws(0xac0e);
			} else {
				ds_writew(0xac0e, le);
			}
		}

		if (host_readws(get_spelluser() + 0x64) < ds_readws(0xac0e)) {
			ds_writew(0xac0e, host_readws(get_spelluser() + 0x64));
			le = ds_readws(0xac0e);
		}

		add_hero_le(get_spelltarget(), le);
	}
}

/* Borlandified and identical */
void spell_hexenspeichel(void)
{
	signed short le;

	/* Set pointer to hero target */
	ds_writed(SPELLTARGET,
		(Bit32u)((RealPt)ds_readd(HEROS) + (host_readbs(get_spelluser() + 0x86) - 1) * 0x6da));

	/* set costs to 0 */
	ds_writew(0xac0e, 0);

	if (get_spelltarget() == get_spelluser()) {

		/* prepare message */
		sprintf((char*)Real2Host(ds_readd(DTP2)),
			(char*)get_dtp(0x50),
			(char*)get_spelluser() + 0x10);
		return;
	}

	/* prepare question */
	sprintf((char*)Real2Host(ds_readd(DTP2)),
		(char*)get_dtp(0x4c),
		(char*)get_spelluser() + 0x10,
		(char*)get_spelltarget() + 0x10);

	le = GUI_input(Real2Host(ds_readd(DTP2)), 2);

	host_writeb(Real2Host(ds_readd(DTP2)), 0);

	if (le != -1) {

		if (host_readws(get_spelltarget() + 0x5e) - host_readws(get_spelltarget() + 0x60) < le * 2) {
			ds_writew(0xac0e,
				(host_readws(get_spelltarget() + 0x5e) - host_readws(get_spelltarget() + 0x60)) * 2);
		} else {
			if (host_readws(get_spelluser() + 0x64 ) < ds_readws(0xac0e)) {
				ds_writew(0xac0e, host_readws(get_spelluser() + 0x64));
			} else {
				ds_writew(0xac0e, le * 2);
			}
		}

		add_hero_le(get_spelltarget(), ds_readws(0xac0e) / 2);
	}
}

/* Borlandified and identical */
void spell_klarum_purum(void)
{
	signed short poison;

	/* Set pointer to hero target */
	ds_writed(SPELLTARGET,
		(Bit32u)((RealPt)ds_readd(HEROS) + (host_readbs(get_spelluser() + 0x86) - 1) * 0x6da));

	poison = hero_is_poisoned(get_spelltarget());

	if (!poison) {

		/* prepare message */
		sprintf((char*)Real2Host(ds_readd(DTP2)),
			(char*)get_dtp(0x54),
			(char*)get_spelltarget() + 0x10);

		ds_writew(0xac0e, 0);
		return;
	}

	/* AE-cost = poison cost */
	ds_writew(0xac0e, ds_readws(0x2c70 + poison * 2));

	if (host_readws(get_spelluser() + 0x64) < ds_readws(0xac0e)) {
		/* not enough AE */
		ds_writew(0xac0e, -2);
	} else {
		/* reset poison */
		host_writeb(get_spelltarget() + poison * 5 + 0xd7, 0);
		host_writeb(get_spelltarget() + poison * 5 + 0xd6, 1);

		/* prepare message */
		sprintf((char*)Real2Host(ds_readd(DTP2)),
			(char*)get_dtp(0x58),
			(char*)get_spelltarget() + 0x10);
	}
}

/* Borlandified and identical */
void spell_ruhe_koerper(void)
{
	/* Set pointer to hero target */
	ds_writed(SPELLTARGET,
		(Bit32u)((RealPt)ds_readd(HEROS) + (host_readbs(get_spelluser() + 0x86) - 1) * 0x6da));

	/* set the flag */
	host_writeb(get_spelltarget() + 0x95, 1);

	/* prepare message */
	sprintf((char*)Real2Host(ds_readd(DTP2)),
		(char*)get_dtp(0xcc),
		(char*)get_spelltarget() + 0x10);
}

/* Borlandified and identical */
void spell_tiere_heilen(void)
{

#if !defined(__BORLANDC__)
        D1_INFO("Zauberspruch \"Tiere heilen\" ist nicht implementiert und dient nur zum AE ausgeben.\n");
#endif
	signed short ae;

	/* set AE costs to 0 */
	ds_writew(0xac0e, 0);

	/* prepare message */
	sprintf((char*)Real2Host(ds_readd(DTP2)),
		(char*)get_dtp(0x5c),
		(char*)get_spelluser() + 0x10);

	/* ask how many AE should be spent */
	ae = GUI_input(Real2Host(ds_readd(DTP2)), 2);

	/* terminate string */
	host_writebs(Real2Host(ds_readd(DTP2)), 0);

	if (ae != -1) {
		/* set AE costs to AE */
		ds_writew(0xac0e, ae);
	}
}

#if !defined(__BORLANDC__)
}
#endif
