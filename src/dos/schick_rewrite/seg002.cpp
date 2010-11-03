/*
	Rewrite of DSA1 v3.02_de functions of seg002 (misc)
	Functions rewritten: 23/136
*/

#include "mem.h"

#include "../schick.h"

#include "seg002.h"
#include "seg004.h"
#include "seg007.h"
#include "seg008.h"


unsigned int get_readlength2(signed short index) {
	return index == -1 ? 0 : real_readd(datseg, 0xbce7);
}

short cmp_smth(unsigned short v1, unsigned short v2,
				unsigned short v3, unsigned short v4) {
	unsigned short d;
	unsigned short b;

	d = real_readw(datseg, 0x299c);
	b = real_readw(datseg, 0x299e);

	if ((d < v1) || (d > v3) || (b < v2) || (b > v4))
		return 0;

	return 1;
}

unsigned short get_current_season() {
	/* Check Winter */
	if (is_in_byte_array(real_readb(datseg, 0x2dc1), MemBase + PhysMake(datseg, 0x463e)))
		return 0;
	/* Check Summer */
	if (is_in_byte_array(real_readb(datseg, 0x2dc1), MemBase + PhysMake(datseg, 0x4642)))
		return 2;
	/* Check Spring */
	if (is_in_byte_array(real_readb(datseg, 0x2dc1), MemBase + PhysMake(datseg, 0x463a)))
		return 1;

	return 3;
}

void update_mouse_cursor() {
	update_mouse_cursor1();
}
void refresh_screen_size() {
	refresh_screen_size1();
}

void update_mouse_cursor1() {
	if (ds_readw(0x2998) == 0) {
		if  (ds_readw(0x299a) == 0) {
			ds_writew(0x2998, 1);
			restore_mouse_bg();
			ds_writew(0x2998, 0);
		}
		ds_writew(0x299a, ds_readw(0x299a) - 1);
	}
}

void refresh_screen_size1() {

	/* check lock */
	if (ds_readw(0x2998))
		return;

	ds_writew(0x299a, ds_readw(0x299a) + 1);

	if (ds_readw(0x299a))
		return;

	/* get lock */
	ds_writew(0x2998, 1);

	if (ds_readw(0x299c) < ds_readw(0x29a6))
		ds_writew(0x299c, ds_readw(0x29a6));

	if (ds_readw(0x299c) > 315)
		ds_writew(0x299c, 315);

	if (ds_readw(0x299e) < ds_readw(0x29a8))
		ds_writew(0x299e, ds_readw(0x29a8));

	if (ds_readw(0x299e > 195))
		ds_writew(0x299e, 195);

	save_mouse_bg();
	ds_writew(0x29a0, ds_readw(0x299c));
	ds_writew(0x29a2, ds_readw(0x299e));
	ds_writew(0x29aa, ds_readw(0x29a6));
	ds_writew(0x29ac, ds_readw(0x29a8));
	draw_mouse_cursor();

	/* put lock */
	ds_writew(0x2998, 0);
}

void set_and_spin_lock() {
	real_writew(datseg, 0xbcd6, 1);
	while (real_readw(datseg, 0xbcd6)) {};
}

unsigned int swap_u32(unsigned int v) {
	return ((v >> 24) & 0xff) | ((v >> 16) & 0xff) << 8 |
		((v >> 8) & 0xff) << 16 | (v&0xff) << 24;

};

void set_to_ff() {
	unsigned i;

	for (i = 0; i < 9; i++)
		real_writeb(datseg, 0xbd38+i, 0xff);
}

unsigned short mod_timer(short val) {
	if (real_readd(datseg, 0x2dbb) % val == 0)
		return 1;

	return 0;
}

