/*
 *	Rewrite of DSA1 v3.02_de functions of seg041 (fight)
 *	Functions rewritten: 9/9 (complete)
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "v302de.h"

#include "seg000.h"
#include "seg002.h"
#include "seg007.h"
#include "seg038.h"
#include "seg039.h"
#include "seg041.h"
#include "seg097.h"
#include "seg103.h"
#include "seg105.h"
#include "seg106.h"

#if !defined(__BORLANDC__)
namespace M302de {
#endif

#if 0
/* DS:0x26ad */
static unsigned short msg_counter;
#endif

/* Borlandified and identical */
/**
 * range_attack_ammo()	- check if a range attack can be done
 * @hero:	the hero who attacks
 * @arg:	0 = drop one unit, 1 = just check, 2 = check with output
 *
 * Returns: 0 = no ammo / 1 = have ammo
*/
signed short seg041_0020(Bit8u *hero, signed short arg)
{
	signed short right_hand;
	signed short left_hand;
	signed short retval;

	retval = 0;

	/* read the item ids from the hands */
	right_hand = host_readws(hero + 0x1c0);
	left_hand = host_readws(hero + 0x1ce);

	switch (right_hand) {
	case 0x5:	/* SPEER	/ spear */
	case 0x10:	/* WURFBEIL	/ francesca */
	case 0x11:	/* WURFSTERN	/ throwing star */
	case 0x21:	/* WURFAXT	/ throwing axe */
	case 0x62:	/* WURFMESSER	/ throwing dagger */
	case 0x89:	/* SCHNEIDEZAHN	/ cutting tooth */
	case 0xda:
	{
		if (!arg) {

			if (ds_readws(0x5f12) < 30) {
				ds_writew(0xe31a + ds_readw(0x5f12) * 2, right_hand);
				inc_ds_ws(0x5f12);
			}

			drop_item(hero, 3, 1);

			if (left_hand == right_hand) {
				move_item(3, 4, hero);
			}

		}
		retval = 1;
		break;
	}
	case 0x9:	/* KURZBOGEN	/ SHORT BOW */
	case 0x13:	/* LANGBOGEN	/ LONG BOW */
	{
		/* PFEIL / ARROWS */
		if (left_hand != 10) {
			if (arg != 2) {

				sprintf((char*)Real2Host(ds_readd(DTP2)),
					(char*)get_dtp(0x20),
					(char*)hero + 0x10);

				GUI_output(Real2Host(ds_readd(DTP2)));
			}

		} else {
			if (!arg) {
				drop_item(hero, 4, 1);
			}
			retval = 1;
		}
		break;
	}
	case 0xc:	/* ARMBRUST	/ CROSSBOW */
	{
		/* BOLZEN / BOLT */
		if (left_hand != 13) {
			if (arg != 2) {

				sprintf((char*)Real2Host(ds_readd(DTP2)),
					(char*)get_dtp(0x24),
					(char*)hero + 0x10);

				GUI_output(Real2Host(ds_readd(DTP2)));
			}
		} else {
			if (!arg) {
				drop_item(hero, 4, 1);
			}
			retval = 1;
		}
		break;
	}
	case 0x78:	/* SCHLEUDER	/ SLING */
	{
		if (left_hand != 999) {
			if (arg != 2) {

				sprintf((char*)Real2Host(ds_readd(DTP2)),
					(char*)get_dtp(0x28),
					(char*)hero + 0x10);

				GUI_output(Real2Host(ds_readd(DTP2)));
			}
		} else {
			if (!arg) {
				drop_item(hero, 4, 1);
			}
			retval = 1;
		}
		break;
	}
	}
	return retval;
}

/* Borlandified and identical */
void FIG_output(Bit8u *str)
{
	if (*str != 0) {
		GUI_output(str);
	}
}

/**
 *	FIG_clear_msgs() - clears the fight messages buffer
*/
/* Borlandified and identical */
void FIG_clear_msgs(void)
{
	memset(p_datseg + 0xd333, 0 , 20);
	ds_writew(0x26ad, 0);
}

