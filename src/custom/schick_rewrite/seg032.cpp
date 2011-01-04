/*
 *	Rewrite of DSA1 v3.02_de functions of seg032 (fight)
 *	Functions rewritten 1/12
*/

#include "schick.h"

#include "seg007.h"

/**
 *	FIG_set_cb_field - sets an object to a chessboard position
 *	@row:		the row on the chessboard (iso_y)
 *	@col:		the column on the chessboard (iso_y)
 *	@object:	number of the object
 *			0=free, 1-6=heroes, >10=enemys,
 *			>50walls, trees, etc
 *			-3 = flee
 *
 *	This function is called multiple timeswhen an entrant in a fight
 *	is moving. The initial placements of static objects are also done
 *	with this function.
 */
void FIG_set_cb_field(signed short row, signed short col, signed char object) {
	if (row < 0 || row > 24 || col < 0 || col > 24)
		return;

	host_writeb(MemBase + Real2Phys(ds_readd(0xd852)) + row * 25 + col,
		object);
}

/**
 *	FIG_choose_next_hero	-	chooses the next hero on turn
 *
 *	This is simply done randomly.
 */
unsigned short FIG_choose_next_hero() {
	Bit8u *hero;
	unsigned short retval;

	do {
		retval = random_schick(7) - 1;
		hero = MemBase + Real2Phys(ds_readd(0xbd34)) + retval * 0x6da;

	/* search fo a hero who is not dead, in the current group and
		something still unknown */
	} while (host_readb(hero + 0x21) == 0 ||
			host_readb(hero + 0x87) != ds_readb(0x2d35) ||
			host_readb(hero + 0x83) == 0);

	return retval;
}