short can_merge_group() {
	short retval = -1;
	char cur_heroes;
	short i;

	cur_heroes = real_readb(datseg, (short)real_readb(datseg, 0x2d35) + 0x2d36);
	if (cur_heroes == real_readb(datseg, 0x2d3c))
		return retval;

	for (i = 0; i < 6; i++) {
		if (i == (char)real_readb(datseg, 0x2d35))
			continue;
		if (0 == real_readb(datseg, i + 0x2d36))
			continue;
		/* check XTarget */
		if (real_readw(datseg, i * 2 + 0x2d48) != real_readw(datseg, 0x2d44))
			continue;
		/* check YTarget */
		if (real_readw(datseg, i * 2 + 0x2d54) != real_readw(datseg, 0x2d46))
			continue;
		/* check Location */
		if (real_readb(datseg, 0x2d61) != real_readb(datseg, 0x2d60))
			continue;
		/* check currentTown */
		if (real_readb(datseg, 0x2d68) != real_readb(datseg, 0x2d67))
			continue;
		/* check DungeonIndex */
		if (real_readb(datseg, 0x2d6f) != real_readb(datseg, 0x2d6e))
			continue;
		/* check DungeonLevel */
		if (real_readb(datseg, 0x2d76) != real_readb(datseg, 0x2d75))
			continue;

		retval = i;
	}

	return retval;
}

unsigned short div16(unsigned char val) {
	return val >> 4;
}

/**
	check_hero - returns true if heros not dead, stoned or unconscious
	should be static
*/
unsigned short check_hero(Bit8u *hero) {

	/* Check if hero has a class */
	if (host_readb(hero+0x21) == 0)
		return 0;
	/* Check if sleeping */
	if ((host_readb(hero+0xaa) >> 1) & 1)
		return 0;
	/* Check if dead */
	if (host_readb(hero+0xaa) & 1 )
		return 0;
	/* Check if stoned */
	if ((host_readb(hero+0xaa) >> 2) & 1)
		return 0;
	/* Check if unconscious */
	if ((host_readb(hero+0xaa) >> 6) & 1)
		return 0;
	/* Check if ??? */
	if ((host_readb(hero+0xaa) >> 5) & 1)
		return 0;
	/* Check if ??? */
	if (host_readb(hero+0x84) == 0x10)
		return 0;

	return 1;
}

/**
	check_hero_no2 - returns true if heros not dead, stoned or unconscious
	should be static
*/
unsigned short check_hero_no2(Bit8u *hero) {

	/* Check if hero has a class */
	if (host_readb(hero+0x21) == 0)
		return 0;
	/* Check if dead */
	if (host_readb(hero+0xaa) & 1 )
		return 0;
	/* Check if stoned */
	if ((host_readb(hero+0xaa) >> 2) & 1)
		return 0;
	/* Check if unconscious */
	if ((host_readb(hero+0xaa) >> 6) & 1)
		return 0;
	/* Check if ??? */
	if ((host_readb(hero+0xaa) >> 5) & 1)
		return 0;

	return 1;
}

/**
	check_hero_no3 - returns true if heros not dead, stoned or unconscious
	should be static
*/
unsigned short check_hero_no3(Bit8u *hero) {

	/* Check if hero has a class */
	if (host_readb(hero+0x21) == 0)
		return 0;
	/* Check if dead */
	if (host_readb(hero+0xaa) & 1 )
		return 0;
	/* Check if stoned */
	if ((host_readb(hero+0xaa) >> 2) & 1)
		return 0;
	/* Check if unconscious */
	if ((host_readb(hero+0xaa) >> 6) & 1)
		return 0;

	return 1;
}

/**
	add_hero_ae - add AE points to heros current AE
*/
void add_hero_ae(Bit8u* hero, short ae) {

	short tmp;

	/* dont add AE if hero is dead or ae = 0 */
	if ( (*(hero+0xaa) & 1) || ae == 0)
		return;

	tmp = real_readw(datseg, 0xc3cb);
	real_writew(datseg, 0xc3cb, 0);

	/* add AE to heros current AE */
	host_writew(hero+0x64, host_readw(hero+0x64) + ae);

	/* if current AE is greater than AE maximum
		set current AE to AE maximum */
	if (host_readw(hero+0x64) > host_readw(hero+0x62))
		host_writew(hero+0x64, host_readw(hero+0x62));

	real_writew(datseg, 0xc3cb, tmp);
}

