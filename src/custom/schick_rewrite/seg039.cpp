/*
 *	Rewrite of DSA1 v3.02_de functions of seg039 (fight)
 *	Functions rewritten 1/7
*/

#include "schick.h"

signed short seg039_0023(Bit8u *hero) {
	Bit8u *ptr;
	signed short retval = -1;
	unsigned short weapon;

	/* get equipped weapon of the hero */
	weapon = host_readw(hero + 0x1c0);
	/* make a pointer to the entry of ITEMS.DAT */
	ptr = MemBase + Real2Phys(ds_readd(0xe22b)) + weapon * 12;

	D1_LOG("weapon 0x%x +2 0x%x +3 0x%x\n", weapon,
		host_readb(ptr + 2), host_readb(ptr + 3));

	if (((host_readb(ptr + 2) >> 1) & 1) == 0)
		return retval;

	/* weapons are not MagicStaffs or Fightstaffs */
	if (host_readb(ptr + 3) == 5 && weapon != 0x85 && weapon != 0x45)
		return 5;

	if (host_readb(ptr + 3) == 7)
		return 3;

	if (host_readb(ptr + 3) == 8)
		return 4;

	return retval;
}