/* Borlandified and identical */
void FIG_add_msg(unsigned short f_action, unsigned short damage)
{
	ds_writew(0xd333 + 4 * ds_readws(0x26ad), f_action);
	ds_writew(0xd333 + 2 + 4 * ds_readws(0x26ad) , damage);
	if (ds_readws(0x26ad) < 4)
		inc_ds_ws(0x26ad);
}

/**
 * FIG_damage_enemy() -	damages an enemy
 * @enemy:	pointer to the enemy
 * @damage:	the damage
 * @flag:	unknown
 *
 * This function has some tweaks, dependent on the fight number.
 */
/* Borlandified and identical */
void FIG_damage_enemy(Bit8u *enemy, Bit16s damage, signed short flag)
{
	signed short i;

	/* subtract the damage from the enemies LE */
	sub_ptr_ws(enemy + 0x13, damage);

	/* are the enemies LE lower than 0 */
	if ((signed short)host_readw(enemy + 0x13) <= 0) {
		/* set a flag, maybe dead */
		or_ptr_bs(enemy + 0x31, 1);
		/* set LE to 0 */
		host_writew(enemy + 0x13, 0);

		if (ds_readw(CURRENT_FIG_NR) == 0x5e && host_readb(enemy) == 0x38) {
			/* slaying a special cultist */
			/* set a flag in the status area */
			ds_writeb(0x40f9, 0);

		} else if ((ds_readw(CURRENT_FIG_NR) == 0xc0) &&
				(host_readb(enemy) == 0x48) &&
				!ds_readbs(0x5f30))
		{
			/* slaying the orc champion, ends the fight */
				ds_writew(IN_FIGHT, 0);

		} else if (ds_readw(CURRENT_FIG_NR) == 0xb4 && host_readb(enemy) == 0x46) {

			/* slaying Gorah make everything flee than Heshtot*/
			for (i = 0; i < 20; i++) {
#if !defined(__BORLANDC__)
				if (ds_readb(ENEMY_SHEETS + 1 + i * 62) != 0x1a)
					or_ds_bs((ENEMY_SHEETS + 0x32) + i * 62, 4);
#else
				if ( ((struct enemy_sheets*)(Real2Host(RealMake(datseg, ENEMY_SHEETS))))[i].gfx_id != 0x1a)
					((struct enemy_sheets*)(Real2Host(RealMake(datseg, ENEMY_SHEETS))))[i].flags2 |= 4;
#endif
			}
		}
	}

	if (!flag)
		and_ptr_bs(enemy + 0x32, 0xfd);
}