/**
	test_attrib - make an attribute test

	A test is positive if the return value is greater than zero.
*/
short test_attrib(Bit8u* hero, unsigned short attrib, short bonus) {

	short si = random_schick(20);
	short tmp;

	D1_INFO("Eigenschaftsprobe %s auf %s %+d: W20 = %d",
		(char*)(hero+0x10), names_attrib[attrib], bonus, si);

	if (si == 20)
		return -99;

	si += bonus;

	tmp = host_readb(hero + attrib*3 + 0x35);
	tmp += host_readb(hero + attrib*3 + 0x36);
	tmp -= si + 1;

	D1_INFO(" -> %s mit %d\n",
		tmp > 0 ? "bestanden" : "nicht bestanden", tmp);

	return tmp;
}

/**
	test_attrib3 - make three attribute tests

	A test is positive if the return value is greater than zero.
*/
short test_attrib3(Bit8u* hero, unsigned short attrib1, unsigned short attrib2, unsigned short attrib3, char bonus) {

	short si = 0;
	unsigned short zw = 0;
	unsigned short i;
	short tmp;

	D1_INFO("%s -> (%s/%s/%s) %+d: ",
		(char*)(hero+0x10), names_attrib[attrib1],
		names_attrib[attrib2], names_attrib[attrib3], bonus);

	for (i = 0; i < 3; i++) {
		tmp = random_schick(20);

		D1_INFO("%d ", tmp);

		if (tmp == 20) {
			zw++;
			if (zw == 2) {
				D1_INFO(" -> UNGLÜCKLICH! nicht bestanden\n");
				return -99;
			}
		}
		si += tmp;
	}

	si += bonus;

	tmp = (char)host_readb(hero + attrib1*3 + 0x35);
	tmp += (char)host_readb(hero + attrib1*3 + 0x36);
	tmp += (char)host_readb(hero + attrib2*3 + 0x35);
	tmp += (char)host_readb(hero + attrib2*3 + 0x36);
	tmp += (char)host_readb(hero + attrib3*3 + 0x35);
	tmp += (char)host_readb(hero + attrib3*3 + 0x36);

	tmp -= si + 1;

	D1_INFO(" -> %s mit %d\n",
		tmp > 0 ? "bestanden" : "nicht bestanden", tmp);

	return tmp;
}

/**
	get_random_hero - return index of a randomly choden hero
*/
unsigned short get_random_hero() {
	Bit8u *hero;
	unsigned short cur_hero;
	char cur_group;

	do {
		/* get number of current group */
		cur_group = real_readb(datseg, 0x2d35);
		cur_hero = random_schick(real_readb(datseg, 0x2d36 + cur_group) );
		cur_hero--;

		hero = MemBase + Real2Phys(real_readd(datseg, 0xbd34));
		hero += cur_hero + 0x6da;

		/* Check if hero has a class */
		if (host_readb(hero+0x21) == 0)
			continue;
		/* Check if in current group */
		if (host_readb(hero+0x87) != cur_group)
			continue;
		/* Check if dead */
		if (host_readb(hero+0xaa) & 1 )
			continue;

		return cur_hero;

	} while (1);
}

/**
	get_party_money - summs up the money of the current party
*/
unsigned int get_party_money() {
	Bit8u* hero;
	unsigned int sum, i;

	sum = 0;
	hero = MemBase + Real2Phys(real_readd(datseg, 0xbd34));

	for (i=0; i < 6; i++, hero+=0x6da) {
		/* Check if hero has a class */
		if (host_readb(hero+0x21) == 0)
						continue;
		/* Check if hero is in current party */
		if (host_readb(hero+0x87) != real_readb(datseg, 0x2d35))
								continue;
		sum += host_readd(hero+0x2c);
	}

	return sum;
}

