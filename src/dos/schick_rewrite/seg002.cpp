#include <mem.h>
#include "../schick.h"

/*
	 8/140 Functions complete
*/

unsigned int get_readlength2(signed short index) {
	return index == -1 ? 0 : real_readd(datseg, 0xbce7);
}

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
unsigned short div16(unsigned char val) {
	return val >> 4;
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