/* Borlandified and identical */
signed short FIG_get_hero_melee_attack_damage(Bit8u* hero, Bit8u* target, signed short attack_hero)
{
	Bit8u* item_p_rh;
	Bit8u* p2;
	Bit8u* p3;
	signed short target_size;
	signed short right_hand;
	signed short v3;
	signed short v4;
	signed short x_hero;
	signed short y_hero;
	signed short x_target;
	signed short y_target;
	signed short v9;
	signed char enemy_gfx_id;
	Bit8u* enemy_p;
	signed short v11;

	register signed short damage;
	register signed short l_di;

	l_di = 0;

	if (attack_hero == 0) {
		enemy_p = target;
	}

	right_hand = host_readw(hero + 0x1c0);

	item_p_rh = get_itemsdat(right_hand);

	v11 = weapon_check(hero);

	if (v11 == -1) {
		v11 = seg039_0023(hero);
	}

	if (v11 != -1) {

		p2 = p_datseg + 0x6b0 + host_readbs(item_p_rh + 4) * 7;

		damage = dice_roll(host_readbs(p2), 6, host_readbs(p2 + 1));

		if (host_readbs(p2 + 4) != -1) {
			/* 0x391 - 0x4da */
			v9 = get_hero_index(hero);

			FIG_search_obj_on_cb(v9 + 1, &x_hero, &y_hero);
			FIG_search_obj_on_cb(host_readbs(hero + 0x86), &x_target, &y_target);

			v3 = seg039_0000(x_hero, y_hero, x_target, y_target);

			if (v3 <= 2) {
				v4 = 0;
			} else if (v3 <= 4) {
				v4 = 1;
			} else if (v3 <= 6) {
				v4 = 2;
			} else if (v3 <= 9) {
				v4 = 3;
			} else if (v3 <= 15) {
				v4 = 4;
			} else if (v3 <= 20) {
				v4 = 5;
			} else {
				v4 = 6;
			}

			p3 = p_datseg + 0x668 + host_readbs(p2 + 4) * 8;

			if (attack_hero != 0) {
				if (host_readbs(target + 0x21) == 6) {
					/* ZWERG / DWARF */
					target_size = 2;
				} else {
					target_size = 3;
				}
			} else {
					/* size of the enemy */
				target_size = host_readbs(target + 0x34);
			}

			l_di = (test_skill(hero,
					(host_readbs(item_p_rh + 3) == 8 ? 8 : 7),
					host_readbs(p3 + 7) + 2 * v4 - 2 * target_size) > 0)
				? ds_readbs(0x668 + 8 * host_readbs(p2 + 4) + v4)
				: -damage;

			if (l_di != 0) {
				damage += l_di;
			}


		} else {
			/* 0x4dc - 0x502 */
			l_di = host_readbs(hero + 0x47) + host_readbs(hero + 0x48) - host_readbs(p2 + 2);
			if (l_di > 0) {
				damage += l_di;
			}
		}
	} else {
		damage = random_schick(6);
	}

	if (attack_hero == 0) {
		/* 0x517 - 0x600 */
		enemy_gfx_id = host_readbs(enemy_p + 1);

		if ((right_hand == 0xac) && (enemy_gfx_id == 0x1c || enemy_gfx_id == 0x22)) {
			damage++;
		} else {
			if (right_hand == 0xc1) {
				/* KUKRISDOLCH */

				/* Interesting */
				damage = 1000;

				/* drop the KUKRISDOLCH and equip a normal DOLCH / DAGGER */
				drop_item(hero, 3, 1);
				give_hero_new_item(hero, 14, 1 ,1);
				move_item(3, get_item_pos(hero, 14), hero);
			} else if (right_hand == 0xc8) {
				/* KUKRISMENGBILLAR */

				/* Interesting */
				damage = 1000;

				/* drop the KUKRISDOLCH and equip a normal DOLCH / DAGGER */
				drop_item(hero, 3, 1);
				give_hero_new_item(hero, 109, 1 ,1);
				move_item(3, get_item_pos(hero, 109), hero);
			} else if ((right_hand == 0xd6) && (enemy_gfx_id == 0x1c)) {
				/* SILBERSTREITKOLBEN */
				damage += 4;
			} else if ((right_hand == 0xb5) && (enemy_gfx_id == 0x18)) {
				/* DAS SCHWERT GRIMRING */
				damage += 5;
			}
		}
	}

	damage += host_readbs(hero + 0x98);

	if (damage > 0) {
		/* 0x612 - 0x6c4 */

		if (ks_poison1(hero + 0x1c0)) {
			damage += dice_roll(1, 6, 2);
			and_ptr_bs(hero + 0x1c4, 0xdf);
		}

		if (ks_poison2(hero + 0x1c0)) {
			damage += dice_roll(1, 20, 5);
			and_ptr_bs(hero + 0x1c4, 0xbf);
		}

		if (host_readbs(hero + 0x1c0 + 9) != 0) {

			if (host_readbs(hero + 0x1c0 + 9) == 3) {
				or_ptr_bs(enemy_p + 0x32, 0x04);
				and_ptr_bs(enemy_p + 0x32, 0xfd);
			} else {

				damage += 10 * ds_readws(0x2c70 + 2 * host_readbs(hero + 0x1c0 + 9));
			}

			dec_ptr_bs(hero + 0x1c0 + 10);

			if (!host_readbs(hero + 0x1c0 + 10)) {
				host_writebs(hero + 0x1c0 + 9, 0);
			}
		}
	}

	if (host_readbs(hero + 0x97) != 0) {
		damage *= 2;
	}

	if ( (ds_readbs(0x3dda) != 0) &&
		(host_readbs(hero + 0x21) == 6) &&
		(attack_hero == 0) &&
		(host_readbs(enemy_p + 1) == 0x18))
	{
		damage++;
	}

	if (attack_hero == 0) {
		damage -= host_readbs(enemy_p + 2);

		if (enemy_stoned(enemy_p)) {
			damage = 0;
		}

		if ((host_readbs(enemy_p + 0x24) != 0) && !ks_magic_hidden(hero + 0x1c0)) {
			damage = 0;
		}

		if (host_readws(enemy_p + 0x13) < damage) {
			damage = host_readws(enemy_p + 0x13) + 1;
		}
	} else {
		damage -= host_readbs(target + 0x30);

		if (hero_stoned(target)) {
			damage = 0;
		}

		if (host_readws(target + 0x60) < damage) {
			damage = host_readws(target + 0x60) + 1;
		}
	}

	return damage;
}

