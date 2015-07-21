/**
 *	Rewrite of DSA1 v3.02_de functions of seg092 (treasures)
 *	Functions rewritten: 19/22
 */

#include <stdio.h>
#include <string.h>

#include "v302de.h"

#include "seg002.h"
#include "seg007.h"
#include "seg047.h"
#include "seg076.h"
#include "seg092.h"
#include "seg096.h"
#include "seg097.h"
#include "seg105.h"

#if !defined(__BORLANDC__)
namespace M302de {
#endif

/* Borlandified and identical */
void chest_protected_normal(void)
{
	/* a protected chest */
	print_msg_with_first_hero(get_ltx(0x818));

	/* the first hero gets wounded with 1W6 */
	sub_hero_le(Real2Host(get_first_hero_available_in_group()), random_schick(6));
}

/* Borlandified and identical */
void chest_closed(void)
{
	/* a protected chest */
	print_msg_with_first_hero(get_ltx(0x81c));
}

/* Borlandified and identical */
void chest_protected_heavy(void)
{
	/* a protected chest */
	print_msg_with_first_hero(get_ltx(0x820));

	/* the first hero gets wounded with 2W6 */
	sub_hero_le(Real2Host(get_first_hero_available_in_group()), dice_roll(2, 6, 0));
}

/* Borlandified and identical */
void chest_poisoned1(void)
{
	/* a protected chest */
	print_msg_with_first_hero(get_ltx(0x820));

	/* the first hero gets wounded with 2W6 */
	sub_hero_le(Real2Host((RealPt)(ds_writed(0x3e20, (Bit32u)get_first_hero_available_in_group()))), dice_roll(2, 6, 0));

	/* and gets poisoned */
	hero_gets_poisoned(Real2Host(ds_readd(0x3e20)), 1);
}

/* Borlandified and identical */
void chest_poisoned2(void)
{
	/* a protected chest */
	print_msg_with_first_hero(get_ltx(0x820));

	/* the first hero gets wounded with 2W6 */
	sub_hero_le(Real2Host((RealPt)(ds_writed(0x3e20, (Bit32u)get_first_hero_available_in_group()))), dice_roll(2, 6, 0));

	/* and gets poisoned */
	hero_gets_poisoned(Real2Host(ds_readd(0x3e20)), 2);
}

/* Borlandified and identical */
void chest_poisoned3(void)
{
	/* a protected chest */
	print_msg_with_first_hero(get_ltx(0x820));

	/* the first hero gets wounded with 1W6 */
	sub_hero_le(Real2Host((RealPt)(ds_writed(0x3e20, (Bit32u)get_first_hero_available_in_group()))), dice_roll(1, 6, 0));

	/* and gets poisoned */
	hero_gets_poisoned(Real2Host(ds_readd(0x3e20)), 8);
}

/* Borlandified and identical */
void chest_protected_brutal(void)
{
	/* a protected chest */
	print_msg_with_first_hero(get_ltx(0x820));

	/* the first hero gets wounded with 4W6 */
	sub_hero_le(Real2Host(get_first_hero_available_in_group()), dice_roll(4, 6, 0));
}

/* Borlandified and identical */
void chest_stoned(void)
{
	/* a protected chest */
	print_msg_with_first_hero(get_ltx(0xc20));

	/* save pointer of the first hero */
	ds_writed(0x3e20, (Bit32u)get_first_hero_available_in_group());

	/* and make him stoned */
	or_ptr_bs(Real2Host(ds_readd(0x3e20)) + 0xaa, 0x04);
}

/* Borlandified and identical */
void chest_ignifax_normal(void)
{
	/* a protected chest */
	print_msg_with_first_hero(get_ltx(0xc24));

	/* the first hero gets wounded with 2W6 */
	sub_hero_le(Real2Host(get_first_hero_available_in_group()), dice_roll(2, 6, 0));
}

/* Borlandified and identical */
void chest_ignifax_brutal(void)
{
	/* a protected chest */
	print_msg_with_first_hero(get_ltx(0xc24));

	/* the first hero gets wounded with 4W6 */
	sub_hero_le(Real2Host(get_first_hero_available_in_group()), dice_roll(4, 6, 0));
}

/* Borlandified and identical */
void chest_ignifax_heavy(void)
{
	/* a protected chest */
	print_msg_with_first_hero(get_ltx(0xc24));

	/* the first hero gets wounded with 3W6 */
	sub_hero_le(Real2Host(get_first_hero_available_in_group()), dice_roll(3, 6, 0));
}

/* Borlandified and identical */
void chest_crossbow_bolts(void)
{
	/* a protected chest */
	print_msg_with_first_hero(get_ltx(0xc50));

	/* the first hero gets wounded with 2W6+6 */
	sub_hero_le(Real2Host(get_first_hero_available_in_group()), dice_roll(2, 6, 6));
}

/* Borlandified and identical */
void chest_cursed(void)
{
	signed short i;
	Bit8u *hero;

	/* get the group leader */
	hero = Real2Host(get_first_hero_available_in_group());

	if (!hero_transformed(hero)) {

		/* set transformed flag */
		or_ptr_bs(hero + 0xab, 0x40);

		/* decrement each good attribute */
		for (i = 0; i <= 6; i++) {
			dec_ptr_bs(hero + 0x35 + 3 * i);
		}

		/* print a message */
		print_msg_with_first_hero(get_ltx(0x8cc));
	}
}

/* Borlandified and identical */
void chest_fulminictus(void)
{
	/* a protected chest */
	print_msg_with_first_hero(get_ltx(0x8d0));

	/* the first hero gets wounded with 4W6+5 */
	sub_hero_le(Real2Host(get_first_hero_available_in_group()), dice_roll(4, 6, 5));
}


/**
 * \brief loot a chest, with standard text messages
 * \param chest			pointer to the chest
 */
/* Borlandified and identical */
void loot_simple_chest(Bit8u *chest)
{
	signed short item_nr;
	signed short item_id;
	signed short tw_bak;
	char names[20][30];

	tw_bak = ds_readws(TEXTBOX_WIDTH);
	ds_writews(TEXTBOX_WIDTH, 7);

	host_writeb(chest + 0x2, 0);

	do {

		item_nr = 0;

		/* write the names of the items in the chest into names[] */
		while((item_id = host_readb(Real2Host(host_readd(chest + 0x0b)) + item_nr)) != (signed short)0x00ff) {


			strcpy(names[item_nr++],
				(char*)Real2Host(GUI_name_plural(0, (Bit8u*)get_itemname(item_id))));
		}

		if (item_nr == 0) {
			/* this chest is empty */
			GUI_output(get_ltx(0x828));
			break;
		} else {

			/* show radio menu with item names */
			item_nr = GUI_radio(get_ltx(0x824), item_nr,
						names[0], names[1], names[2], names[3],
						names[4], names[5], names[6], names[7],
						names[8], names[9], names[10], names[11],
						names[12], names[13], names[14], names[15],
						names[16], names[17], names[18], names[19]) - 1;

			if (item_nr != -2) {
				/* if not pressed ESC */
				if (get_item(host_readb(Real2Host(host_readd(chest + 0xb)) + item_nr), 1, 1))
				{
					/* got the item in inventory => remove from chest */
					delete_chest_item(chest, item_nr);
				} else {
					/* group has not taken the item */
					item_nr = -2;
				}
			}
		}

	} while (item_nr != -2);

	ds_writews(TEXTBOX_WIDTH, tw_bak);
}

/**
 * \brief deletes an item from a chest
 * \param chest		pointer to the chest
 * \param item_nr	the number of the item to be deleted
 */
/* Borlandified and identical */
void delete_chest_item(Bit8u *chest, signed short item_nr)
{
	signed char tmp;

	do {
#if defined(__BORLANDC__)
		Real2Host(host_readd(chest + 0xb))[item_nr] = tmp = Real2Host(host_readd(chest + 0xb))[item_nr + 1];
#else
		host_writeb(Real2Host(host_readd(chest + 0xb)) + item_nr,
			tmp = host_readbs(Real2Host(host_readd(chest + 0xb)) + item_nr + 1));
#endif
		item_nr++;

	} while (tmp != -1);

}

/**
 * \brief loot a chest, with different text messages
 * \param chest			pointer to the chest
 * \param text_non_empty	shown text if chest is not empty
 * \param text_empty		shown text if chest is empty
 */
/* Borlandified and identical */
void loot_chest(Bit8u *chest, Bit8u *text_non_empty, Bit8u *text_empty)
{
	signed short item_nr;
	signed short item_id;
	signed short tw_bak;
	char names[20][20];

	host_writeb(chest + 0x2, 0);

	tw_bak = ds_readws(TEXTBOX_WIDTH);
	ds_writews(TEXTBOX_WIDTH, 7);

	do {

		item_nr = 0;

		/* write the names of the items in the chest into names[] */
		while((item_id = host_readb(Real2Host(host_readd(chest + 0x0b)) + item_nr)) != (signed short)0x00ff) {


			strcpy(names[item_nr++],
				(char*)Real2Host(GUI_name_plural(0, (Bit8u*)get_itemname(item_id))));
		}

		if (item_nr == 0) {
			/* this chest is empty */
			GUI_output(text_empty);
			break;
		} else {

			/* show radio menu with item names */
			item_nr = GUI_radio(text_non_empty, item_nr,
						names[0], names[1], names[2], names[3],
						names[4], names[5], names[6], names[7],
						names[8], names[9], names[10], names[11],
						names[12], names[13], names[14], names[15],
						names[16], names[17], names[18], names[19]) - 1;

			if (item_nr != -2) {
				/* if not pressed ESC */
				if (get_item(host_readb(Real2Host(host_readd(chest + 0xb)) + item_nr), 1, 1))
				{
					/* got the item in inventory => remove from chest */
					delete_chest_item(chest, item_nr);
				} else {
					/* group has not taken the item */
					item_nr = -2;
				}
			}
		}

	} while (item_nr != -2);

	ds_writews(TEXTBOX_WIDTH, tw_bak);
}

/**
 * \brief	check if a hero has lockpicks
 * \param hero	pointer to the hero
 * \return	-1 = no lockpicks, -2 = all lockpicks are broken, else position of the lockpicks
 */
/* Borlandified and identical */
signed short hero_has_lockpicks(Bit8u *hero)
{
	signed short retval = -1;
	signed short i;

	/* in each knapsack slot... */
	for (i = 0; i < 23; i++) {

		/* ... check for lockpicks ... */
		if (host_readws(hero + 0x196 + 14 * i) == 35) {

			/* ... which are not broken */
			if (!ks_broken(hero + 0x196 + 14 * i)) {
				return i;
			} else {
				retval = -2;
			}
		}
	}

	return retval;
}

void (*func)(RealPt);

struct chest {
	signed short id;
	signed char mod;
	void (*func1)(RealPt);
	void (*func2)(void);
	void (*func3)(RealPt);
	unsigned short ap;
	unsigned short money;
	signed short food;
};

/* Borlandified and identical */
void seg092_06b4(signed short a1)
{
#if !defined(__BORLANDC__)
	DUMMY_WARNING();
#else
	signed short x;
	signed short y;
	signed short chest_id;
	signed short l4;
	RealPt chest_ptr;
	Bit8u *ptr;

	chest_ptr = (RealPt)ds_readd(0x9d84 + 4 * ds_readbs(DUNGEON_INDEX));
	ptr = p_datseg + 0xbd95;
	ds_writew(0xe4a0, 0);
	x = ds_readws(X_TARGET);
	y = ds_readws(Y_TARGET);

	if (a1 != 0) {
		switch(ds_readbs(DIRECTION)) {
			case 0: y--; break;
			case 1: x++; break;
			case 2: y++; break;
			case 3: x--; break;
		}
	}

	l4 = host_readb(ptr + 16 * y + x) & 2;
	chest_id = 4096 * ds_readbs(DUNGEON_LEVEL) + 256 * x + y;

	play_voc(301);

	do {

		if (host_readws(Real2Host(chest_ptr)) == chest_id) {

			if (l4 != 0 && host_readd(Real2Host(chest_ptr) + 11)) {
				((void (*)(RealPt))((RealPt)host_readd(Real2Host(chest_ptr) + 11)))(chest_ptr);
			} else if (host_readbs(Real2Host(chest_ptr) + 2) != 0) {
				((void (*)(RealPt))((RealPt)host_readd(Real2Host(chest_ptr) + 3)))(chest_ptr);
			} else if ((RealPt)host_readd(Real2Host(chest_ptr) + 3)) {
				((void (*)(RealPt))((RealPt)host_readd(Real2Host(chest_ptr) + 3)))(chest_ptr);
			} else if ((RealPt)host_readd(Real2Host(chest_ptr) + 11)) {
				((void (*)(RealPt))((RealPt)host_readd(Real2Host(chest_ptr) + 11)))(chest_ptr);
				ds_writew(0xe4a0, 1);
			} else if (host_readws(Real2Host(chest_ptr) + 17) != 0) {
				ds_writew(0xe4a0, 1);
			}

			break;
		}

	} while (host_readws(Real2Host(((struct chest*)chest_ptr)++)) != -1);

	if (l4 == 0 && ds_readws(0xe4a0) != 0) {

		if (host_readws(Real2Host(chest_ptr) + 15) != 0) {
			/* There are AP in the chest */
			add_hero_ap_all(host_readws(Real2Host(chest_ptr) + 15));
		}

		if (host_readws(Real2Host(chest_ptr) + 17) != 0) {

			/* There is money in the chest */
			make_valuta_str((char*)Real2Host(ds_readd(0xd2eb)), host_readw(Real2Host(chest_ptr) + 17));
			sprintf((char*)Real2Host(ds_readd(DTP2)),
				(char*)get_ltx(0xc64),
				(char*)Real2Host(ds_readd(0xd2eb)));
			GUI_output(Real2Host(ds_readd(DTP2)));

			set_party_money(get_party_money() + host_readw(Real2Host(chest_ptr) + 17));
		}

		if (host_readws(Real2Host(chest_ptr) + 19) != 0) {
			/* There are FOOD PACKAGES in the chest */
			get_item(45, 1, host_readws(Real2Host(chest_ptr) + 19));
		}
	}
#endif

}

#if !defined(__BORLANDC__)
}
#endif
