/*
	Rewrite of DSA1 v3.02_de functions of seg002 (misc)
	Functions rewritten: 88/136
*/
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdarg.h>

#if !defined(__BORLANDC__)
#include "callback.h"
#include "regs.h"
#include "dos_inc.h"
#endif

#include "v302de.h"

#include "seg000.h"
#include "seg001.h"
#include "seg002.h"
#include "seg004.h"
#include "seg006.h"
#include "seg007.h"
#include "seg008.h"
#include "seg009.h"
#include "seg010.h"
#include "seg029.h"
#include "seg039.h"
#include "seg041.h"
#include "seg047.h"
#include "seg096.h"
#include "seg097.h"
#include "seg106.h"
#include "seg108.h"
#include "seg113.h"

#if !defined(__BORLANDC__)
namespace M302de {
#endif

void set_audio_track(Bit16u index)
{
	CPU_Push16(index);
	CALLBACK_RunRealFar(reloc_game + 0x51e, 0x17);
	CPU_Pop16();
}

void play_voc(Bit16u index)
{
	CPU_Push16(index);
	CALLBACK_RunRealFar(reloc_game + 0x51e, 0x832);
	CPU_Pop16();
}

void play_voc_delay(Bit16u index)
{
	CPU_Push16(index);
	CALLBACK_RunRealFar(reloc_game + 0x51e, 0x856);
	CPU_Pop16();
}

/**
 * open_and_seek_dat - opens SCHICK.DAT and seeks to desired position
 * @fileindex: the index of the file in SCHICK.DAT
 *
 * Returns the filehandle or 0xffff.
 */
//static
Bit16u open_and_seek_dat(unsigned short fileindex) {
	Bit32u start, end;
	Bit16u fd;

	/* open SCHICK.DAT */
	if (!DOS_OpenFile("SCHICK.DAT", OPEN_READ, &fd))
		return 0xffff;

	/* seek to the fileindex position in the offset table */
	bc_lseek(fd, fileindex * 4, DOS_SEEK_SET);

	/* read the start offset of the desired file */
	bc__read(fd, (Bit8u*)&start, 4);

	/* read the start offset of the next file */
	bc__read(fd, (Bit8u*)&end, 4);

	/* BE-Fix */
	start = host_readd((Bit8u*)&start);
	end = host_readd((Bit8u*)&end);

	/* seek to the desired file */
	bc_lseek(fd, start, DOS_SEEK_SET);

	/* save the offset of the desired file */
	ds_writed(0xbcdf, start);

	/* save the length of the desired file in 2 variables */
	ds_writed(0xbce3, end - start);
	ds_writed(0xbce7, end - start);

	return fd;
}

unsigned int get_readlength2(signed short index) {
	return index == -1 ? 0 : ds_readd(0xbce7);
}

unsigned short read_archive_file(Bit16u handle, Bit8u *buffer, Bit16u len) {

	Bit16u readsize;

	readsize = len;

	/* no need to read */
	if (ds_readd(0xbce3) == 0)
		return 0;

	/* adjust number of bytes to read */
	if (len > ds_readd(0xbce3))
		readsize = ds_readd(0xbce3) & 0xffff;

	ds_writed(0xbce3, ds_readd(0xbce3) - readsize);

	return bc__read(handle, buffer, readsize);
}

void seg002_0c72(Bit16u handle, Bit32u off, Bit16u dummy) {

	ds_writed(0xbce3, ds_readd(0xbce7) - off);

	bc_lseek(handle, ds_readd(0xbcdf) + off, DOS_SEEK_SET);
}

Bit16u load_regular_file(Bit16u index)
{
	CPU_Push16(index);
	CALLBACK_RunRealFar(reloc_game + 0x51e, 0xcb6);
	CPU_Pop16();

	return reg_ax;
}
Bit16u load_archive_file(Bit16u index)
{
	CPU_Push16(index);
	CALLBACK_RunRealFar(reloc_game + 0x51e, 0xd27);
	CPU_Pop16();

	return reg_ax;
}

signed int process_nvf(struct nvf_desc *nvf) {

	signed char nvf_type;
	Bit8u *src, *dst;
	int p_size;
	int offs;
	signed int retval;
	short va;
	short height;
	short pics;
	short width;
	short i;

	Bit8u *p = nvf->src;
	dst = nvf->dst;

	nvf_type = host_readb(p);
	va = nvf_type & 0x80;
	nvf_type &= 0x7f;

	pics = host_readw(p + 1);

	if (nvf->nr < 0)
		nvf->nr = 0;

	if (nvf->nr > pics - 1)
		nvf->nr = pics - 1;

	switch (nvf_type) {

	case 0x00:
		width = host_readw(p + 3);
		height = host_readw(p + 5);
		p_size = height * width;
		src =  p + nvf->nr * p_size + 7;
		break;

	case 0x01:
		offs = pics * 4 + 3;
		for (i = 0; i < nvf->nr; i++) {
			width = host_readw(p + i * 4 + 3);
			height = host_readw(p + i * 4 + 5);
			offs += width * height;
		}

		width = host_readw(p + nvf->nr * 4 + 3);
		height = host_readw(p + nvf->nr * 4 + 5);
		p_size = width * height;
		src = p + offs;
		break;

	case 0x02: case 0x04:
		width = host_readw(p + 3);
		height = host_readw(p + 5);
		offs = pics * 4 + 7;
		for (i = 0; i < nvf->nr; i++)
			offs += host_readd(p  + (i * 4) + 7);

		p_size = host_readd(p + nvf->nr * 4 + 7);
		src = p + offs;
		break;

	case 0x03: case 0x05:
		offs = pics * 8 + 3;
		for (i = 0; i < nvf->nr; i++)
			offs += host_readd(p  + (i * 8) + 7);

		width = host_readw(p + nvf->nr * 8 + 3);
		height = host_readw(p + nvf->nr * 8 + 5);
		p_size = host_readd(p + i * 8 + 7);
		src = p + offs;
		break;
	}

	switch (nvf->type) {

	case 0:
		/* PP20 decompression */

		if (va != 0) {

			/* get size from unpacked picture */
			retval = host_readd(src);
			retval = host_readd(src + (retval - 4));
			retval = swap_u32(retval) >> 8;

		} else
			retval = width * height;

		decomp_pp20(src, dst, src + 4, p_size);
		break;

	case 2: case 3: case 4: case 5:
		/* RLE decompression */
		decomp_rle(width, height, dst, src,
			Real2Host(ds_readd(0xd2eb)), nvf->type);
		/* retval was originally neither set nor used here.
			VC++2008 complains about an uninitialized variable
			on a Debug build, so we fix this for debuggings sake */
		/* Orig-Fix */
		retval = p_size;
		break;

	default:
		/* No decompression, just copy */
		memmove(nvf->dst, src, (short)p_size);
		retval = p_size;
	}

	host_writew(nvf->width, width);
	host_writew(nvf->height, height);

	return retval;
}

/**
 * mouse_action -	does mouse programming
 * @p1:		function AX
 * @p2:		depends on AX
 * @p3:		depends on AX
 * @p4:		depends on AX
 * @p5:		depends on AX
 *
 * This function differs a bit. Borlands C-Library has a special function
 * to call interrupts. We use the one of DOSBox, which means, that we
 * put the values in the emulated registers, instead in a structure.
 */
void mouse_action(Bit8u *p1, Bit8u *p2, Bit8u *p3, Bit8u *p4, Bit8u *p5) {

	if ((signed short)host_readw(p1) < 0)
		return;

	unsigned short ba, bb, bc, bd, be, bsi, bdi;

	/* save register content */
	ba = reg_ax;
	bb = reg_bx;
	bc = reg_cx;
	bd = reg_dx;
	be = SegValue(es);
	bsi = reg_si;
	bdi = reg_di;

	/* write paramters to registers */
	reg_ax = host_readw(p1);
	reg_bx = host_readw(p2);
	reg_cx = host_readw(p3);

	/* respect special functions */
	switch (reg_ax) {
		case 0x9:	/* define Cursor in graphic mode */
		case 0xc:	/* install event handler */
		case 0x14:	/* swap event handler */
		case 0x16:	/* save mouse state */
		case 0x17:	/* load mouse state */
			reg_dx = host_readw(p4);
			SegSet16(es, host_readw(p5));
			break;
		case 0x10:	/* define screen region for update */
			reg_cx = host_readw(p2);
			reg_dx = host_readw(p3);
			reg_si = host_readw(p4);
			reg_di = host_readw(p5);
			break;
		default:
			reg_dx = host_readw(p4);

			D1_LOG("%x %x %x %x %x\n", host_readw(p1),
				host_readw(p2), host_readw(p3),
				host_readw(p4),	host_readw(p5));

	}

	/* Call the interrupt */
	CALLBACK_RunRealInt(0x33);

	/* write the return values */
	if (reg_ax == 0x14)
		host_writew(p2, SegValue(es));
	else
		host_writew(p2, reg_bx);

	host_writew(p1, reg_ax);
	host_writew(p3, reg_cx);
	host_writew(p4, reg_dx);

	/* restore register values */
	reg_ax = ba;
	reg_bx = bb;
	reg_cx = bc;
	reg_dx = bd;
	SegSet16(es, be);
	reg_si = bsi;
	reg_di = bdi;

	return;
}

/**
 *	is_mouse_in_rect - checks if the mouse cursor is in a rectangle
 *	@x1:	upper left x coordinate
 *	@y1:	upper left y coordinate
 *	@x2:	bottom right x coordinate
 *	@y2:	bottom right y coordinate
 *
 * Returns 0 if the pointer is not in this rectangle, otherwise 1.
 */
short is_mouse_in_rect(unsigned short x1, unsigned short y1,
				unsigned short x2, unsigned short y2) {
	unsigned short m_x;
	unsigned short m_y;

	m_x = ds_readw(0x299c);
	m_y = ds_readw(0x299e);

	if ((m_x < x1) || (m_x > x2) || (m_y < y1) || (m_y > y2))
		return 0;

	return 1;
}

/**
 * mouse_move_cursor -	move the mouse cursor to a position
 * @x:	X - coordinate
 * @y:	Y - coordinate
 */
void mouse_move_cursor(unsigned short x, unsigned short y) {
	unsigned short v1 = 4;
	unsigned short v2 = 0xdead;

	mouse_action((Bit8u*)&v1, (Bit8u*)&v2, (Bit8u*)&x, (Bit8u*)&y, (Bit8u*)&v2);
}

/**
	make_ggst_cursor - makes a mouse cursor from a selected item
	@p:	pointer to the icon of the item
*/
void make_ggst_cursor(Bit8u *icon) {
	unsigned short y, x;
	unsigned short tmp;

	/* clear the bitmask */
	for (y = 0; y < 16; y++)
		ds_writew(0xceef + y * 2, 0);

	/* make a bitmask from the icon */
	for (y = 0; y < 16; y++)
		for (x = 0; x < 16; x++)
			/* if pixelcolor of the icon is not black */
			if (*icon++ != 0x40) {
				tmp = ds_readw(0xceef + y * 2);
				ds_writew(0xceef + y * 2, tmp | (0x8000 >> x));
			}

	/* copy and negate the bitmask */
	for (y = 0; y < 16; y++)
		ds_writew(0xcecf + y * 2, ~ds_readw(0xceef + y * 2));
}

void update_mouse_cursor() {
	update_mouse_cursor1();
}
void refresh_screen_size() {
	refresh_screen_size1();
}

void handle_gui_input(void)
{
	CALLBACK_RunRealFar(reloc_game + 0x51e, 0x1a34);
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

void mouse_19dc() {

	/* return if mouse was not moved and the cursor remains */
	if (ds_readw(0x29a4) == 0 && ds_readd(0xcec7) == ds_readd(0xcecb))
		return;

	/* set new cursor */
	ds_writed(0xcec7, ds_readd(0xcecb));

	/* check if the new cursor is the default cursor */
	if (ds_readd(0xcecb) == RealMake(datseg, 0x2848)) {
		/* set cursor size 0x0 */
		ds_writew(0x29a8, 0);
		ds_writew(0x29a6, 0);
	} else {
		/* set cursor size 8x8 */
		ds_writew(0x29a8, 8);
		ds_writew(0x29a6, 8);
	}

	/* reset mouse was moved */
	ds_writew(0x29a4, 0);
	update_mouse_cursor1();
	refresh_screen_size1();
}

unsigned short get_mouse_action(unsigned short x, unsigned short y, Bit8u *p) {

	unsigned short i;

	for (i = 0; host_readw(p + i * 10) != 0xffff; i++) {

		if (host_readw(p + i * 10) > x)
			continue;
		if (host_readw(p + i * 10 + 4) < x)
			continue;
		if (host_readw(p + i * 10 + 2) > y)
			continue;
		if (host_readw(p + i * 10 + 6) < y)
			continue;

		return host_readw(p + i * 10 + 8);

	}
	return 0;
}

void handle_input()
{
	CALLBACK_RunRealFar(reloc_game + 0x51e, 0x1d67);

}

void wait_for_keyboard1() {
	while (CD_bioskey(1)) {
		D1_LOG("loop in %s\n", __func__);
		bioskey(0);
	}
}

//static
void timers_daily() {
	Bit8u *hero_i;
	unsigned short i = 0;

	/* Smith / items to repair */
	for (i = 0; i < 50; i++) {
		if (ds_readw(0x31e2 + i * 6)) {
			/* set state to zero */
			ds_writew(0x31e4 + i * 6, 0);
			/* set time to 6:00 am */
			ds_writew(0x31e4 + i * 4, 32400);
		}
	}

	/* reset insulted merchants */
	for (i = 0; i < 94; i++)
		ds_writeb(0x3592 + i, 0);

	hero_i = get_hero(0);
	for (i = 0; i <=6; i++, hero_i += 0x6da) {
		if (host_readb(hero_i + 0x21) == 0)
			continue;
		if ((signed char)host_readb(hero_i + 0x94) <= 0)
			continue;

		host_writeb(hero_i + 0x94, host_readb(hero_i + 0x94) - 1);
	}

	ds_writew(0x26b9, 1);

#ifdef M302de_ORIGINAL_BUGFIX
	/* Original-BUG: Reenable identifying item in the academy */
	ds_writew(0x335a, 0);
#endif

	/* Decrase monthly credit cens timer (bank) */
	if ((signed short)ds_readw(0x335e) > 0) {
		ds_writew(0x335e, ds_readw(0x335e) - 1);
		if (ds_readw(0x335e) == 0)
			ds_writew(0x3350, 0);
	}

	/* Days until you run in trouble, if you have more
		than 1000S debt at the bank */
	if ((signed short)ds_readw(0x3360) > 0) {
		ds_writew(0x3360, ds_readw(0x3360) - 1);

		if (ds_readw(0x3360) == 0)
			ds_writew(0x3360, -1);
	}
}

//static
void seg002_2177() {
	unsigned short i;

	for (i = 0; ds_readw(0x70a8 + i * 8) != 0xffff; i++)
		ds_writew(0x70ae + i * 8, random_interval(ds_readw(0x70a8 + i * 8), 20));
}

void pal_fade(Bit8u *dst, Bit8u *p2) {
	unsigned short i;

	for (i = 0; i < 32; i++) {
		signed char v1;
		signed char v2;

		v1 = host_readb(dst + i * 3);
		v2 = host_readb(p2 + i * 3);

		if (v2 < v1 && v1 > 0)
			host_writeb(dst + i * 3, v1 - 1);
		else {
			if (v2 > v1 && v1 < 0x3f)
				host_writeb(dst + i * 3, v1 + 1);
		};

		v1 = host_readb(dst + i * 3 + 1);
		v2 = host_readb(p2 + i * 3 + 1);

		if (v2 < v1 && v1 > 0)
			host_writeb(dst + i * 3 + 1, v1 - 1);
		else {
			if (v2 > v1 && v1 < 0x3f)
				host_writeb(dst + i * 3 + 1, v1 + 1);
		};

		v1 = host_readb(dst + i * 3 + 2);
		v2 = host_readb(p2 + i * 3 + 2);

		if (v2 < v1 && v1 > 0)
			host_writeb(dst + i * 3 + 2, v1 - 1);
		else {
			if (v2 > v1 && v1 < 0x3f)
				host_writeb(dst + i * 3 + 2, v1 + 1);
		}
	}
}

void pal_fade_in(Bit8u *dst, Bit8u *p2, unsigned short v3, unsigned short colors) {
	unsigned short i, si;

	signed char c1, c2;

	si = 0x40 - v3;

	for (i = 0; i < colors; i++) {

		c1 = host_readb(dst + i * 3);
		c2 = host_readb(p2 + i * 3);

		if ((c2 >= si) && (c2 > c1))
			host_writeb(dst + i * 3, c1 + 1);

		c1 = host_readb(dst + i * 3 + 1);
		c2 = host_readb(p2 + i * 3 + 1);

		if ((c2 >= si) && (c2 > c1))
			host_writeb(dst + i * 3 + 1, c1 + 1);

		c1 = host_readb(dst + i * 3 + 2);
		c2 = host_readb(p2 + i * 3 + 2);

		if ((c2 >= si) && (c2 > c1))
			host_writeb(dst + i * 3 + 2, c1 + 1);
	}
}

/**
 * dawning() - adjusts palettes in the morning
 *
 */
void dawning(void)
{
	/* Between 6 and 7 */
	if ((ds_readd(DAY_TIMER) < 0x7e90) || (ds_readd(DAY_TIMER) >= 0x93a8))
		return;

	/* in 64 steps */
	if (((ds_readd(DAY_TIMER) - 0x7e90) % 0x54) != 0)
		return;

	/* floor */
	pal_fade(p_datseg + 0x3e53, Real2Host(ds_readd(0xd321)));
	/* buildings */
	pal_fade(p_datseg + 0x3eb3, Real2Host(ds_readd(0xd321)) + 0x60);
	/* sky */
	pal_fade(p_datseg + 0x3f13, Real2Host(ds_readd(0xd321)) + 0xc0);

	/* not in a town */
	if (ds_readb(CURRENT_TOWN) == 0)
		return;
	/* in a dungeon */
	if (ds_readb(DUNGEON_INDEX) != 0)
		return;
	/* in a location */
	if (ds_readb(LOCATION) != 0)
		return;
	/* in a travel mode */
	if (ds_readb(TRAVELING) != 0)
		return;
	/* unknown */
	if (ds_readb(0xe5d2) != 0)
		return;
	/* unknown */
	if (ds_readb(0x45b8) != 0)
		return;
	/* unknown */
	if (ds_readb(0x2845) != 0)
		return;

	wait_for_vsync();

	set_palette(p_datseg + 0x3e53, 0, 0x20);
	set_palette(p_datseg + 0x3eb3, 0x80, 0x40);
}

/**
 * nightfall() - adjusts palettes in the evening
 *
 */
void nightfall(void)
{
	/* Between 6 and 7 */
	if ((ds_readd(DAY_TIMER) < 0x1a5e0) || (ds_readd(DAY_TIMER) >= 0x1baf8))
		return;

	/* in 64 steps */
	if (((ds_readd(DAY_TIMER) - 0x1a5e0) % 0x54) != 0)
		return;

	/* floor */
	pal_fade(p_datseg + 0x3e53, p_datseg + 0x4498);
	/* buildings */
	pal_fade(p_datseg + 0x3eb3, p_datseg + 0x44f8);
	/* sky */
	pal_fade(p_datseg + 0x3f13, p_datseg + 0x4558);

	/* not in a town */
	if (ds_readb(CURRENT_TOWN) == 0)
		return;
	/* in a dungeon */
	if (ds_readb(DUNGEON_INDEX) != 0)
		return;
	/* in a location */
	if (ds_readb(LOCATION) != 0)
		return;
	/* in a travel mode */
	if (ds_readb(TRAVELING) != 0)
		return;
	/* unknown */
	if (ds_readb(0xe5d2) != 0)
		return;
	/* unknown */
	if (ds_readb(0x45b8) != 0)
		return;
	/* unknown */
	if (ds_readb(0x2845) != 0)
		return;

	wait_for_vsync();

	set_palette(p_datseg + 0x3e53, 0, 0x20);
	set_palette(p_datseg + 0x3eb3, 0x80, 0x40);
}

unsigned short get_current_season() {
	/* Check Winter */
	if (is_in_byte_array(ds_readb(MONTH), p_datseg + 0x463e))
		return 0;
	/* Check Summer */
	if (is_in_byte_array(ds_readb(MONTH), p_datseg + 0x4642))
		return 2;
	/* Check Spring */
	if (is_in_byte_array(ds_readb(MONTH), p_datseg + 0x463a))
		return 1;

	return 3;
}

void do_timers(void)
{
	Bit8u *ptr;
	unsigned char afternoon;
	Bit8u *hero_i;
	signed short i, di;

	afternoon = 0;

	if (ds_readw(TIMERS_DISABLED) != 0)
		return;

	dawning();

	nightfall();

	/* inc day timer */
	ds_writed(DAY_TIMER, ds_readd(DAY_TIMER) + 1);

	if (ds_readb(0xbcda) == 0) {
		sub_ingame_timers(1);
		sub_mod_timers(1);
	}

	if (ds_readb(0xbcda) == 0) {

		/* set day timer to pm */
		/* TODO: afternoon is useless */
		if (ds_readd(DAY_TIMER) > 0xfd20) {
			ds_writed(DAY_TIMER, ds_readd(DAY_TIMER) - 0xfd20);
			afternoon = 1;
		}

		/* every 5 minutes ingame */
		if (ds_readd(DAY_TIMER) % 0x1c2 == 0) {
			seg002_2f7a(1);
		}

		/* every 15 minutes ingame */
		if (ds_readd(DAY_TIMER) % 0x546 == 0) {
			sub_light_timers(1);
		}
		/* every hour ingame */
		if (ds_readd(DAY_TIMER) % 0x1518 == 0) {
			magical_chainmail_damage();

			/* decrement unicorn timer */
			if (ds_readb(UNICORN_GET_MAP) != 0 &&
				ds_readb(UNICORN_TIMER) != 0) {
					ds_writeb(UNICORN_TIMER,
						ds_readb(UNICORN_TIMER) - 1);
			}

			/* handle sphere timer */
			if (ds_readb(SPHERE_TIMER) != 0) {
				ds_writeb(SPHERE_TIMER,
					ds_readb(SPHERE_TIMER) - 1);

				if (ds_readb(SPHERE_TIMER) == 0) {
					ds_writeb(SPHERE_ACTIVE, 1);
				}
			}

			/* two timers of a dungeon */
			if (ds_readb(0x3cc6) != 0) {
				ds_writeb(0x3cc6, ds_readb(0x3cc6) - 1);
			}
			if (ds_readb(0x3cc7) != 0) {
				ds_writeb(0x3cc7, ds_readb(0x3cc7) - 1);
			}
		}

		/* reset the day timer to 24h time */
		if (afternoon)
			ds_writed(DAY_TIMER, ds_readd(DAY_TIMER) + 0xfd20);
	}

	/* at 6 o'clock in the morninig */
	if (ds_readd(DAY_TIMER) == 0x7e90) {

		hero_i = get_hero(0);

		for (i = 0; i <= 6; i++, hero_i += 0x6da) {
			/* check typus */
			if (host_readb(hero_i + 0x21) == 0)
				continue;

			/* unknown flag */
			if (host_readb(hero_i + 0x9f) == 0)
				continue;

			/* reset flag */
			host_writeb(hero_i + 0x9f, 0);

			ds_writeb(0x2d61 + host_readb(hero_i + 0x87),
				ds_readb(0x2da0 + host_readb(hero_i + 0x87)));

			ds_writew(0x2d48 + host_readb(hero_i + 0x87) * 2,
				ds_readw(0x2d87 + host_readb(hero_i + 0x87) * 2));
			ds_writew(0x2d54 + host_readb(hero_i + 0x87) * 2,
				ds_readw(0x2d93 + host_readb(hero_i + 0x87) * 2));
		}
	}

	/* at 10 o'clock */
	if (ds_readd(DAY_TIMER) == 0xd2f0) {
		hero_i = get_hero(0);

		for (i = 0; i <= 6; i++, hero_i += 0x6da) {
			/* check typus */
			if (host_readb(hero_i + 0x21) == 0)
				continue;
			/* check drunken */
			if (host_readb(hero_i + 0xa1) == 0)
				continue;

			hero_get_sober(hero_i);
		}
	}

	/* poison timer in the mage dungeon */
	if (ds_readd(MAGE_POISON) != 0) {

		/* decrement the timer */
		ds_writed(MAGE_POISON, ds_readd(MAGE_POISON) - 1);

		/* every 15 minutes  do damage */
		if (ds_readd(MAGE_POISON) % 0x546 == 0) {

			ptr = get_hero(0);
			for (i = 0; i <= 6; i++, ptr = get_hero(i)) {

				/* check typus */
				if (host_readb(ptr + 0x21) == 0)
					continue;

				/* get group nr */
				di = host_readb(ptr + 0x87);

				/* hero is in group and in mage dungeon */
				if (ds_readb(CURRENT_GROUP) == di &&
					ds_readb(DUNGEON_INDEX) == 7) {

					switch (ds_readb(DUNGEON_LEVEL)) {
					case 1: {
						/* 1W6-1 */
						sub_hero_le(ptr,
							dice_roll(1, 6,	-1));
						break;
					}
					case 2: {
						/* 1W6+1 */
						sub_hero_le(ptr,
							dice_roll(1, 6, 1));
						break;
					}
					}
				} else {
					if (ds_readb(0x2d6f + di) != 7)
						continue;

					switch (ds_readb(0x2d76 + di)) {
					case 1: {
						/* 1W6-1 */
						sub_hero_le(ptr,
							dice_roll(1, 6, -1));
						break;
					}
					case 2: {
						/* 1W6+1 */
						sub_hero_le(ptr,
							dice_roll(1, 6, 1));
						break;
					}
					}
				}
			}
		}
	}

	/* unknown timer */
	if (ds_readd(0x3fa2) != 0) {
		D1_LOG("Unknown Dungeon Timer\n");
		ds_writed(0x3fa2, ds_readd(0x3fa2) - 1);
	}

	/* at 24 o'clock, daily stuff */
	if (ds_readd(DAY_TIMER) > 0x1fa40) {

		timers_daily();

		seg002_2177();

		/* reset day timer */
		ds_writed(DAY_TIMER, 0);

		/* inc DAY date */
		ds_writeb(DAY_OF_WEEK, ds_readb(DAY_OF_WEEK) + 1);
		ds_writeb(DAY_OF_MONTH, ds_readb(DAY_OF_MONTH) + 1);
		if (ds_readb(DAY_OF_WEEK) == 7)
			ds_writeb(DAY_OF_WEEK, 0);

		/* decrement NPC timers */
		for (i = 1; i < 7; i++) {
			if (ds_readb(0x3601 + i) == 0)
				continue;
			if ((signed char)ds_readb(0x3601 + i) == -1)
				continue;

			ds_writeb(0x3601 + i, ds_readb(0x3601 + i) - 1);
		}

		/* drug timer (phexcaer) */
		if (ds_readb(0x3f76) != 0)
			ds_writeb(0x3f76, ds_readb(0x3f76) - 1);

		/* unknown timer */
		if (ds_readb(0x4332) != 0)
			ds_writeb(0x4332, ds_readb(0x4332) - 1);

		/* calendar */
		if (ds_readb(DAY_OF_MONTH) == 31) {
			/* new month */
			ds_writeb(DAY_OF_MONTH, 1);
			ds_writeb(MONTH, ds_readb(MONTH) + 1);

			/* increment quested months counter */
			if (ds_readw(GOT_MAIN_QUEST) != 0)
				ds_writew(QUESTED_MONTHS,
					ds_readw(QUESTED_MONTHS) + 1);

			/* increment the months the NPC is in the group */
			if (host_readb(get_hero(6) + 0x21) != 0)
				ds_writew(NPC_MONTHS,
					ds_readw(NPC_MONTHS) + 1);

			do_census();

			/* set days of the nameless (negative) */
			if (ds_readb(MONTH) == 13) {
				ds_writeb(DAY_OF_MONTH, -5);
			}
		} else {
			/* new year */
			if (ds_readb(DAY_OF_MONTH) == 0) {
				ds_writeb(MONTH, 1);
				ds_writeb(YEAR, ds_readb(YEAR) + 1);
				ds_writeb(DAY_OF_MONTH, 1);
			}
		}

		/* check if we have a special day */
		ds_writeb(SPECIAL_DAY, 0);

		for (i = 0; ds_readb(0x45b9 + i * 3) != 0xff; i++) {

			if (ds_readb(0x45b9 + i * 3) != ds_readb(MONTH))
				continue;
			if (ds_readb(0x45b9 + 1 + i * 3) != ds_readb(DAY_OF_MONTH))
				continue;

			ds_writeb(SPECIAL_DAY, ds_readb(0x45b9 + 2 + i * 3));
			break;
		}

		passages_recalc();

		/* roll out the weather, used for passages */
		ds_writew(0x331b, random_schick(6));
		ds_writew(0x331d, random_schick(7));

		/* check if times up */
		if (ds_readb(YEAR) == 17 && ds_readb(MONTH) >= 10 &&
			ds_readb(DAY_OF_MONTH) >= 17) {
			ds_writeb(0xc3c1, 4);
		}
	}

	/* at 9 o'clock */
	if (ds_readd(DAY_TIMER) == 0xbdd8)
		passages_reset();
}

/**
 * do_census -	calc census for the bank depot
 *
 * If you put money on the bank, you get 5%.
 * If you borrowed money you pay 15%.
 */
//static
void do_census() {

	signed int val;
	signed short si = 0;
	signed short deposit;

	deposit = ds_readw(0x335c);

	if (deposit > 0)
		si = 1;
	else if (deposit < 0)
			si = -1;

	/* bank transactions, no census */
	if (si == 0)
		return;

	/* convert to heller */
	val = deposit * 10;
	val += (signed short)ds_readw(0x4646);

	if (val < 0)
		/* 15% Interest for borrowed money */
		val += val * 15 / 100 / 12;
	else if (val > 0)
		/* 5% Interest for deposited money */
			val += val * 5 / 100 / 12;

	/* remember the heller */
	ds_writew(0x4646, val % 10);

	if (val < 0) {
		ds_writew(0x4646, -abs((signed short)ds_readw(0x4646)));
	}

	/* save the new deposit */
	ds_writew(0x335c, deposit = val / 10);

	/* fixup over- and underflows */
	if (deposit < 0 && si == 1)
		ds_writew(0x335c, 32760);
	else if (deposit > 0 && si == -1)
			ds_writew(0x335c, -32760);

}

/**
	sub_ingame_timers - subtracts val from the ingame timers
	@val:	vaule to subtract from the ingame timers
*/
void sub_ingame_timers(unsigned int val) {

	short i = 0;

	if (ds_readw(TIMERS_DISABLED))
		return;

	for (i = 0; i < 26; i++) {
		/* dont sub if already zero */
		if (ds_readd(0x2dc4 + i * 4) == 0)
			continue;
		/* subtract val from timer*/
		ds_writed(0x2dc4 + i * 4, ds_readd(0x2dc4 + i * 4) - val);

		/* if the timer is lower zero set to zero */
		if ((int)ds_readd(0x2dc4 + i * 4) < 0)
			ds_writed(0x2dc4 + i * 4, 0);
	}
}

/**
	sub_mod_timers - subtracts val from the modification timers
	@val:	vaule to subtract from the modification timers
*/
void sub_mod_timers(unsigned int val) {
	Bit8u *sp;
	Bit8u *mp;
	unsigned short i, j;
	signed short h_index;
	unsigned char target;
	unsigned char reset_target;

	h_index = -1;

	if (ds_readw(TIMERS_DISABLED))
		return;

	for (i = 0; i < 100; i++) {
		/* make a pointer to the slot */
		sp = p_datseg + 0x2e2c + i * 8;

		/* if timer is 0 continue */
		if (host_readd(sp) == 0)
			continue;

		/* subtract diff from timer */
		host_writed(sp, host_readd(sp) - val);

		/* if timer > 0 continue */
		if ((signed int)host_readd(sp) > 0)
			continue;

		D1_LOG("Mod Timer %d rueckgesetzt\n", i);

		/* set timer to 0 */
		host_writed(sp, 0);

		if (host_readb(sp + 6) != 0) {
			/* target is a hero/npc */

			/* get the hero index from the target */
			target = host_readb(sp + 6);
			for (j = 0; j <= 6; j++) {
				if (host_readb(get_hero(j) + 0x7b) != target)
					continue;
				h_index = j;
				break;
			}

			if (h_index != -1) {
				/* if a hero/npc is determined */

				mp = get_hero(h_index);
				/* make a pointer to the heros attribute mod */
				mp += host_readw(sp + 4);
				/* subtract the mod */
				host_writeb(mp, host_readb(mp) - host_readb(sp + 7));

				if (ds_readb(0x2845) == 20)
					ds_writew(0x2846, 1);

				/* reset target */
				host_writeb(sp + 6, 0);

				/* reset target if no other slots of target */
				reset_target = 1;
				for (j = 0; j < 100; j++) {
					if (ds_readb(0x2e32 + j * 8) != target)
						continue;
					reset_target = 0;
					break;
				}

				if (reset_target)
					host_writeb(get_hero(h_index) + 0x7b, 0);
			} else {
				D1_ERR("Invalid Mod Timer Target %d\n", target);

				/* reset all slots of invalid target */
				for (j = 0; j < 100; j++) {
					if (ds_readb(0x2d32 + j * 8) != target)
						continue;
					host_writeb(sp + 7, 0);
					host_writeb(sp + 6, 0);
					host_writew(sp + 4, 0);
				}
			}

		} else {
			/* target affects the savegame */
			mp = p_datseg + 0x2d34;
			mp += host_readw(sp + 4);
			host_writeb(mp, host_readb(mp) - host_readb(sp + 7));
		}

		/* reset offset, target, and modificator */
		host_writeb(sp + 7, 0);
		host_writeb(sp + 6, 0);
		host_writew(sp + 4, 0);
	}
}

unsigned short get_free_mod_slot() {
	unsigned short i;

	for (i = 0; i < 100; i++) {
		if (ds_readw(0x2e2c + i * 8 + 4))
			continue;
		break;
	}

	if (i != 100)
		return i;

	/* set timer of slot 0 to 1 */
	host_writed(p_datseg + 0x2e2c, 1);
	/* subtract one */
	sub_mod_timers(1);
	return 0;
}

void set_mod_slot(unsigned short slot_nr, Bit32u timer_value, Bit8u *ptr,
	signed char mod, signed char who) {

	Bit8u *mod_ptr;
	unsigned short j;
	unsigned short new_target;
	signed char i;
	signed char target;

	if (who == -1)
		/* mod slot is on savegame */
		mod_ptr = p_datseg + 0x2d34;
	else {
		/* mod slot is on a hero/npc */
		mod_ptr = get_hero(who);

		if (host_readb(mod_ptr + 0x7b) != 0) {
			/* hero/npc has a target number */
			target = host_readb(mod_ptr + 0x7b);
		} else {
			/* hero/npc has no target number */

		for (i = 1; i < 8; i++) {
			new_target = 1;
			for (j = 0; j <= 6; j++) {
				if (i != host_readb(get_hero(j) + 0x7b))
					continue;
				new_target = 0;
			}

			if (new_target) {
				target = i;
				break;
			}
		}

		host_writeb(get_hero(who) + 0x7b, target);
		}

		ds_writeb(0x2e2c + slot_nr * 8 + 6, target);
	}

	ds_writeb(0x2e2c + slot_nr * 8 + 7, mod);
	ds_writew(0x2e2c + slot_nr * 8 + 4, ptr - mod_ptr);
	ds_writed(0x2e2c + slot_nr * 8, timer_value);
	host_writeb(ptr, host_readb(ptr) + mod);
}

/**
 *
 *	@fmin:	five minutes
 */
void seg002_2f7a(unsigned int fmin) {

	Bit8u *hero_i;
	unsigned short i;

	if (ds_readw(TIMERS_DISABLED) != 0)
		return;

	hero_i = get_hero(0);

	for (i = 0; i <= 6; i++, hero_i += 0x6da) {
		/* check class */
		if (host_readb(hero_i + 0x21) == 0)
			continue;

		/* I have no clue what is at offset 0x8b */
		if ((signed int)host_readd(hero_i + 0x8b) > 0) {
			D1_INFO("Unknown Timer %s at 0x8b = %d\n",
				(char*)hero_i + 0x10,
				(signed int)host_readd(hero_i + 0x8b));

			host_writed(hero_i + 0x8b,
				host_readd(hero_i + 0x8b) - fmin * 450);

			if ((int)host_readd(hero_i + 0x8b) < 0)
				host_writed(hero_i + 0x8b, 0);
		}

		/* Timer set after Staffspell */
		if ((int)host_readd(hero_i + 0x8f) > 0) {
			D1_INFO("Unknown Timer %s at 0x8f = %d\n",
				(char*)(hero_i + 0x10),
				host_readd(hero_i + 0x8f));
			host_writed(hero_i + 0x8f, host_readd(hero_i + 0x8f) - fmin * 450);
			if ((int)host_readd(hero_i + 0x8f) < 0)
				host_writed(hero_i + 0x8f, 0);
		}

		ds_writew(0x26bb, 1);
	}
}

/**
 *	sub_light_timers - decrements the light timers
 *	@quarter:	the time in quarters of an hour
 *
 *	This function decrements the timers of burning torches and lanterns.
 *	If the time of the lightsource is up the toch is removed from the
 *	inventory and the lantern is turned off.
*/
void sub_light_timers(signed int quarter) {
	Bit8u *hero_i;
	unsigned short i,j;
	unsigned char tmp;

	if (ds_readw(TIMERS_DISABLED))
		return;

	hero_i = get_hero(0);

	for (i = 0; i <= 6; i++, hero_i += 0x6da) {
		/* check class */
		if (host_readb(hero_i + 0x21) == 0)
			continue;

		if (quarter > 120)
			tmp = 120;
		else
			tmp = quarter & 0xff;

		for (j = 0; j < 23; j++) {
			signed char cur;
			if (host_readw(hero_i + 0x196 + 14 * j) == 0x16) {
				/* Torch, burning */

				cur = host_readb(hero_i + 0x196 + 8 + 14 * j);
				cur -= tmp;
				host_writeb(hero_i + 0x196 + 8 + 14 * j, cur);

				if (cur <= 0) {
					signed short tmp_1;
					host_writeb(hero_i + 0x20, host_readb(hero_i + 0x20) - 1);

					tmp_1 = mem_readw(Real2Phys(ds_readd(ITEMSDAT)) + 0x10d);
					host_writew(hero_i + 0x2d8,
						host_readb(hero_i + 0x2d8) - tmp_1);

					/* Remove Torch from inventory */
					memset(hero_i + 0x196 + 14 * j, 0, 14);
				}
			} else if (host_readw(hero_i + 0x196 + j * 14) == 0xf9) {
				/* Lantern, burning */
				cur = host_readb(hero_i + 0x196 + 8 + 14 * j);
				cur -= tmp;
				host_writeb(hero_i + 0x196 + 8 + 14 * j, cur);

				if (cur <= 0) {
					/* Set timer to 0 */
					host_writeb(hero_i + 0x196 + 8 + j * 14, 0);
					/* Set burning lantern to a not burning lantern */
					host_writew(hero_i + 0x196 + j * 14, 0x19);
				}
			}

		}
	}
}

/**
 * magical_chainmail_damage() - damage if a cursed chainmail is worn
 *
 */
void magical_chainmail_damage(void)
{
	Bit8u *hero_i;
	signed short i;

	if (ds_readw(TIMERS_DISABLED) != 0) {
		return;
	}

	if (ds_readw(TRAVELING) != 0)
		ds_writeb(0x4649, 1);
	else
		ds_writeb(0x4649, 2);

	for (i = 0; i <= 6; i++) {
		/* check typus */
		if (host_readb(get_hero(i) + 0x21) == 0)
			continue;

		hero_i = get_hero(i);

		if (hero_dead(hero_i))
			continue;

		/* unknown */
		if (host_readb(hero_i + 0x9f) != 0) {
			D1_INFO("Bit is set \n");
			continue;
		}

		/* check magical chainmail */
		if (host_readw(hero_i + 0x1b2) != 0xc5) {
			continue;
		}

		sub_hero_le(hero_i, 1);
	}
}

/**
 * herokeeping() - consume food if needed and print warnings to the user
 *
 */
void herokeeping(void)
{
	char buffer[100];
	Bit8u *hero;
	register signed short i, pos;

	if (ds_readw(0xc3c1) != 0)
		return;

	/* for each hero ..*/
	hero = get_hero(0);
	for (i = 0; i <= 6; i++, hero += 0x6da) {

		/* consume food and set messages */
		if (host_readb(hero + 0x21) != 0 &&		/* valid hero */
			ds_readb(0x4649) != 0 &&
			check_hero_no3(hero) &&			/* must be vital */
			!host_readb(hero + 0x9f) &&
			!ds_readb(0x4497)) {


			/* Do the eating */

			/* check for magic bread bag */
			if (get_first_hero_with_item_in_group(0xb8, host_readb(hero + 0x87)) == -1) {
				/* check if the hero has the food amulet */
				if (get_item_pos(hero, 0xaf) == -1) {

					/* eat if hunger > 90 % */
					if ((signed char)host_readb(hero + 0x7f) > 90) {

						/* search for Lunchpack */
						pos = get_item_pos(hero, 0x2d);

						if (pos != -1) {
							/* Lunchpack found, consume quiet */
							ds_writeb(CONSUME_QUIET, 1);
							consume(hero, hero, pos);
							D1_INFO("%s isst etwas\n", (char*)hero + 0x10);
							ds_writeb(CONSUME_QUIET, 0);

							/* search for another Lunchpack */
							/* print last ration message */
							if (get_item_pos(hero, 0x2d) == -1) {
								ds_writeb(FOOD_MESSAGE + i, 6);
							}
						} else {
							/* print ration warning */
							if ((signed char)host_readb(hero + 0x7f) < 100) {
								ds_writeb(FOOD_MESSAGE + i, 4);
							}
						}

					}

					if ((signed char)host_readb(hero + 0x7f) < 100) {
						/* increase food counter food_mod is always 0 or 1 */
						if ((signed char)host_readb(hero + 0x7e) <= 0) {
							/* increase more (2 or 1) */
							host_writeb(hero + 0x7f,
								host_readb(hero + 0x7f) + 2 / (ds_readb(FOOD_MOD) * 2 + 1));
						} else {
							/* increase less (1 or 0) */
							host_writeb(hero + 0x7f,
								host_readb(hero + 0x7f) + 1 / (ds_readb(FOOD_MOD) * 2 + 1));
						}

						/* adjust hunger */
						if ((signed char)host_readb(hero + 0x7f) > 100) {
							host_writeb(hero + 0x7f, 100);
						}
					} else {

						/* */
						if ((signed char)host_readb(hero + 0x7e) <= 0) {
							do_starve_damage(hero, i, 0);
						}
					}
				}
			} else {

				/* set hunger to 20 % */
				if ((signed char)host_readb(hero + 0x7f) > 20) {
					host_writeb(hero + 0x7f, 20);
				}
			}

			/* Do the drinking */

			/* check for magic waterskin in group */
			if ((get_first_hero_with_item_in_group(0xb9, host_readb(hero + 0x87)) == -1) &&

				/* checked with Borland C for correctness */
				((host_readb(hero + 0x87) == ds_readb(CURRENT_GROUP) &&
				(!ds_readb(CURRENT_TOWN) || (ds_readb(CURRENT_TOWN) != 0 && ds_readb(TRAVELING) != 0))) ||
				((host_readb(hero + 0x87) != ds_readb(CURRENT_GROUP) &&
				!ds_readb(0x2d68 + host_readb(hero + 0x87)))))) {

					/* check for food amulett */
					if (get_item_pos(hero, 0xaf) == -1) {

						/* hero should drink something */
						if ((signed char)host_readb(hero + 0x80) > 90) {

							ds_writeb(CONSUME_QUIET, 1);

							/* first check for beer :) */
							pos = get_item_pos(hero, 0x17);

							/* and then for water */
							if (pos == -1) {
								pos = get_full_waterskin_pos(hero);
							}

							if (pos != -1) {
								/* drink it */
								consume(hero, hero, pos);
								D1_INFO("%s trinkt etwas\n", (char*)hero + 0x10);

								/* nothing to drink message */
								if ((get_item_pos(hero, 0x17) == -1)
									&& (get_full_waterskin_pos(hero) == -1)) {
									ds_writeb(FOOD_MESSAGE + i, 5);
								}

							} else {
								/* hero has nothing to drink */
								if ((signed char)host_readb(hero + 0x80) < 100) {
									ds_writeb(FOOD_MESSAGE + i, 3);
								}
							}

							ds_writeb(CONSUME_QUIET, 0);
						}

						if ((signed char)host_readb(hero + 0x80) < 100) {
							/* increase thirst counter food_mod is always 0 or 1 */
							if ((signed char)host_readb(hero + 0x7e) <= 0) {

								host_writeb(hero + 0x80,
									host_readb(hero + 0x80) + 4 / (ds_readb(FOOD_MOD) * 2 + 1));
							} else {

								host_writeb(hero + 0x80,
									host_readb(hero + 0x80) + 2 / (ds_readb(FOOD_MOD) * 2 + 1));
							}

							/* adjust thirst */
							if ((signed char)host_readb(hero + 0x80) > 100) {
								host_writeb(hero + 0x80, 100);
							}

						} else {
							if ((signed char)host_readb(hero + 0x7e) <= 0) {
								do_starve_damage(hero, i, 1);
							}
						}

					}
			} else {

				/* set thirst to 20 % */
				if ((signed char)host_readb(hero + 0x80) > 20) {
					host_writeb(hero + 0x80, 20);
				}
			}
		}

		/* print hero message */
		if (ds_readb(FOOD_MESSAGE + i) != 0 && !ds_readb(0x2c98) &&
			ds_readw(IN_FIGHT) == 0 && !ds_readb(0xbcda)) {

			if (host_readb(hero + 0x21) != 0 &&
				host_readb(hero + 0x87) == ds_readb(CURRENT_GROUP) &&
				!hero_dead(hero) &&
				(!(unsigned char)ds_readb(TRAVELING) || ds_readb(0x26a4 + i) != ds_readb(FOOD_MESSAGE + i))) {

					/* switch message types */
					if (ds_readb(FOOD_MESSAGE + i) == 1) {
						/* thirst critical */
						sprintf(buffer, (char*)get_ltx(0x380),
						(char*)hero + 0x10, (char*)Real2Host(GUI_get_ptr(host_readb(hero + 0x22), 1)));
					} else if (ds_readb(FOOD_MESSAGE + i) == 2) {
						/* hunger critical */
						sprintf(buffer, (char*)get_ltx(0x37c),
						(char*)hero + 0x10, (char*)Real2Host(GUI_get_ptr(host_readb(hero + 0x22), 1)));
					} else if (ds_readb(FOOD_MESSAGE + i) == 3) {
						/* thirst warning */
						sprintf(buffer, (char*)get_ltx(0xc74),
						(char*)hero + 0x10, (char*)Real2Host(GUI_get_ptr(host_readb(hero + 0x22), 1)));
					} else if (ds_readb(FOOD_MESSAGE + i) == 4) {
						/* hunger critical */
						sprintf(buffer, (char*)get_ltx(0xc78),
						(char*)hero + 0x10, (char*)Real2Host(GUI_get_ptr(host_readb(hero + 0x22), 1)));
					} else if (ds_readb(FOOD_MESSAGE + i) == 5) {
						/* thirst last ration */
						sprintf(buffer, (char*)get_ltx(0xc7c),
						(char*)hero + 0x10, (char*)Real2Host(GUI_get_ptr(host_readb(hero + 0x22), 1)));
					} else {
						/* hunger last ration */
						sprintf(buffer, (char*)get_ltx(0xc80),
						(char*)hero + 0x10, (char*)Real2Host(GUI_get_ptr(host_readb(hero + 0x22), 1)));
					}

					ds_writeb(0x26a4 + i, ds_readb(FOOD_MESSAGE + i));

					GUI_output((Bit8u*)buffer);

					if (ds_readb(0x2845) == 20) {
						ds_writew(0x2846, 1);
					}
			}

			ds_writeb(FOOD_MESSAGE + i, 0);
		}


		/* print unconscious message */
		if ((ds_readb(0x4212 + i) != 0) && !ds_readb(0x2c98)) {

			if (host_readb(hero + 0x21) != 0 &&
				host_readb(hero + 0x87) == ds_readb(CURRENT_GROUP) &&
				!hero_dead(hero)) {

					/* prepare output */
					sprintf(buffer, (char*)get_ltx(0xc54),
						(char*)hero + 0x10);

					/* print output */
					GUI_output((Bit8u*)buffer);

					if (ds_readb(0x2845) == 20) {
						ds_writew(0x2846, 1);
					}
			}

			/* reset condition */
			ds_writeb(0x4212 + i, 0);
		}
	}

	ds_writeb(0x4649, 0);
}

void set_and_spin_lock() {
	ds_writew(0xbcd6, 1);
	while (ds_readw(0xbcd6)) {};
}

void passages_recalc() {
	Bit8u *p;
	unsigned short locvar;
	unsigned short di,i;

	signed char tmp;

	p = p_datseg + 0x6f00;

	switch (get_current_season()) {
		case 2:
			/* summer */
			locvar = 2;
			break;
		case 0:
			/* winter */
			locvar = 4;
			break;
		default:
			locvar = 0;
	}

	for (i = 0; i < 45; p += 8, i++) {
		tmp = host_readb(p + 4);
		host_writeb(p + 4, tmp - 1);

		if (tmp != -1)
			continue;

		host_writeb(p + 7, (unsigned char)random_interval(70, 130));
		host_writeb(p + 4, random_interval(0, (char)host_readb(p + 3) * 10 + (char)host_readb(p + 3) * locvar) / 10);

		di = random_schick(100);

		if (host_readb(p + 5) == 0) {
			if (di <= 50)
				tmp = 0;
			else if (di <= 80)
				tmp = 1;
			else if (di <= 95)
				tmp = 2;
			else
				tmp = 3;
		} else {
			if (di <= 10)
				tmp = 4;
			else if (di <= 40)
				tmp = 5;
			else if (di <= 80)
				tmp = 6;
			else
				tmp = 7;
		}
		host_writeb(p + 7, tmp);

	}

	/* If a passage is hired decrement Passage days timer */
	if (ds_readb(0x42ae) == 0xaa)
		ds_writeb(0x42af, ds_readb(0x42af) - 1);
}

void passages_reset() {
	Bit8u *p;
	unsigned short i;

	p = p_datseg + 0x6f00;

	/* Orig-BUG: the loop operates only on the first element
		sizeof(element) == 8 */
	/* for (i = 0; i < 45; i++) */

	for (i = 0; i < 45; p += 8, i++)
		if (host_readb(p + 4) == 0)
			host_writeb(p + 4, -1);

	/* If a passage is hired and the timer is zero, reset the passage */
	if ((ds_readb(0x42ae) == 170) && (ds_readb(0x42af) == 0))
		ds_writeb(0x42ae, 0);
}

/**
 * timewarp() -	forwards the ingame time
 * @time:	ticks to forward
 */
void timewarp(Bit32u time)
{
	signed int i;
	signed short td_bak;
	signed short hour_diff;
	unsigned int timer_bak;
	register signed short hour_old, hour_new;

	timer_bak = ds_readd(DAY_TIMER);
	td_bak = ds_readw(TIMERS_DISABLED);
	ds_writew(TIMERS_DISABLED, 0);

	ds_writeb(0xbcda, 1);

	for (i = 0; i < time; i++) {
		do_timers();
#ifdef M302de_ORIGINAL_BUGFIX
		if (i % 768 == 0)
			wait_for_vsync();
#endif
	}

	sub_ingame_timers(time);

	sub_mod_timers(time);

	seg002_2f7a(time / 0x1c2);

	sub_light_timers(time / 0x546);

	/* calculate hours */
	hour_old = timer_bak / 0x1518;
	hour_new = ds_readd(DAY_TIMER) / 0x1518;

	if (hour_old != hour_new) {
		if (hour_new > hour_old) {
			hour_diff = hour_new - hour_old;
		} else {
			hour_diff = 23 - hour_old + hour_new;
		}

		for (i = 0; hour_diff > i; i++) {
			magical_chainmail_damage();
			herokeeping();
		}
	}

	/* restore variables */
	ds_writeb(0xbcda, 0);
	ds_writew(TIMERS_DISABLED, td_bak);
}

/**
 * timewarp_until() -	forwards the ingame time
 * @time:	ticks to forward to e.g 6 AM
 */
void timewarp_until(Bit32u time)
{
	unsigned int i;
	signed short td_bak;
	signed short j;
	signed short hour_diff;
	unsigned int timer_bak;
	register signed short hour_old, hour_new;

	i = 0;
	timer_bak = ds_readd(DAY_TIMER);
	td_bak = ds_readw(TIMERS_DISABLED);
	ds_writew(TIMERS_DISABLED, 0);

	ds_writeb(0xbcda, 1);

	do {
		do_timers();
		i++;
#ifdef M302de_ORIGINAL_BUGFIX
		if (i % 768 == 0)
			wait_for_vsync();
#endif
	} while (time != ds_readd(DAY_TIMER));

	sub_ingame_timers(i);

	sub_mod_timers(i);

	seg002_2f7a(i / 0x1c2);

	sub_light_timers(i / 0x546);

	/* calculate hours */
	hour_old = timer_bak / 0x1518;
	hour_new = ds_readd(DAY_TIMER) / 0x1518;

	if (hour_old != hour_new) {
		if (hour_new > hour_old) {
			hour_diff = hour_new - hour_old;
		} else {
			hour_diff = 23 - hour_old + hour_new;
		}

		for (j = 0; j < hour_diff; j++) {
			magical_chainmail_damage();
			herokeeping();
		}
	}

	/* restore variables */
	ds_writeb(0xbcda, 0);
	ds_writew(TIMERS_DISABLED, td_bak);
}

/**
	restore_splash - decrements splash timer and restores picture
*/
void dec_splash() {
	unsigned char i;

	for (i = 0; i <= 6; i++) {
		/* I have no clue */
		if (ds_readb(0x2c98))
			continue;
		/* Check if splash timer is 0 */
		if (ds_readb(0xbccf + i) == 0)
			continue;
		/* decrement splash timer */
		ds_writeb(0xbcff + i, ds_readb(0xbcff + i) - 1);
		/* Check splash timer again if 0 */
		if (ds_readb(0xbccf + i) == 0)
			continue;
		/* I have no clue */
		/* Could be in fight */
		if (ds_readb(0x2845))
			continue;
		/* check if hero is dead */
		if (hero_dead(get_hero(i)))
			continue;

		restore_rect(Real2Phys(ds_readd(0xd2ff)), get_hero(i) + 0x2da, ds_readw(0x2d01 + i * 2), 157, 32, 32);

	}
}

/**
	draw_splash - draws a splash
	@index:	on which slot the splash is drawn
	@type:	kind of damage (0 = LE / !0 = AE)
*/
//static
void draw_splash(unsigned short index, unsigned short type) {
	Bit8u *splash;

	/* Could be in fight */
	if (ds_readb(0x2845))
		return;

	if (type == 0)
		/* splash 1 / red / LE */
		splash = Real2Host(ds_readd(SPLASH_LE));
	else
		/* splash 2 / yellow / AE */
		splash = Real2Host(ds_readd(SPLASH_AE));

	restore_rect_rle(Real2Phys(ds_readd(0xd2ff)), splash, ds_readw(0x2d01 + index*2), 157, 32, 32, 2);

	/* how long the splash should be displayed */
	ds_writeb(0xbccf + index, 10);
}

void wait_for_keyboard2() {
	while (CD_bioskey(1)) {
		D1_LOG("loop in %s\n", __func__);
		bioskey(0);
	}
}

void wait_for_keypress() {

	unsigned short si;
	/* flushall() */

	ds_writew(0xc3d5, 0);

	do {
		if (!CD_bioskey(1))
			continue;

		si = bioskey(0);

		if ((si & 0xff) != 0x20)
			continue;
		if (ds_readw(0xc3c5) != 0)
			continue;

		seg002_47e2();

		do {} while (!CD_bioskey(1));

		seg002_484f();
		break;

	} while (!CD_bioskey(1) && ds_readw(0xc3d5) == 0);

	if (CD_bioskey(1))
		si = bioskey(0);

	ds_writew(0xc3d5, 0);
}

void delay_or_keypress(Bit16u time)
{
	CPU_Push16(time);
	CALLBACK_RunRealFar(reloc_game + 0x51e, 0x40d1);
	CPU_Pop16();

}

unsigned int swap_u32(unsigned int v) {
	return ((v >> 24) & 0xff) | ((v >> 16) & 0xff) << 8 |
		((v >> 8) & 0xff) << 16 | (v&0xff) << 24;

}

/**
 *	alloc_EMS -	allocates EMS memory
 *	@bytes:		bytes to allocate
 *
 *	Returns an EMS handle, to access the memory.
 */
unsigned short alloc_EMS(Bit32u bytes) {

	unsigned short pages;
	unsigned short handle;

	pages = (bytes / 0x4000) + 1;

	if (EMS_get_num_pages_unalloced() < pages) {
		D1_ERR("EMS out of free pages %d/%d\n",
			pages, EMS_get_num_pages_unalloced());
		return 0;
	}

	handle = EMS_alloc_pages(pages);

	if (handle == 0) {
		D1_ERR("EMS cant alloc %d pages\n", pages);
		return 0;
	}

	return handle;
}

void from_EMS(RealPt dst, unsigned short handle, Bit32u bytes)
{
	RealPt ptr;
	unsigned short v1, v2, di;
	signed short si;

	di = bytes / 0x4000 + 1;
	si = 0;
	v1 = 0;

	do {
		EMS_map_memory(handle, v1++, 0);
		ptr = (si << 0x0e) + dst;
		si++;

		if (bytes - 0x4000 < 0)
			v2 = bytes;
		else
			v2 = 0x4000;

		bytes -= 0x4000;

		bc_memmove(EMS_norm_ptr(ptr), ds_readd(0x4baa), v2);
		di--;
	} while (di != 0);

}

void to_EMS(unsigned short handle, RealPt src, Bit32u bytes)
{
	RealPt ptr;
	unsigned short v1, v2, di;
	signed short si;

	di = bytes / 0x4000 + 1;
	si = 0;
	v1 = 0;

	do {
		EMS_map_memory(handle, v1++, 0);
		ptr = (si << 0x0e) + src;
		si++;

		if (bytes - 0x4000 < 0)
			v2 = bytes;
		else
			v2 = 0x4000;

		bytes -= 0x4000;

		bc_memmove(ds_readd(0x4baa), EMS_norm_ptr(ptr), v2);
		di--;
	} while (di != 0);

}

void set_to_ff() {
	unsigned i;

	for (i = 0; i < 9; i++)
		ds_writeb(0xbd38 + i, 0xff);
}

/* 0x43fd */
/**
 * draw_loc_icons - draws the icons of locations
 * @icons:	number of icons
 * @... :	icon ids
 */
void draw_loc_icons(signed short icons, ...)
{
	signed short icons_bak[9];
	va_list arguments;
	signed short i, changed;

	changed = 0;

	/* save icon ids in local variable */
	for (i = 0; i < 9; i++) {
		icons_bak[i] = ds_readbs(0xbd38 + i);
		ds_writeb(0xbd38 + i, -1);
	}

	va_start(arguments, icons);

	for (i = 0; i < icons; i++) {
		ds_writeb(0xbd38 + i, va_arg(arguments, int));

		if (ds_readbs(0xbd38 + i) != icons_bak[i]) {
			changed = 1;
		}
	}

	if (icons_bak[i] != -1)
		changed = 1;

	if (changed && ds_readb(0x2845) == 0) {
		draw_icons();
	}
}

unsigned short mod_timer(short val) {
	if (ds_readd(DAY_TIMER) % val == 0)
		return 1;

	return 0;
}

void draw_compass() {

	struct nvf_desc n;
	signed short height;
	signed short width;

	/* No compass in a location */
	if (ds_readb(LOCATION))
		return;
	/* Has something to do with traveling */
	if (ds_readb(0xb132))
		return;
	/* Not in town or dungeon */
	if (!ds_readb(DUNGEON_INDEX) && !ds_readb(CURRENT_TOWN))
		return;
	/* I have no clue */
	if (ds_readb(0x4475) == 2)
		return;

	/* set src */
	n.dst = Real2Host(ds_readd(0xd2f7));
	/* set dst */
	n.src = Real2Host(ds_readd(0xd2b1));
	/* set nr */
	n.nr = ds_readbs(DIRECTION);
	/* set type*/
	n.type = 0;

	n.height = (Bit8u*)&height;
	n.width = (Bit8u*)&width;

	/* process the nvf */
	process_nvf(&n);

	/* set x and y values */
	ds_writew(0xc011, 94);
	ds_writew(0xc013, 115);
	ds_writew(0xc015, 145);
	ds_writew(0xc017, 136);

	/* set source */
	ds_writed(0xc019, ds_readd(0xd2f7));

	update_mouse_cursor();
	do_pic_copy(2);
	refresh_screen_size();

}

short can_merge_group() {
	short retval = -1;
	char cur_heroes;
	short i;

	cur_heroes = ds_readb((short)ds_readb(CURRENT_GROUP) + 0x2d36);
	if (cur_heroes == ds_readb(0x2d3c))
		return retval;

	for (i = 0; i < 6; i++) {
		if (i == (char)ds_readb(CURRENT_GROUP))
			continue;
		if (0 == ds_readb(i + 0x2d36))
			continue;
		/* check XTarget */
		if (ds_readw(i * 2 + 0x2d48) != ds_readw(X_TARGET))
			continue;
		/* check YTarget */
		if (ds_readw(i * 2 + 0x2d54) != ds_readw(Y_TARGET))
			continue;
		/* check Location */
		if (ds_readb(0x2d61 + i) != ds_readb(LOCATION))
			continue;
		/* check currentTown */
		if (ds_readb(0x2d68 + i) != ds_readb(CURRENT_TOWN))
			continue;
		/* check DungeonIndex */
		if (ds_readb(0x2d6f + i) != ds_readb(DUNGEON_INDEX))
			continue;
		/* check DungeonLevel */
		if (ds_readb(0x2d76 + i) != ds_readb(DUNGEON_LEVEL))
			continue;

		retval = i;
	}

	return retval;
}

unsigned short div16(unsigned char val) {
	return val >> 4;
}

/* This function is called in shops at sell/buy screens */
void select_with_mouse(Bit8u *p1, Bit8u *p2) {
	unsigned short i;

	/* something mouse related */
	if (ds_readw(0xc3c7) != 2)
		return;

	for (i = 0; i < 15; i++) {
		if (ds_readw(0x46a3 + i * 2) > ds_readw(0x299c))
			continue;
		if (ds_readw(0x46a3 + i * 2) + 50 < ds_readw(0x299c))
			continue;
		if (ds_readw(0x46c1 + i * 2) > ds_readw(0x299e))
			continue;
		if (ds_readw(0x46c1 + i * 2) + 17 < ds_readw(0x299e))
			continue;
		if (host_readw(p2 + i * 7) == 0)
			continue;

		host_writew(p1, i);
		return;
	}
}

void select_with_keyboard(Bit8u *p1, Bit8u *p2) {
	unsigned short pos;

	pos = host_readw(p1);

	switch (ds_readw(0xc3d9)) {
		/* Key UP */
		case 'H': {
			if (pos) {
				pos--;
			} else {
				pos = 14;
				while (host_readw(p2 + pos * 7) == 0) {
					pos--;
				}
			}
			break;
		}
		/* Key DOWN */
		case 'P': {
			if (pos < 14 && (host_readw(p2 + (pos + 1) * 7) != 0))
				pos++;
			else
				pos = 0;
			break;
		}
		/* Key RIGHT */
		case 'M': {
			if (pos < 10) {
				if (host_readw(p2 + (pos + 5) * 7) != 0)
					pos += 5;
			} else
				pos -= 10;
			break;
		}
		/* Key LEFT */
		case 'K': {
			if (pos <= 4) {
				if (host_readw(p2 + (pos + 10) * 7) != 0)
					pos += 10;
			} else
				pos -= 5;
		}
	}

	host_writew(p1, pos);
}

/**
	set_automap_tile - marks a tile in the automap as seen
	@x:	X xoordinate
	@y:	Y xoordinate
*/
void set_automap_tile(unsigned short x, unsigned short y) {
	unsigned short offs;
	char bit, tiles;

	offs = y * 4 + x / 8;
	bit = ds_readb(0x7d4a + (x & 7));
	tiles = ds_readb(0xe442 + offs);
	ds_writeb(0xe442 + offs, tiles | bit);
}

/**
	set_automap_tile - marks all sourrounding tiles in the automap as seen
	@x:	X xoordinate
	@y:	Y xoordinate
*/
void set_automap_tiles(unsigned short x, unsigned short y) {

	/* set upper line */
	if (y > 0) {
		if (x > 0)
			set_automap_tile(x - 1, y - 1);
		set_automap_tile(x, y - 1);
		if (ds_readb(0xbd94) - 1 > x)
			set_automap_tile(x + 1, y - 1);
	}

	/* set middle line */
	if (x > 0)
		set_automap_tile(x - 1, y);
	set_automap_tile(x, y);
	if (ds_readb(0xbd94) - 1 > y)
		set_automap_tile(x + 1, y);

	/* set lower line */
	if (y < 15) {
		if (x > 0)
			set_automap_tile(x - 1, y + 1);
		set_automap_tile(x, y + 1);
		if (ds_readb(0xbd94) - 1 > x)
			set_automap_tile(x + 1, y + 1);
	}
}

/**
*/
void seg002_47e2() {
	Bit8u bak[24];

	/* save gfx settings to stack */
	struct_copy(bak, p_datseg + 0xc00d, 24);

	/* set range 0,0 - 7,7 */
	ds_writew(0xc011, 0);
	ds_writew(0xc013, 0);
	ds_writew(0xc015, 7);
	ds_writew(0xc017, 7);

	/* set destination */
	ds_writed(0xc00d, ds_readd(0xd2ff));
	/* set source */
	ds_writed(0xc019, RealMake(datseg, 0xbc63));

	do_save_rect();

	GUI_print_char('P', 0, 0);

	/* restore gfx settings from stack */
	struct_copy(p_datseg + 0xc00d, bak, 24);
}

/**
*/
void seg002_484f() {

	Bit8u bak[24];

	/* save gfx settings to stack */
	struct_copy(bak, p_datseg + 0xc00d, 24);

	/* set range 0,0 - 7,7 */
	ds_writew(0xc011, 0);
	ds_writew(0xc013, 0);
	ds_writew(0xc015, 7);
	ds_writew(0xc017, 7);

	/* set destination */
	ds_writed(0xc00d, ds_readd(0xd2ff));
	/* set source */
	ds_writed(0xc019, RealMake(datseg, 0xbc63));

	do_pic_copy(0);

	/* restore gfx settings from stack */
	struct_copy(p_datseg + 0xc00d, bak, 24);
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
	if (hero_sleeps(hero))
		return 0;
	/* Check if dead */
	if (hero_dead(hero))
		return 0;
	/* Check if stoned */
	if (hero_stoned(hero))
		return 0;
	/* Check if unconscious */
	if (hero_unc(hero))
		return 0;
	/* Check if cursed */
	if (hero_cursed(hero))
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
	if (hero_dead(hero))
		return 0;
	/* Check if stoned */
	if (hero_stoned(hero))
		return 0;
	/* Check if unconscious */
	if (hero_unc(hero))
		return 0;
	/* Check if cursed */
	if (hero_cursed(hero))
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
	if (hero_dead(hero))
		return 0;
	/* Check if stoned */
	if (hero_stoned(hero))
		return 0;
	/* Check if unconscious */
	if (hero_unc(hero))
		return 0;

	return 1;
}

unsigned short is_hero_available_in_group(Bit8u *hero) {

	if (check_hero(hero) == 0)
		return 0;
	/* Check if in group */
	if (host_readb(hero + 0x87) != ds_readb(CURRENT_GROUP))
		return 0;

	return 1;
}

/*
 *	sub_ae_splash -	subtract current ae with a splash
 *	@hero:	the magicuser
 *	@ae:	astralenergy to subtract
 */
void sub_ae_splash(Bit8u *hero, signed short ae) {

	unsigned short tmp;

	if (hero_dead(hero) || ae <= 0)
		return;

	tmp = ds_readw(0xc3cb);
	ds_writew(0xc3cb, 0);

	/* If Mage has 4th Staffspell */
	if (host_readb(hero + 0x21) == 9 && host_readb(hero + 0x195) >= 4) {
		ae -= 2;
		if (ae < 0)
			ae = 0;
	}

	/* Calc new AE */
	host_writew(hero + 0x64, (signed short)(host_readw(hero + 0x64) - ae));
	/* Draw the splash */
	draw_splash(get_hero_index(hero), 1);
	/* set AE to 0 if they have gotten lower than 0 */
	if ((signed short)host_readw(hero + 0x64) < 0)
		host_writew(hero + 0x64, 0);

	ds_writew(0xc3cb, tmp);

#ifdef M302de_ORIGINAL_BUGFIX
	/* AE Bar was not updated in Pseudo 3D mode */
	if (ds_readw(IN_FIGHT) == 0 && ds_readw(0xc3cf) != 0) {
		/* redraw AE Bar */
		draw_bar(1, get_hero_index(hero), host_readw(hero + 0x64),
			host_readw(hero + 0x62), 0);
	}
#endif

}

/**
	add_hero_ae - add AE points to heros current AE
*/
void add_hero_ae(Bit8u* hero, short ae) {

	short tmp;

	/* dont add AE if hero is dead or ae = 0 */
	if (hero_dead(hero) || ae == 0)
		return;

	tmp = ds_readw(0xc3cb);
	ds_writew(0xc3cb, 0);

	/* add AE to heros current AE */
	host_writew(hero+0x64, host_readw(hero+0x64) + ae);

	/* if current AE is greater than AE maximum
		set current AE to AE maximum */
	if (host_readw(hero+0x64) > host_readw(hero+0x62))
		host_writew(hero+0x64, host_readw(hero+0x62));

	ds_writew(0xc3cb, tmp);
}

/**
 * sub_hero_le() - subtracts LE from a hero
 * @hero:	pointer to the hero
 * @le:		LE to loose
 *
 */
void sub_hero_le(Bit8u *hero, signed short le)
{
	Bit8u *hero_i, *ptr;
	signed short bak, old_le, i;

	if (!hero_dead(hero) && le > 0) {

		bak = ds_readw(0xc3cb);
		ds_writew(0xc3cb, 0);

		/* do the damage */
		old_le = host_readw(hero + 0x60);
		host_writew(hero + 0x60, old_le - le);

		if (hero_sleeps(hero)) {
			/* awake him/her */
			host_writeb(hero + 0xaa,
				host_readb(hero + 0xaa) & 0xfd);

			/* in fight mode */
			if (ds_readw(IN_FIGHT) != 0) {
				ptr = Real2Host(FIG_get_ptr(host_readb(hero + 0x81)));

				/* update looking dir and other  */
				host_writeb(ptr + 2, host_readb(hero + 0x82));
				host_writeb(ptr + 0xd, 0xff);
				host_writeb(ptr + 5, 0);
				host_writeb(ptr + 6, 0);
			}
		}

		draw_splash(get_hero_index(hero), 0);

		if ((signed short)host_readw(hero + 0x60) < 0) {
			/* set LE to 0 */
			host_writew(hero + 0x60, 0);

			/* mark hero as dead */
			host_writew(hero + 0xaa, host_readw(hero + 0xaa) | 1);

			/* unknown */
			ds_writeb(0x4212 + get_hero_index(hero), 0);

			/* unknown */
			host_writeb(hero + 0x84, 100);

			if (ds_readb(0x2845) == 0)
				ds_writeb(0x46df, 1);

			/* reset sickness */
			for (i = 1; i <= 7; i++) {
				host_writeb(hero + 0xae + i * 5, 0);
				host_writeb(hero + 0xaf + i * 5, 0);
			}

			/* reset poison */
			for (i = 1; i <= 9; i++) {
				host_writeb(hero + 0xd6 + i * 5, 0);
				host_writeb(hero + 0xd7 + i * 5, 0);
			}

			if (ds_readw(CURRENT_FIG_NR) == 0xc0) {
				if (hero == Real2Host(ds_readd(0x3e20))) {
					ds_writew(0xc3c1, 1);
					ds_writew(IN_FIGHT, 0);
				}
			}

			if (ds_readb(0xa842) != 0 && ds_readw(IN_FIGHT) == 0 &&
				(count_heroes_available_in_group() == 0 ||
				(count_heroes_available_in_group() == 1 && is_hero_available_in_group(get_hero(6))))) {

				ds_writeb(0x4333, 99);

				for (hero_i = get_hero(0), i = 0; i <=6; i++, hero_i = get_hero(i)) {
					/* no typus */
					if (host_readb(hero_i + 0x21) == 0)
						continue;

					/* not in current group */
					if (host_readb(hero + 0x87) != ds_readb(CURRENT_GROUP))
						continue;

					hero_disappear(hero_i, i, -1);
				}
			}

		} else {
			if (old_le >= 5 && (signed short)host_readw(hero + 0x60) < 5) {
				/* make hero unsonscious */
				host_writeb(hero + 0xaa,
					host_readb(hero + 0xaa) | 0x40);

				/* unknown yet */
				host_writeb(hero + 0x84, 10);

				/* unknown yet */
				ds_writeb(0x4212 + get_hero_index(hero), 1);

				/* in fight mode */
				if (ds_readw(IN_FIGHT) != 0) {
					ptr = Real2Host(FIG_get_ptr(host_readb(hero + 0x81)));
					host_writeb(ptr + 2,
						ds_readb(0x11e4 + host_readb(hero + 0x9b) * 2) + host_readb(hero + 0x82));
					host_writeb(ptr + 0x0d, 0xff);
					host_writeb(ptr + 5,
						ds_readb(0x1210 + host_readb(hero + 0x9b) * 8 + host_readb(hero + 0x82) * 2));
					host_writeb(ptr + 6,
						ds_readb(0x1211 + host_readb(hero + 0x9b) * 8 + host_readb(hero + 0x82) * 2));


					FIG_add_msg(7, 0);

					if (ds_readw(CURRENT_FIG_NR) == 0xc0) {
						if (hero == Real2Host(ds_readd(0x3e20))) {
							ds_writew(0xc3c1, 1);
							ds_writew(IN_FIGHT, 0);
						}
					}
				}
			}
		}
	}

	ds_writew(0xc3cb, bak);

	if (ds_readw(IN_FIGHT) == 0) {
		ds_writeb(CHECK_PARTY, 1);
	}
}

/**
 *	add_hero_le	-	regenerates LE of a hero
 *	@hero:		pointer to the hero
 *	@le:		LE to be regenerated
 *
 *	This functions does some magic in fights under circumstances.
 */
void add_hero_le(Bit8u *hero, signed short le) {

	RealPt ptr;
	unsigned short val_bak, tmp, ret;

	/* dead heroes never get LE */
	if (hero_dead(hero))
		return;
	/* this function is only for adding */
	if (le <= 0)
		return;

	val_bak = ds_readw(0xc3cb);
	ds_writew(0xc3cb, 0);

	/* add LE */
	host_writew(hero + 0x60, host_readw(hero + 0x60) + le);

	/* set LE to maximum if greater than maximum */
	if (host_readw(hero + 0x60) > host_readw(hero + 0x5e))
		host_writew(hero + 0x60, host_readw(hero + 0x5e));

	/* if current LE is >= 5 and the hero is unconscissous */
	if (host_readw(hero + 0x60) >= 5 && hero_unc(hero)) {

		/* awake */
		host_writeb(hero + 0xaa, host_readb(hero + 0xaa) & 0xbf);

		/* maybe if we are in a fight */
		if (ds_readw(IN_FIGHT)) {
			ptr = FIG_get_ptr(host_readb(hero + 0x81));
			ret = seg039_0023(hero);

			if (ret != -1) {
				tmp = (signed char)host_readb(hero + 0x9b) * 12;
				tmp += 4 * ret;
				tmp +=(signed char)host_readb(hero + 0x82);
				mem_writeb(Real2Phys(ptr) + 2, ds_readb(0x10d0 + tmp));
			} else {
				mem_writeb(Real2Phys(ptr) + 2, host_readb(hero + 0x82));
			}
			mem_writeb(Real2Phys(ptr) + 0x0d, 0xff);
			mem_writeb(Real2Phys(ptr) + 5, 0x00);
			mem_writeb(Real2Phys(ptr) + 6, 0x00);
		}
	}


	ds_writew(0xc3cb, val_bak);
}

/**
 *	add_group_le	-	regenerates LE of a group
 *	@le:		LE to be regenerated
 *
 */
void add_group_le(signed short le) {

	Bit8u *hero;
	unsigned short i;

	hero = get_hero(0);
	for (i = 0; i <= 6; i++, hero += 0x6da) {
		/* check class */
		if (host_readb(hero + 0x21) == 0)
			continue;
		/* check group */
		if (host_readb(hero + 0x87) != ds_readb(CURRENT_GROUP))
			continue;

		add_hero_le(hero, le);
	}
}

/**
 * do_starve_damage() - damages starving heros
 * @hero:	a pointer to the hero
 * @index:	the index number of the hero
 * @type:	the type of message which should be printed
		0 = hunger / 1 = thirst
 */
void do_starve_damage(Bit8u *hero, Bit16u index, Bit16u type)
{
	Bit16u bak;

	/* check if the hero is dead */
	if (hero_dead(hero))
		return;

	/* save this value locally */
	bak = ds_readw(0xc3cb);
	ds_writew(0xc3cb, 0);

	/* decrement the heros LE */
	host_writew(hero + 0x60, host_readw(hero + 0x60) - 1);

	/* set the critical message type for the hero */
	if (type != 0)
		/* thirst */
		ds_writeb(FOOD_MESSAGE + index, 1);
	else
		/* hunger */
		ds_writeb(FOOD_MESSAGE + index, 2);

	if (host_readw(hero + 0x60) <= 0) {

		/* don't let the hero die */
		host_writew(hero + 0x60, 1);

		/* decrement the max LE and save them at 0x7a */
		if (host_readw(hero + 0x5e) >= 2) {
			host_writew(hero + 0x5e, host_readw(hero + 0x5e) - 1);
			host_writeb(hero + 0x7a, host_readb(hero + 0x7a) + 1);
		}
	}

	/* restore the locally save value */
	ds_writew(0xc3cb, bak);

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

	if (si == 20) {
		D1_INFO("Ungluecklich\n");
		return -99;
	}

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
short test_attrib3(Bit8u* hero, unsigned short attrib1, unsigned short attrib2, unsigned short attrib3, signed char bonus) {

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
				D1_INFO(" -> UNGLUECKLICH! nicht bestanden\n");
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
	get_random_hero - return index of a randomly choosen hero
*/
/* Original-Bug: can loop forever if the position is greater than the
	number of heroes in the group */
unsigned short get_random_hero() {
	Bit8u *hero;
	unsigned short cur_hero;
	unsigned short i, pos = 0;
	char cur_group;

	do {
		/* get number of current group */
		cur_group = ds_readb(CURRENT_GROUP);
		cur_hero = random_schick(ds_readb(0x2d36 + cur_group));
		cur_hero--;

		/* Original-Bugfix */
		hero = get_hero(0);
		for (i = 0; i <= 6; i++, hero += 0x6da) {
			/* Check if hero has a class */
			if (host_readb(hero+0x21) == 0)
				continue;
			/* Check if in current group */
			if (host_readb(hero + 0x87) != cur_group)
				continue;

			if (pos == cur_hero) {
				pos = i;
				break;
			}

			pos++;
		}

		hero = get_hero(pos);

		/* Check if hero has a class */
		if (host_readb(hero+0x21) == 0)
			continue;
		/* Check if in current group */
		if (host_readb(hero+0x87) != cur_group)
			continue;
		/* Check if dead */
		if (hero_dead(hero))
			continue;

		return pos;

	} while (1);
}

/**
	get_party_money - summs up the money of the current party
*/
Bit32s get_party_money() {
	Bit8u* hero;
	Bit32s sum;
	short i;

	sum = 0;
	hero = get_hero(0);

	for (i=0; i < 6; i++, hero+=0x6da) {
		/* Check if hero has a class */
		if (host_readb(hero+0x21) == 0)
			continue;
		/* Check if hero is in current party */
		if (host_readb(hero+0x87) != ds_readb(CURRENT_GROUP))
			continue;
		sum += host_readd(hero+0x2c);
	}

	return sum;
}

/**
 *	set_party_money -	shares money between current party members
 *	@money:		the money to share
 *
 *	If only a NPC is in that party, he gets all the money.
 *	If a hero is dead and in the current party, his money is set to 0.
*/
void set_party_money(Bit32s money) {
	Bit8u *hero;
	Bit32s hero_money;
	unsigned short i, heroes = 0;

	if (money < 0)
		money = 0;

	heroes = count_heroes_in_group();

	/* set hero to NPC */
	hero = get_hero(6);
	/* if we have an NPC in current group and alive */
	if (host_readb(hero + 0x21) &&
		host_readb(hero + 0x87) == ds_readb(CURRENT_GROUP) &&
		hero_dead(hero) == 0) {

		/* If only the NPC is in that group give him all the money */
		if (heroes <= 1) {
			host_writed(hero + 0x2c, host_readd(hero + 0x2c) + money);
			heroes = 0;
		} else
			heroes--;
	}

	if (heroes == 0)
		return;

	hero_money = money / heroes;

	hero = get_hero(0);

	for (i = 0; i < 6; i++, hero += 0x6da) {

		if (host_readb(hero + 0x21) &&
			host_readb(hero + 0x87) == ds_readb(CURRENT_GROUP) &&
			hero_dead(hero) == 0) {
			/* account the money to hero */
			host_writed(hero + 0x2c, hero_money);
		} else
			if (host_readb(hero + 0x87) == ds_readb(CURRENT_GROUP))
				host_writed(hero + 0x2c, 0);
	}
}

/**
 *	add_party_money	-	adds money to the current group
 *	@money:		money to add
*/
void add_party_money(Bit32s money) {
	set_party_money(get_party_money() + money);
}

/**
	add_hero_ap - add AP
*/
void add_hero_ap(Bit8u *hero, int ap) {
	host_writed(hero+0x28, host_readd(hero+0x28) + ap);
}

/**
 *	add_group_ap - divides AP to the current group
 *	@ap:	AP to divide
 */
void add_group_ap(signed int ap) {

	Bit8u *hero_i;
	unsigned short i;

	if (ap < 0)
		return;

	ap = ap / count_heroes_in_group();

	hero_i = get_hero(0);

	for (i = 0; i <= 6; i++, hero_i += 0x6da) {
		/* Check class */
		if (host_readb(hero_i + 0x21) == 0)
			continue;
		/* Check if in current group */
		if (host_readb(hero_i + 0x87) != ds_readb(CURRENT_GROUP))
			continue;
		/* Check if hero is dead */
		if (hero_dead(hero_i))
			continue;

		add_hero_ap(hero_i, ap);
	}
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

	hero_i = get_hero(0);
	for (i = 0; i <= 6; hero_i += 0x6da, i++) {
		/* Check class */
		if (host_readb(hero_i + 0x21) == 0)
			continue;
		/* Check in group */
		if (host_readb(hero_i + 0x87) != ds_readb(CURRENT_GROUP))
			continue;
		/* Check if dead */
		if (hero_dead(hero_i))
			continue;

		D1_INFO("%s erhaelt %d AP\n",(char*)(hero_i+0x10), ap);

		add_hero_ap(hero_i, ap);
	}
}

/**
	sub_hero_ap_all - sub AP

	sub AP from every hero
*/
void sub_hero_ap_all(signed short ap) {
	Bit8u *hero_i;
	int i;

	if (ap < 0)
		return;

	hero_i = get_hero(0);
	for (i = 0; i <= 6; hero_i += 0x6da, i++) {
		/* Check class */
		if (host_readb(hero_i + 0x21) == 0)
			continue;
		/* Check in group */
		if (host_readb(hero_i + 0x87) != ds_readb(CURRENT_GROUP))
			continue;
		/* Check if dead */
		if (hero_dead(hero_i))
			continue;

		if (ap <= (signed int)host_readd(hero_i+0x28)) {
			ap = -ap;
			D1_INFO("%s erhaelt %+d AP\n",(char*)(hero_i+0x10), ap);
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
	Bit8u *first_hero = get_hero(0);
	int i = 0;

	while (hero != first_hero + i*0x6da)
		i++;
	return i;

}

/**
 *	get_item_pos() - gets item position
 *	@hero:	pointer to the hero
 *	@item:	item ID to look for
 *
 *	Returns the position of the item or -1 if the item is not in the
 *	indventory .
*/
int get_item_pos(Bit8u *hero, unsigned short item)
{

	register int i;	/* dx */

	for (i = 0; i < 23; i++) {
		if (item == host_readw(hero + i * 14 + 0x196))
			return i;
	}

	return -1;
}

short get_first_hero_with_item(unsigned short item) {
	Bit8u *hero_i = get_hero(0);
	int i,j;

	for (i = 0; i <= 6; i++ , hero_i += 0x6da) {
		/* Check class */
		if (host_readb(hero_i+0x21) == 0)
			continue;
		/* Check if in current group */
		if (host_readb(hero_i+0x87) != ds_readb(CURRENT_GROUP))
			continue;
		/* Search inventar */
		for (j = 0; j < 23; j++)
			if (host_readw(hero_i + j * 14 + 0x196) == item)
				return i;
	}

	return -1;
}

signed short get_first_hero_with_item_in_group(unsigned short item, signed char group) {
	Bit8u *hero_i = get_hero(0);
	int i,j;

	for (i = 0; i <= 6; i++ , hero_i += 0x6da) {
		/* Check class */
		if (host_readb(hero_i+0x21) == 0)
			continue;
		/* Check if in that group */
		if (host_readb(hero_i+0x87) != group)
			continue;
		/* Search inventar */
		for (j = 0; j < 23; j++)
			if (host_readw(hero_i + j * 14 + 0x196) == item)
				return i;
	}

	return -1;
}


/**
 * sub_group_le() - subtracts LE from every group member
 * @le:		LE to remove
 */
void sub_group_le(signed short le)
{
	Bit8u * hero;
	register signed short i;

	for (i = 0; i <= 6; i++) {

		hero = get_hero(i);

		if (host_readb(hero + 0x21) == 0)
			continue;

		if (host_readb(hero + 0x87) != ds_readb(CURRENT_GROUP))
			continue;

		sub_hero_le(hero, le);
	}
}

/**
 * get_first_hero_available_in_group - return a pointer to the first available hero
 *
 * Returns a pointer to the first available hero in the current group.
 * If none in available it returns a pointer to the first hero
 */
RealPt get_first_hero_available_in_group() {
	RealPt hero_i;
	unsigned short i;

	hero_i = ds_readd(HEROS);

	for (i = 0; i <= 6; i++, hero_i += 0x6da) {
		/* Check class */
		if (host_readb(Real2Host(hero_i) + 0x21) == 0)
			continue;
		/* Check group */
		if (host_readb(Real2Host(hero_i) + 0x87) != ds_readb(CURRENT_GROUP))
			continue;
		/* Check dead BOGUS */
		if (hero_dead(Real2Host(hero_i)))
			continue;
		/* Check if hero is available */
		if (check_hero(Real2Host(hero_i)) == 0)
			continue;

		return hero_i;
	}

	return ds_readd(HEROS);
}

RealPt get_second_hero_available_in_group() {
	RealPt hero_i;
	unsigned short i, tmp;

	hero_i = ds_readd(HEROS);
	tmp = 0;

	for (i = 0; i <= 6; i++, hero_i += 0x6da) {
		/* Check class */
		if (host_readb(Real2Host(hero_i) + 0x21) == 0)
			continue;
		/* Check group */
		if (host_readb(Real2Host(hero_i) + 0x87) != ds_readb(CURRENT_GROUP))
			continue;
		/* Check if hero is available */
		if (check_hero(Real2Host(hero_i)) == 0)
			continue;

		if (tmp)
			return hero_i;

		tmp++;
	}

	return 0;
}

unsigned short count_heros_available() {
	Bit8u *hero_i;
	unsigned short retval;
	unsigned short i;

	retval = 0;
	hero_i = get_hero(0);

	for (i = 0; i <= 6; i++, hero_i += 0x6da) {
		/* Check class */
		if (host_readb(hero_i+0x21) == 0)
			continue;
		/* Check if hero is available */
		if (!check_hero(hero_i)|| !check_hero_no2(hero_i))
			continue;

		retval++;
	}

	return retval;
}

/**
	count_heroes_available_in_group
*/

unsigned short count_heroes_available_in_group() {
	Bit8u *hero_i = get_hero(0);
	char i, heroes = 0;

	for (i=0; i <= 6; i++, hero_i += 0x6da) {
		/* Check class */
		if (host_readb(hero_i+0x21) == 0)
			continue;
		/* Check if in current group */
		if (host_readb(hero_i+0x87) != ds_readb(CURRENT_GROUP))
			continue;
		/* Check if hero is available */
		if (check_hero_no2(hero_i) == 0)
			continue;

		heroes++;
	}

	return heroes;
}

RealPt schick_alloc_emu(Bit32u size)
{
	return bc_farcalloc(size, 1);
}

#if !defined(__BORLANDC__)
}
#endif