/**
	add_hero_ap - add AP
*/
void add_hero_ap(Bit8u *hero, int ap) {
	host_writed(hero+0x28, host_readd(hero+0x28) + ap);
}

/**
	add_hero_ap_all - add AP

	add AP to every hero
*/
void add_hero_ap_all(short ap) {
	Bit8u *hero_i;
	int i;

	if (ap < 0)
		return;

	hero_i = MemBase + Real2Phys(real_readd(datseg, 0xbd34));
	for (i = 0; i <= 6; hero_i += 0x6da, i++) {
		/* Check class */
		if (host_readb(hero_i + 0x21) == 0)
			continue;
		/* Check in group */
		if (host_readb(hero_i + 0x87) != real_readb(datseg, 0x2d35))
			continue;
		/* Check if dead */
		if (host_readb(hero_i + 0xaa) & 1)
			continue;

		D1_INFO("%s erhält %d AP\n",(char*)(hero_i+0x10), ap);

		add_hero_ap(hero_i, ap);
	}
}

/**
	sub_hero_ap_all - sub AP

	sub AP from every hero
*/
void sub_hero_ap_all(short ap) {
	Bit8u *hero_i;
	int i;

	if (ap < 0)
		return;

	hero_i = MemBase + Real2Phys(real_readd(datseg, 0xbd34));
	for (i = 0; i <= 6; hero_i += 0x6da, i++) {
		/* Check class */
		if (host_readb(hero_i + 0x21) == 0)
			continue;
		/* Check in group */
		if (host_readb(hero_i + 0x87) != real_readb(datseg, 0x2d35))
			continue;
		/* Check if dead */
		if (host_readb(hero_i + 0xaa) & 1)
			continue;

		if (ap <= host_readd(hero_i+0x28)) {
			ap = -ap;
			D1_INFO("%s erhält %+d AP\n",(char*)(hero_i+0x10), ap);
			add_hero_ap(hero_i, ap);
		} else {
			D1_INFO("%s wird auf 0 AP gesetzt\n",(char*)(hero_i+0x10));
			host_writed(hero_i+0x28, 0);
		}
	}

}

/**
	get_hero_index - gets hero index
*/

unsigned short get_hero_index(Bit8u *hero) {
	Bit8u *first_hero = MemBase + Real2Phys(real_readd(datseg, 0xbd34));
	int i = 0;

	while (hero != first_hero + i*0x6da)
		i++;
	return i;

}

/**
	get_item_pos - gets item position
*/
int get_item_pos(Bit8u *hero, unsigned short item) {
	int i;

	for (i = 0; i < 0x17; i++) {
		if (item == host_readw(hero + i*14 + 0x196))
			return i;
	}
	return -1;
}

short get_first_hero_with_item(unsigned short item) {
	Bit8u *hero_i = MemBase + Real2Phys(real_readd(datseg, 0xbd34));
	int i,j;

	for (i = 0; i <= 6; i++ , hero_i += 0x6da) {
		/* Check class */
		if (host_readb(hero_i+0x21) == 0)
			continue;
		/* Check if in current group */
		if (host_readb(hero_i+0x87) != real_readb(datseg, 0x2d35))
			continue;
		/* Search inventar */
		for (j = 0; j < 17; j++)
			if (host_readw(hero_i + j * 14 + 0x196) == item)
				return i;
	}

	return -1;
};


/**
	count_heroes_available_in_group
*/

unsigned short count_heroes_available_in_group() {
	Bit8u *hero_i = MemBase + Real2Phys(real_readd(datseg, 0xbd34));
	char i, heroes = 0;

	for (i=0; i <= 6; i++, hero_i += 0x6da) {
		/* Check class */
		if (host_readb(hero_i+0x21) == 0)
			continue;
		/* Check if in current group */
		if (host_readb(hero_i+0x87) != real_readb(datseg, 0x2d35))
			continue;
		/* Check if hero is available */
		if (check_hero_no2(hero_i) == 0)
			continue;

		heroes++;
	}

	return heroes;
}
