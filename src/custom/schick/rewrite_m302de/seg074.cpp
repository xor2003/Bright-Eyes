/**
 *	Rewrite of DSA1 v3.02_de functions of seg074 (automap)
 *	Functions rewritten: 8/11
 */

#include <string.h>

#include "v302de.h"

#include "seg002.h"
#include "seg004.h"
#include "seg029.h"
#include "seg066.h"
#include "seg074.h"
#include "seg097.h"
#include "seg103.h"

#if !defined(__BORLANDC__)
namespace M302de {
#endif

#if defined(__BORLANDC__)
/* Borlandified and identical */
void show_automap(void)
{
	signed short l_si;
	signed short l_di;
	signed short loc_bak;
	signed short done;
	signed short dungeon;
	signed short town;
	signed short bak;

	if (!ds_readb(DUNGEON_LIGHT) ||
		((ds_readbs(DUNGEON_LIGHT) == 1) && (test_skill(get_first_hero_available_in_group(), 28, 6) > 0)))
	{

		ds_writeb(0x45b8, 1);

		dungeon = ds_readbs(DUNGEON_INDEX);
		town = ds_readbs(CURRENT_TOWN);

		ds_writeb(CURRENT_TOWN, ds_writeb(DUNGEON_INDEX, 0));

		bak = ds_readw(0xbffd);
		ds_writew(0xbffd, 3);

		l_si = (ds_readb(0xbd94) == 16) ? 0 :
				((ds_readws(X_TARGET) - 8 < 0) ? 0 :
				((ds_readws(X_TARGET) - 8 > 15) ? 16 : ds_readws(X_TARGET) - 8));

		ds_writeb(CURRENT_TOWN, (signed char)town);
		ds_writeb(DUNGEON_INDEX, (signed char)dungeon);

		ds_writew(0x2846, 1);

		do {

			if (ds_readw(0x2846) != 0) {
				loc_bak = ds_readbs(LOCATION);
				ds_writeb(LOCATION, 1);

				draw_main_screen();
				ds_writeb(LOCATION, (signed char)loc_bak);

				if (ds_readb(0xbd94) == 16) {
					draw_loc_icons(1, 8);
				} else {
					draw_loc_icons(3, 27, 26, 8);
				}

				seg074_305(l_si);
				clear_ani_pal();
				seg074_7b2();
				set_ani_pal(p_datseg + 0x7d0e);
				ds_writew(0x2846, 0);
			}

			done = 0;

			handle_gui_input();

			if ((ds_readw(0xc3d3) != 0) || (ds_readw(ACTION) == 73)) {

				if (ds_readb(0xbd94) == 16) {
					l_di = GUI_radio(get_ltx(0x990), 1, get_ltx(0x994)) - 1;
				} else {
					ds_writew(0xe5ac, 2);
					l_di = GUI_radio(get_ltx(0x990), 3,
								 get_ltx(0x998),
								 get_ltx(0x99c),
								 get_ltx(0x994)) - 1;
				}

				if (l_di != -2) {
					ds_writew(ACTION, l_di + 129);
				}
			}

			if (ds_readb(0xbd94) != 16) {

				if ((ds_readws(ACTION) == 129) || (ds_readws(ACTION) == 75)) {

					if (l_si > 0) {
						seg074_305(--l_si);
						seg074_7b2();
					}
				}

				if ((ds_readws(ACTION) == 130) || (ds_readws(ACTION) == 77)) {

					if (l_si < 16) {
						seg074_305(++l_si);
						seg074_7b2();
					}
				}
			}

			if (((ds_readws(ACTION) == 129) && (ds_readb(0xbd94) == 16)) ||
				((ds_readws(ACTION) == 131) && (ds_readb(0xbd94) != 16)))
			{
				done = 1;
			}
		} while (done == 0);

		ds_writew(0xbffd, bak);
		ds_writew(0x2846, 1);

		clear_ani_pal();

	} else {
		GUI_output(get_ltx(0xc10));
	}
}
#endif

/* Borlandified and identical */
unsigned short is_discovered(signed short x, signed short y)
{
	return ds_readb(0xe442 + (4 * y) + (x >> 3)) & (ds_readb(0x7d4a + (x & 7)));
}

/**
 * \brief	get value of automap field from small (16x16) maps
 *
 * \param	x	x-coordinate
 * \param	y	y-coordinate
 *
 * \return	value of the field at (x,y)
 */
/* Borlandified and identical */
unsigned short get_mapval_small(signed short x, signed short y)
{
	Bit8u *map = p_datseg + 0xbd95;

	return host_readb(map + 16 * y + x);
}

/**
 * \brief	get value of automap field from small (32x16) maps
 *
 * \param	x	x-coordinate
 * \param	y	y-coordinate
 *
 * \return	value of the field at (x,y)
 */
/* Borlandified and identical */
unsigned short get_mapval_large(signed short x, signed short y)
{
	Bit8u *map = p_datseg + 0xbd95;

	return host_readb(map + 32 * y + x);
}

/**
 * \brief	checks if the group is in prison
 *
 * \param group_nr	number of the group
 *
 * \return	the value of the "in_prison" flag
 */
/* Borlandified and identical */
signed short is_group_in_prison(signed short group_nr)
{
	Bit8u *hero = get_hero(0);
	signed short i;

	for (i = 0; i < 6; i++, hero += 0x6da) {

		if ((host_readbs(hero + 0x21) != 0) &&
			(host_readbs(hero + 0x87) == group_nr))
		{
			return host_readbs(hero + 0x9f);
		}
	}

	return 0;
}

#if defined(__BORLANDC__)
void seg074_305(signed short x_off)
{
	signed short l_si;
	signed short l_di;
	signed short x;
	signed short y;
	signed short loc1;

	ds_writew(0xc011, 0);
	ds_writew(0xc013, 0);
	ds_writew(0xc015, 6);
	ds_writew(0xc017, 6);

	/* set buffer to 0 */
	memset(Real2Host(ds_readd(0xd303)), 0, 64000);

	for (y = 0; y < 16; y++) {
		for (x = 0; x < 16; x++) {
			if (is_discovered(x + x_off, y)) {

				if (ds_readbs(DUNGEON_INDEX) != 0) {

					l_si = div16(get_mapval_small(x, y));

					draw_automap_square(x, y,
						(l_si <= 0)? 19 :
							(((l_si == 1) || (l_si == 9) || l_si == 2) ? 11 :
							((l_si == 4) ? 6 :
							((l_si == 3) ? 3 :
							((l_si == 5) ? 2 :
							((l_si == 8) ? 17 :
							((l_si == 6) ? 9 : 1)))))), -1);


				} else {

					if (!(l_si = seg074_bbb(x + x_off, y))) {
						l_si = get_border_index((ds_readb(0xbd94) == 16) ?
										get_mapval_small(x, y) :
										get_mapval_large(x + x_off, y));
					}

					draw_automap_square(x, y,
						(l_si <= 0)? 19 :
							((l_si == 6) ? 3 :
							((l_si == 7) ? 18 :
							((l_si == 8) ? 1 :
							((l_si == 1) ? 12 :
							((l_si == 9) ? 6 :
							((l_si == 10) ? 15 :
							((l_si == 11) ? 9 :
							((l_si == 12) ? 5 :
							((l_si == 13) ? 10 :
							(((l_si >= 2) && (l_si <= 5)) ? 11 : 0)))))))))), -1);

					if ((l_si != 0) && (l_si != 7) && (l_si != 6) && (l_si != 8)) {

						loc1 = (ds_readb(0xbd94) == 16) ?
										get_mapval_small(x, y) :
										get_mapval_large(x + x_off, y);

						loc1 &= 3;
						draw_automap_entrance(x, y, loc1);
					}
				}
			}
		}
	}

	if (((ds_readws(X_TARGET) - x_off) >= 0) && ((ds_readws(X_TARGET) - x_off) <= 16)) {

		draw_automap_square(ds_readws(X_TARGET) - x_off, ds_readws(Y_TARGET),
					4, ds_readbs(DIRECTION));
	}

	for (l_di = 0; l_di < 6; l_di++) {

		if ((ds_readbs(CURRENT_GROUP) != l_di) &&
			(ds_readbs(0x2d36 + l_di) > 0) &&
			(ds_readb(0x2d76 + l_di) == ds_readbs(DUNGEON_LEVEL)) &&
			(ds_readb(0x2d68 + l_di) == ds_readbs(CURRENT_TOWN)) &&
			(ds_readb(0x2d6f + l_di) == ds_readbs(DUNGEON_INDEX)) &&
			!is_group_in_prison(l_di) &&
			(ds_readws(0x2d48 + 2 * l_di) - x_off >= 0) &&
			(ds_readws(0x2d48 + 2 * l_di) - x_off <= 16))
		{
			draw_automap_square(ds_readws(0x2d48 + 2 * l_di) - x_off,
					ds_readws(0x2d54 + 2 * l_di),
					16,
					ds_readbs(0x2d3e + l_di));
		}
	}

	if (((ds_readws(0x7de5) - x_off) >= 0) && ((ds_readws(0x7de5) - x_off) <= 16)) {

		draw_automap_square(ds_readws(0x7de5) - x_off,	ds_readws(0x7de7), 7, -1);
	}
}
#endif

/**
 * \brief	draws a building on the automap
 *
 * \param x	x-coordinate on the automap
 * \param y	y-coordiante on the automap
 * \param color	the color
 * \param dir	directory of the entrance, -1 for none
 */
void draw_automap_square(signed short x, signed short y, signed short color, signed short dir)
{
	signed short i;
	unsigned short l_di;
	RealPt dst;
	signed char array[50];

	l_di = y;
	l_di <<= 3;
	l_di *= 320;

	dst = (RealPt)ds_readd(0xd303) + l_di + 8 * x + 0xca8;

	for (i = 0; i < 49; i++) {
		array[i] = color;
	}

	if ((color == 4) || (color == 16)) {

		if (dir == 0) {

			memcpy(Real2Host(ds_readd(0xd2eb)), p_datseg + 0x7d52, 49);

		} else if (dir == 2) {

			for (i = 0; i < 49; i++) {
				host_writeb(Real2Host(ds_readd(0xd2eb)) + i, ds_readb(0x7d52 + (48 - i)));
			}

		} else if (dir == 1) {

			memcpy(Real2Host(ds_readd(0xd2eb)), p_datseg + 0x7d83, 49);

		} else {

			for (i = 0; i < 49; i++) {
				host_writeb(Real2Host(ds_readd(0xd2eb)) + i, ds_readb(0x7d83 + (48 - i)));
			}
		}

		for (i = 0; i < 49; i++) {
			if (!host_readbs(Real2Host(ds_readd(0xd2eb)) + i)) {
				array[i] = 0;
			}
		}
	}

	if (color == 7) {

		for (i = 0; i < 49; i++) {
			if (!ds_readb(0x7db4 + i)) {
				array[i] = 0;
			} else {
				array[i] = color;
			}
		}
	}

	ds_writed(0xc00d, (Bit32u)dst);

#if !defined(__BORLANDC__)
	/* need 50 bytes on the DOSBox-Stack */
	reg_esp -= 50;

	/* make a pointer to this position */
	Bit8u *p = Real2Host(RealMake(SegValue(ss), reg_sp));

	/* copy the array from host stack to DOSBox stack */
	for (i = 0; i < 50; i++, p++) {
		host_writeb(p, array[i]);
	}

	/* save the pointer as the graphic source */
	ds_writed(0xc019, (Bit32u)RealMake(SegValue(ss), reg_sp));

	/* free 50 bytes */
	reg_esp += 50;
#else
	ds_writed(0xc019, (Bit32u)&array);
#endif
	/* */
	do_pic_copy(0);

}

/**
 * \brief	draws the entrance of a automap building
 *
 * \param	x	x-coordinate of the building
 * \param	y	y-coordinate of the building
 * \param	dir	direction of the entrance, 0 = NORTH, 1 = EAST,...
 */
void draw_automap_entrance(signed short x, signed short y, signed short dir)
{
	unsigned short l_si = y;
	signed short d = dir;
	signed short c;
	Bit8u *dst;

	l_si <<= 3;
	l_si *= 320;

	dst = Real2Host(ds_readd(0xd303)) + l_si + 8 * x + 0xca8;

	if (!d) {
		dst += 2;
		c = 1;
	} else if (d == 1) {
		dst += 646;
		c = 320;
	} else if (d == 2) {
		dst += 1922;
		c = 1;
	} else {
		dst += 640;
		c = 320;
	}

	/* set 3 pixel to black */
	host_writeb(dst, 0);
	host_writeb(dst + c, 0);
	host_writeb(dst + c + c, 0);
}

#if defined(__BORLANDC__)
void seg074_7b2(void)
{
}

#endif


/* TODO: stub function for transversalis */
signed short select_teleport_dest(void)
{
	return -1;
}

#if defined(__BORLANDC__)
signed short seg074_bbb(signed short x, signed short y)
{
	return x + y;
}
#endif

#if !defined(__BORLANDC__)
}
#endif