/**
 *	FIG_get_enemy_attack_damage() - calculates attack damage from an enemy
 *	@attacker:	the enemy which attacks
 *	@attacked:	the enemy/hero which gets attacked
 *	@is_enemy:	1 = if attacked is an enemy / 0 = attacked is a hero
 *
 */

signed short FIG_get_enemy_attack_damage(Bit8u *attacker, Bit8u *attacked, signed short is_enemy)
{
	Bit8u *hero;
	signed short pos;
	signed short damage;
	unsigned short dice;

	dice = host_readw(attacker + 0x1e);

	if (host_readw(attacker + 0x20) != 0 && random_schick(100) < 50)
		dice = host_readw(attacker + 0x20);

	damage = dice_template(dice);

	if (!is_enemy) {
		/* the attacked is a hero */
		hero = attacked;

		/* subtract RS */
		damage -= host_readb(hero + 0x30);

		/* armour bonus against skelettons an zombies */
		if (host_readb(hero + 0x1b2) == 0xc5 && (
			host_readb(attacker + 1) == 0x22 ||
			host_readb(attacker + 1) == 0x1c))
				damage -= 3;

		/* get position of Totenkopfguertel/Skullbelt */
		pos = get_item_pos(hero, 0xb6);

		if (pos != -1 && (host_readb(attacker + 1) == 0x22 ||
			host_readb(attacker + 1) == 0x1c)) {

			/* no damage for the hero who wears it */
			damage = 0;

			/* 55 chance to loose this item on use */
			if (random_schick(100) < 5) {
				drop_item(hero, pos, 1);
				GUI_output(get_dtp(0x2c));
			}
		}

		/* no damage if the hero is stoned */
		if (hero_stoned(hero))
			damage = 0;
	} else {
		/* the attacked is an enemy */

		/* subtract RS */
		damage -= host_readb(attacked + 0x2);

		/* check unknown flag, maybe stoned */
		if (((host_readb(attacked + 0x31) >> 2) & 1) != 0)
			damage = 0;

		/* check if the attacked is immune
		 * against non-magicial weapons */
		if (host_readb(attacked + 0x24) != 0)
			damage = 0;
	}

	/* damage bonus */
	damage += host_readbs(attacker + 0x2e);

	/* half damage */
	if (host_readb(attacker + 0x30) != 0)
		damage = abs(damage) / 2;

	return damage;
}

void seg041_8c8(void)
{
	unsigned short i;

	for (i = 0; i < 8; i++)
		memset(p_datseg + 0xd8ce + i * 0xf3, 0xffff, 0xf3);

//		That would be better
//		memset(p_datseg + 0xd8ce, 0xffff, 0xf3 * 8);
}

signed short weapon_check(Bit8u *hero)
{
	Bit8u *item_p;
	unsigned short item;

	/* get the number of the equipped weapon */
	item = host_readw(hero + 0x1c0);

	item_p = get_itemsdat(item);

	/* check if its a weapon */
	if (((host_readw(item_p + 2) >> 1) & 1) == 0)
		return -1;

	if (host_readb(hero + 0x1c4) & 1)
		return -1;

	/* this test is always true */
	if ((host_readw(item_p + 2) >> 1) & 1) {
		unsigned char pos = host_readb(item_p + 3);

		if (pos == 7 || pos == 8)
			return -1;

		/* At the legs, and no staffs */
		if (pos == 5 && item != 133 && item != 69)
			return -1;
	}

	if (is_in_word_array(item, (signed short*)(p_datseg +  0x615c)))
		return 1;

	if (is_in_word_array(item, (signed short*)(p_datseg + 0x616e)))
		return 0;

	return 2;
}

#if !defined(__BORLANDC__)
}
#endif
