/*
	Rewrite of DSA1 v3.02_de functions of seg004 (Graphic)
	Functions rewritten: 29/38
*/

#if !defined(__BORLANDC__)
#include "mem.h"
#include "paging.h"
#include "callback.h"
#endif

#include <string.h>

#include "v302de.h"

#include "seg000.h"
#include "seg002.h"
#include "seg004.h"
#include "seg008.h"

#if !defined(__BORLANDC__)
namespace M302de {
#endif

/* Borlandified and identical */
void save_and_set_timer(void)
{
	ds_writed(0xe274, (Bit32u) bc__dos_getvect(8));
	bc__dos_setvect(8, (INTCAST)RealMake(0xb2a , 0x244));
}

/* Borlandified and identical */
void set_timer(void)
{
	bc__dos_setvect(8, (INTCAST)RealMake(0xb2a , 0x244));
}

/* Borlandified and identical */
void reset_timer(void)
{
	bc__dos_setvect(8, (INTCAST)ds_readd(0xe274));
}

/* Borlandified and identical */
void init_ani(Bit16u v1)
{

	signed short i;

	if (ds_readws(CURRENT_ANI) == -1)
		return;

	if ((v1 & 0x7f) != 2) {
		for (i = 0; i < 10; i++) {
			ds_writew(0xe260 + i * 2, 0);
			ds_writew(0xe24c + i * 2, 0xffff);
			ds_writew(0xe238 + i * 2, 1);
		}

		if (v1 & 0x80)
			ds_writeb(0x2cca, 0);
		else
			ds_writeb(0x2cca, 1);

		update_mouse_cursor();

		clear_ani_pal();

		/* set flag for pic_copy() */
		ds_writew(0x4a92, 1);

		/* set uppter left coordinates */
		ds_writew(0xc011, ds_readw(0xce41));
		ds_writew(0xc013, ds_readw(0xce3f));

		/* set lower right coordinates */
		ds_writew(0xc015, ds_readw(0xce41) + ds_readw(0xc3e7) - 1);
		ds_writew(0xc017, ds_readw(0xce3f) + ds_readb(0xc3ed) - 1);

		/* copy pointer */
		ds_writed(0xc019, ds_readd(0xce35));

		/* copy the main ani picture */
		do_pic_copy(1);

		set_ani_pal(Real2Host(ds_readd(0xce3b)));

		/* reset flag for pic_copy() */
		ds_writew(0x4a92, 0);

		refresh_screen_size();
	}

	if ((v1 & 0x7f) != 1) {
		wait_for_vsync();
		ds_writew(0x29ae, 1);
	}

	wait_for_vsync();
}

/* Borlandified and identical */
void set_var_to_zero(void)
{
	ds_writew(0x29ae, 0);
}

/* Borlandified and identical */
void init_ani_busy_loop(unsigned short v1)
{
	/* set lock */
	ds_writew(0x4a90, 1);

	init_ani(v1);

	 while (ds_readw(0x4a90) != 0) {
#ifdef M302de_SPEEDFIX
		/*	enter emulation mode frequently,
			that the timer can reset this variable */
		wait_for_vsync();
#endif
	 }
}

/* Borlandified and identical */
void clear_ani(void)
{
	signed short i, j;

	ds_writew(0xc3e7, 0);
	ds_writeb(0xc3ed, 0);
	ds_writeb(0xc3ee, 0);
	ds_writed(0xce35, 0);
	ds_writew(0xce3d, 0);
	ds_writew(0xce3b, 0);

	for (i = 0; i < 10; i++) {
		ds_writew(0xc3f4 + i * 0x107, 0);
		ds_writeb(0xc3f6 + i * 0x107, 0);
		ds_writew(0xc3f8 + i * 0x107, 0);
		ds_writeb(0xc3f7 + i * 0x107, 0);
		ds_writeb(0xc3fa + i * 0x107, 0);
		ds_writeb(0xc3fb + i * 0x107, 0);
		ds_writew(0xc44c + i * 0x107, 0);
		ds_writeb(0xc3f3 + i * 0x107, 0);

		for (j = 0; j < 20; j++)
			ds_writed(0xc3fc + i * 0x107 + (j << 2), 0);

		for (j = 0; j < 42; j++) {
			ds_writew(0xc44e + i * 0x107 + (j << 2), 0);
			ds_writew(0xc450 + i * 0x107 + (j << 2), 0);
		}
	 }
}

#if defined(__BORLANDC__)

struct dummy {
	char a[24];
};

/* Borlandified and identical */
void interrupt timer_isr(void)
{
	signed short i;
	signed short l_di;
	signed char flag;
	Bit8u *ptr;
	struct dummy a;

	add_ds_ds(0xe234, 1);

	inc_ds_ws(0xc3bf);

	if (ds_readws(0xc3bf) < 0) {
		ds_writew(0xc3bf, 0);
	}

	if ((ds_readw(0xe318) != 0) &&
		(bc_bioskey(1) || (ds_readw(0xc3d5) != 0)))
	{
		ds_writew(0xe318, 2);
		ds_writew(0xc3d5, 0);
	}

	start_midi_playback_IRQ();


	if (ds_readw(DELAY_TIMER) != 0) {
		dec_ds_ws(DELAY_TIMER);
	}

	/* another timer used in fights */
	if ((ds_readws(0x4b79) > 0) &&
		(ds_readws(0x26b1) != 0) &&
		(ds_readbs(0x4b94) != 0))
	{
		dec_ds_ws(0x4b79);
	}

	if (!ds_readbs(0xbcda)) {
		do_timers();
	}

	update_status_bars();
	seg002_37c4();
	seg004_0e31();
	dec_splash();

	if (ds_readws(0x29ae) != 0) {

		/* disable interrupts */
		asm { cli; }

		ds_writew((0x2990 + 0), ds_readw(0xce3f));
		ds_writew((0x2990 + 2), ds_readw(0xce41));
		ds_writew((0x2990 + 4), ds_readw(0xce3f) + 135);
		ds_writew((0x2990 + 6), ds_readw(0xce41) + 208);
		a = *(struct dummy*)(p_datseg + 0xc00d);

		l_di = ds_readbs(0xc3ee);

		if (!l_di && (ds_readw(0x4a90))) {

			ds_writew(0x29ae, 0);
			ds_writew(0x4a90, 0);
		}

		for (i = 0; i < l_di; i++) {

			ptr = p_datseg + 0xc3ef + 0x107 * i;

			if (host_readws(ptr + 0x5d)) {
				sub_ds_ws(0xe260 + 2 * i, 5);

				if (ds_readws(0xe260 + 2 * i) <= 0) {

					add_ds_ws(0xe24c + 2 * i, ds_readws(0xe238 + 2 * i));

					if (ds_readws(0xe24c + 2 * i) == host_readws(ptr + 0x5d)) {

						if (host_readbs(ptr + 0xb) != 0) {
							ds_writew(0xe238 + 2 * i, -1);
							dec_ds_ws(0xe24c + 2 * i);
						} else {
							ds_writew(0xe24c + 2 * i, 0);
						}

						if (ds_readws(0x4a90) != 0) {
							ds_writew(0x29ae, 0);
							ds_writew(0x4a90, 0);
							break;
						}
					}

					if ((ds_readws(0xe24c + 2 * i) == 0) &&
						(host_readb(ptr + 0xb) != 0))
					{
						ds_writew(0xe238 + 2 * i, 1);
					}

					ds_writew(0xe260 + 2 * i, 2 * (host_readws(ptr + 0x61 + 4 * ds_readws(0xe24c + 2 * i))));

					flag = 0;

					if ((ds_readws(0x299c) >= ds_readws(0xce41)) &&
						(ds_readws(0xce41) + ds_readws(0xc3e7) >= ds_readws(0x299c)) &&
						(ds_readws(0x299e) >= ds_readws(0xce3f)) &&
						(ds_readws(0xce3f) + ds_readb(0xc3ed) >= ds_readws(0x299e) ))
					{
						flag = 1;
						update_mouse_cursor();
					}

					/* set screen coordinates */
					ds_writew(0xc011,
						ds_readws(0xce41) + host_readw(ptr + 5));
					ds_writew(0xc013,
						ds_readws(0xce3f) + host_readb(ptr + 7));
					ds_writew(0xc015,
						ds_readws(0xce41) + host_readw(ptr + 5) + host_readw(ptr + 9) - 1);
					ds_writew(0xc017,
						ds_readws(0xce3f) + host_readb(ptr + 7) + host_readb(ptr + 8) - 1);
					ds_writed(0xc019,
						host_readd(ptr + 0xd + 4 *(host_readws(ptr + 0x5f + 4 * ds_readw(0xe24c + 2 * i)) -1)));

					do_pic_copy(1);

					if (flag != 0) {
						refresh_screen_size();
						flag = 0;
					}
				}
			}
		}

		*(struct dummy*)(p_datseg + 0xc00d) = a;
		ds_writew((0x2990 + 0), 0);
		ds_writew((0x2990 + 2), 0);
		ds_writew((0x2990 + 4), 199);
		ds_writew((0x2990 + 6), 319);

		/* enable interrupts */
		asm {sti; }
	}

	/* call the old timer ISR */
	((INTCAST)(ds_readd(0xe274)))();
}

/* Borlandified and identical */
void unused_gfx_spinlock(void)
{
	Bit32s v = ds_readds(0xe234);

	while (v == ds_readds(0xe234)) { ; }
}
#endif

/* Borlandified and identical */
void update_status_bars(void)
{
	signed short i;
	Bit8u *hero;

	ds_writew(0xc3c9, 0);

	if (ds_readw(0xc3cb) != 0) {

		if (ds_readbs(0x2845) == 20) {
			/* in the status menu */

			hero = get_hero(ds_readws(0x2c9d));

			/* adjust hunger to 100% */
			if (host_readbs(hero + 0x7f) >= 100) {
				host_writeb(hero + 0x7f, ds_writeb(0x2c9f, 100));
			}

			/* adjust thirst to 100% */
			if (host_readbs(hero + 0x80) >= 100) {
				host_writeb(hero + 0x80, ds_writeb(0x2ca0, 100));
			}

			/* hunger and thirst are at 100% */
			if ((ds_readbs(0x2c9f) == 100) && (ds_readbs(0x2ca0) == 100)) {
				ds_writeb(0x4a9a, ds_readbs(0x4a9c));
				ds_writeb(0x4a9b, ds_readbs(0x4a9d));
			}

#if !defined(__BORLANDC__)
			CPU_CLI();
#else
			asm { cli };
#endif

			if (ds_readbs(0x2c9f) == 100) {

				if (inc_ds_bs_post(0x4a9a) == 25) {

					xor_ds_bs(0x4a9b, 1);

					update_mouse_cursor();

					for (i = 0; i < 6; i++) {
						do_h_line((RealPt)ds_readd(0xd2ff), 260, 310, i + 36, ds_readb(0x4a9b) ? 9 : 10);
					}

					refresh_screen_size();

					ds_writeb(0x4a9a, 0);
				}

			} else if (host_readbs(hero + 0x7f) != ds_readbs(0x2c9f)) {

				ds_writeb(0x2c9f, host_readbs(hero + 0x7f));

				update_mouse_cursor();

				for (i = 0; i < 6; i++) {
						do_h_line((RealPt)ds_readd(0xd2ff), 260, ds_readbs(0x2c9f) / 2 + 260, i + 36, 9);
						do_h_line((RealPt)ds_readd(0xd2ff), ds_readbs(0x2c9f) / 2 + 260, 310, i + 36, 10);
				}

				refresh_screen_size();
			}

			if (ds_readbs(0x2ca0) == 100) {

				if (inc_ds_bs_post(0x4a9c) == 25) {

					xor_ds_bs(0x4a9d, 1);

					update_mouse_cursor();

					for (i = 0; i < 6; i++) {
						do_h_line((RealPt)ds_readd(0xd2ff), 260, 310, i + 43, ds_readb(0x4a9d) ? 11 : 12);
					}

					refresh_screen_size();

					ds_writeb(0x4a9c, 0);
				}

			} else if (host_readbs(hero + 0x80) != ds_readbs(0x2ca0)) {

				ds_writeb(0x2ca0, host_readbs(hero + 0x80));

				update_mouse_cursor();

				for (i = 0; i < 6; i++) {
						do_h_line((RealPt)ds_readd(0xd2ff), 260, ds_readbs(0x2ca0) / 2 + 260, i + 43, 11);
						do_h_line((RealPt)ds_readd(0xd2ff), ds_readbs(0x2ca0) / 2 + 260, 310, i + 43, 12);
				}

				refresh_screen_size();
			}

#if !defined(__BORLANDC__)
			CPU_STI();
#else
			asm { sti };
#endif
		} else if (ds_readbs(0x2845) == 0) {
			/* in the screen with the playmask */

			for (i = 0; i <= 6; i++) {

				if (host_readbs(get_hero(i) + 0x21) != 0) {

					hero = get_hero(i);

					/* draw LE bars */
					if ((ds_readws(0x2c1a + 8 * i) != host_readws(hero + 0x60)) ||
						(ds_readws(0x2c18 + 8 * i) != host_readws(hero + 0x5e)))
					{
						draw_bar(0, i, host_readws(hero + 0x60), host_readws(hero + 0x5e), 0);
						ds_writew(0x2c18 + 8 * i, host_readws(hero + 0x5e));
						ds_writew(0x2c1a + 8 * i, host_readws(hero + 0x60));
					}

					/* draw AE bars */
					if ((ds_readws(0x2c1e + 8 * i) != host_readws(hero + 0x64)) ||
						(ds_readws(0x2c1c + 8 * i) != host_readws(hero + 0x62)))
					{
						draw_bar(1, i, host_readws(hero + 0x64), host_readws(hero + 0x62), 0);
						ds_writew(0x2c1c + 8 * i, host_readws(hero + 0x62));
						ds_writew(0x2c1e + 8 * i, host_readws(hero + 0x64));
					}
				} else {
					if (ds_readws(0x2c18 + 8 * i) != 0) {
						draw_bar(0, i, 0, 0, 0);
						ds_writew(0x2c18 + 8 * i, ds_writew(0x2c1a + 8 * i, 0));
					}

					if (ds_readws(0x2c1c + 8 * i) != 0) {
						draw_bar(1, i, 0, 0, 0);
						ds_writew(0x2c1c + 8 * i, ds_writew(0x2c1e + 8 * i, 0));
					}
				}
			}
		}
	}
}

/**
 * \brief	draws a bar to visualize LE or AE
 *
 * \param type		type of bar, 0 = LE / 1 = AE
 * \param hero		number of hero when mode is zero
 * \param pts_cur	current points
 * \param pts_max	maximum points
 * \param mode		0 on game mask, 1 in fight
*/
/* Remark:
	It should be used, either hero or mode is zero,
	since in fight mode only the active hero is shown.
*/
/* Borlandified and identical */
void draw_bar(unsigned short type, signed short hero, signed short pts_cur, signed short pts_max, signed short mode)
{
	signed short i;
	signed short y_min;
	signed short x;
	signed short lost;
	RealPt dst;

	if (mode == 0)
		update_mouse_cursor();

	if (mode == 0) {
		x = ds_readw(0x2d01 + hero * 2) + type * 4 + 34;
		y_min = 188;
		dst = (RealPt)ds_readd(0xd2ff);
	} else {
		x = type * 4 + 36;
		y_min = 42;
		dst = (RealPt)ds_readd(0xd303);
	}

	if (pts_cur == 0) {
		/* draw 4 black vertical lines */
		for (i = 0; i < 3; i++) {
			do_v_line(dst, x + i, y_min - 30, y_min, 0);
		}
	} else {
		if (pts_cur == pts_max) {
			/* draw 4 full lines in the color of the type */
			for (i = 0; i < 3; i++) {
				do_v_line(dst, x + i, y_min - 30, y_min,
					ds_readb(0x4a94 + type * 2));
			}
		} else {
			lost = 30;
			lost *= pts_cur;
			lost /= pts_max;

			if (lost == 0) {
				lost = 1;
			}

			/* draw visible part */
			for (i = 0; i < 3; i++) {
				do_v_line(dst, x + i, y_min - lost, y_min,
					ds_readb(0x4a94 + type * 2));
			}

			/* draw black part */
			for (i = 0; i < 3; i++) {
				do_v_line(dst, x + i, y_min - 30,
					y_min - lost - 1, 0);
			}
		}
	}

	if (mode == 0) {
		refresh_screen_size();
	}
}

/* Borlandified and identical */
void restore_rect(RealPt dst, Bit8u *src, unsigned short x, unsigned short y, signed char n, signed char m)
{
	signed short i;
	signed short j;
	signed char c;
	PhysPt p;

	update_mouse_cursor();

	p = Real2Phys(dst);
	p += y * 320 + x;

	for (i = 0; i < m; p += 320, i++) {
		for (j = 0; j < n; j++) {
			c = *src++;
			if (c)
				mem_writeb(p + j, c);
		}
	}

	refresh_screen_size();
}

/* Borlandified and identical */
void restore_rect_rle(RealPt dst, Bit8u *src, unsigned short x, unsigned short y, signed char width, signed char height, unsigned short v1)
{
	signed short si;
	signed short di;
	signed short i;
	signed char c;
	unsigned char cnt;
	signed char tmp;
	PhysPt p = Real2Phys(dst);

	p += y * 320 + x;
	update_mouse_cursor();

	for (i = 0; i < height; p += 320, i++) {

		si = 0;
		while (si < width) {
			if ((c = *src++) == 0x7f) {
				cnt = *src++;
				tmp = *src++;
				if (tmp || v1 != 2)
					for (di = 0; di < cnt; di++)
						mem_writeb(p + si + di, tmp);
				si += cnt;
				continue;
			}
			if (c || v1 != 2)
				mem_writeb(p + si, c);
			si++;
		}
	}

	refresh_screen_size();
}

/* Borlandified and identical */
void draw_mouse_cursor(void)
{
	signed short x;
	register unsigned short mask;
	signed char i;
	signed char j;
	PhysPt dst;
	signed short *mouse_cursor;
	signed short y;
	signed short width;
	signed short height;

	dst = Real2Phys(ds_readd(0xd2ff));
	mouse_cursor = (short*)(Real2Host(ds_readd(0xcecb)) + 32);

	x = ds_readw(0x299c) - ds_readw(0x29a6);
	y = ds_readw(0x299e) - ds_readw(0x29a8);

	width = height = 16;

	if (x > 304)
		width = 320 - x;

	if (y > 184)
		height = 200 - y;

	dst += y * 320 + x;

	for (i = 0; i < height; dst += 320, i++) {

		mask = host_readw((Bit8u*)mouse_cursor++);

		for (j = 0; j < width; j++)
			if ((0x8000 >> j) & mask)
				mem_writeb(dst + j, 0xff);
	}
}

/* Borlandified and identical */
void save_mouse_bg(void)
{
	PhysPt src;
	signed short di;
	signed short v6;
	signed short v8;
	signed short va;
	signed short si;
	signed short j;

	src = Real2Phys(ds_readd(0xd2ff));

	di = ds_readw(0x299c) - ds_readw(0x29a6);
	v6 = ds_readw(0x299e) - ds_readw(0x29a8);

	v8 = va = 16;

	if (di > 304) {
		v8 = 320 - di;
	}

	if (v6 > 184) {
		va = 200 - v6;
	}

	src += v6 * 320 + di;

	for (si = 0; si < va; src += 320, si++) {
		for (j = 0; j < v8; j++) {
			ds_writeb(0xcf0f + si * 16 + j , mem_readb(src + j));
		}
	}
}

void restore_mouse_bg() {
	PhysPt dst;
	short v2, v3, v4;
	short si, di, j;

	/* gfx memory */
	dst = Real2Phys(ds_readd(0xd2ff));
	di = ds_readw(0x29a0) - ds_readw(0x29aa);
	v2 = ds_readw(0x29a2) - ds_readw(0x29ac);
	v4 = v3 = 16;

	if (di > 304)
		v3 = 320 - di;

	if (v2 > 184)
		v4 = 200 - v2;

	dst += (v2 * 320) + di;

	for (si = 0; si < v4; dst += 320, si++)
		for (j = 0; j < v3; j++)
			mem_writeb(dst + j, ds_readb(0xcf0f + si*16 + j));

}

void seg004_0e31(void)
{
	DUMMY_WARNING();
}

void load_objects_nvf(void)
{
	struct nvf_desc nvf;
	unsigned short fd;

	fd = load_archive_file(0x07);
	read_archive_file(fd, Real2Host(ds_readd(0xd303)), 2000);
	bc_close(fd);

	nvf.src = Real2Host(ds_readd(0xd303));
	nvf.type = 0;
	nvf.width = (Bit8u*)&fd;
	nvf.height = (Bit8u*)&fd;
	nvf.dst = Real2Host(ds_readd(0xd2e3));
	nvf.nr = 12;
	process_nvf(&nvf);

	nvf.dst = Real2Host(ds_readd(0xd2e3)) + 0x683;
	nvf.nr = 13;
	process_nvf(&nvf);

	nvf.dst = Real2Host(ds_readd(0xd2e3)) + 0xcaf;
	nvf.nr = 14;
	process_nvf(&nvf);

	nvf.dst = Real2Host(ds_readd(0xd2e3)) + 0xcef;
	nvf.nr = 15;
	process_nvf(&nvf);

	array_add(Real2Host(ds_readd(0xd2e3)), 0xd3f, 0xe0, 2);

}


/**
 * draw_wallclock() - draws day-  and nighttime
 * @pos:	position
 * @night:	0 = day / 1 = night
 *
 */
void draw_wallclock(signed short pos, signed short night)
{
	Bit8u gfx_bak[24];
	Bit8u fullscreen_bak[8];
	signed short mouse_updated;
	signed short y;

	mouse_updated = 0;

	/* make backups */
	struct_copy(gfx_bak, p_datseg + 0xc00d, 0x18);

	struct_copy(fullscreen_bak, p_datseg + 0x2990, 8);

	/* set pointer */
	ds_writed(0xc00d, ds_readd(0xd2ff));


	/* calculate y value */
	/* Original-Bug: off-by-one with pos > 80 */
	y = ds_readw(WALLCLOCK_Y) + (signed char)ds_readb(0x4aa0 + pos);

	/* calculate x value */
	pos = pos + ds_readw(WALLCLOCK_X) - 2;

	/* set window */
	ds_writew(0x2990, ds_readw(WALLCLOCK_Y));
	ds_writew(0x2992, ds_readw(WALLCLOCK_X));
	ds_writew(0x2994, ds_readw(WALLCLOCK_Y) + 22);
	ds_writew(0x2996, ds_readw(WALLCLOCK_X) + 78);

	/* set palette (night/day) */
	set_palette(p_datseg + (!night ? 0x4af1 : 0x4afa), 0xfa, 3);

	/* check if mouse is in that window */
	if (is_mouse_in_rect(ds_readw(WALLCLOCK_X) - 6,
				ds_readw(WALLCLOCK_Y) - 6,
				ds_readw(WALLCLOCK_X) + 85,
				ds_readw(WALLCLOCK_Y) + 28)) {

			update_mouse_cursor();
			mouse_updated = 1;
	}

	/* set coordinates */
	ds_writew(0xc011, ds_readw(WALLCLOCK_X));
	ds_writew(0xc013, ds_readw(WALLCLOCK_Y));
	ds_writew(0xc015, ds_readw(WALLCLOCK_X) + 78);
	ds_writew(0xc017, ds_readw(WALLCLOCK_Y) + 20);
	ds_writed(0xc019, ds_readd(0xd2e3));

	/* draw backgroud */
	do_pic_copy(2);


	/* set coordinates */
	ds_writew(0xc011, pos);
	ds_writew(0xc013, y);
	ds_writew(0xc015, pos + 7);
	ds_writew(0xc017, y + 6);
	ds_writed(0xc019, ds_readd(0xd2e3) + (!night ? 0xcaf: 0xcef));

	/* draw sun/moon */
	do_pic_copy(2);


	/* set coordinates */
	ds_writew(0xc011, ds_readw(WALLCLOCK_X));
	ds_writew(0xc013, ds_readw(WALLCLOCK_Y) + 3);
	ds_writew(0xc015, ds_readw(WALLCLOCK_X) + 78);
	ds_writew(0xc017, ds_readw(WALLCLOCK_Y) + 22);
	ds_writed(0xc019, ds_readd(0xd2e3) + 0x683);

	/* draw backgroud */
	do_pic_copy(2);

	/* restore fullscreen */
	struct_copy(p_datseg + 0x2990, fullscreen_bak, 8);

	/* happens in travel mode */
	if (ds_readb(0x2845) == 5) {

		/* set coordinates */
		ds_writew(0xc011, ds_readw(WALLCLOCK_X) - 5);
		ds_writew(0xc013, ds_readw(WALLCLOCK_Y) - 4);
		ds_writew(0xc015, ds_readw(WALLCLOCK_X) + 85);
		ds_writew(0xc017, ds_readw(WALLCLOCK_Y) + 28);
		ds_writed(0xc019, ds_readd(0xc3db) + 0x4650);

		/* draw backgroud */
		do_pic_copy(2);
	}

	if (mouse_updated != 0) {
		refresh_screen_size();
	}

	/* restore gfx */
	struct_copy(p_datseg + 0xc00d, gfx_bak, 0x18);
}

/**
	array_add - adds op to each element of an array
	@dst:	pointer to array
	@len:	length of array
	@op:	operator
	@flag:	if 2, op will not be added if array element is 0
*/
void array_add(Bit8u *dst, unsigned short len, unsigned char op, unsigned short flag) {
	unsigned short i;
	char tmp;

	for (i = 0; i < len; i++) {
		tmp = host_readb(dst + i);

		if (flag == 2 && !tmp)
			continue;

		host_writeb(dst + i, tmp + op);
	}
}

void schick_set_video()
{
	Bit8u pal_black[3];

	struct_copy(pal_black, p_datseg + 0x4b03, 3);
	set_video_mode(0x13);
	set_color(pal_black, 0xff);
}

void schick_reset_video() {
	set_video_mode((signed char)ds_readw(0xd30d));
	set_video_page((signed char)ds_readw(0xd30b));
}

void clear_ani_pal()
{
	Bit8u pal[0x60];

	struct_copy(pal, p_datseg + 0x4b06, 0x60);

	wait_for_vsync();
	set_palette(pal, 0, 0x20);
}

void set_ani_pal(Bit8u *pal)
{
	wait_for_vsync();
	set_palette(pal, 0, 0x20);
}

void do_h_line(RealPt ptr, unsigned short x1, unsigned short x2, unsigned short y, char color) {

	unsigned short count, tmp;
	RealPt dst;

	if (x1 == x2)
		return;

	if (x1 > x2) {
		tmp = x1;
		x1 = x2;
		x2 = tmp;
	}

	count = x2 - x1 + 1;
	dst = y * 320 + x1 + ptr;

	draw_h_line(dst, count, color);
}

void do_v_line(RealPt ptr, unsigned short y, unsigned short x1, unsigned short x2, char color) {

	unsigned short count, tmp;
	RealPt dst;

	if (x1 == x2)
		return;

	if (x1 > x2) {
		tmp = x2;
		x2 = x1;
		x1 = tmp;
	}

	count = x2 - x1 + 1;
	dst = x1 * 320 + y + ptr;

	draw_h_spaced_dots(dst, count, color, 320);
}

void do_border(RealPt dst, unsigned short x1, unsigned short y1, unsigned short x2, unsigned short y2, char color) {
	update_mouse_cursor();
	do_h_line(dst, x1, x2, y1, color);
	do_h_line(dst, x1, x2, y2, color);
	do_v_line(dst, x1, y1, y2, color);
	do_v_line(dst, x2, y1, y2, color);
	refresh_screen_size();
}

void do_pic_copy(unsigned short mode) {
	short x2, y2;
	short v1, v2, v3, v4;
	short width, height;
	Bit8u *src;
	RealPt dst;
	short x1, y1;

	x1 = ds_readw(0xc011);
	y1 = ds_readw(0xc013);
	x2 = ds_readw(0xc015);
	y2 = ds_readw(0xc017);

	v1 = ds_readw(0xc01d);
	v2 = ds_readw(0xc01f);
	v3 = ds_readw(0xc021);
	v4 = ds_readw(0xc023);

	width = x2 - x1 + 1;
	height = y2 - y1 + 1;

	src = Real2Host(ds_readd(0xc019));
	dst = (RealPt)ds_readd(0xc00d);

	pic_copy(dst, x1, y1, x2, y2, v1, v2, v3, v4, width, height, src, mode);
}

void do_save_rect() {
	unsigned short width,height,x1,y1,x2,y2;
	RealPt dst,src;
	unsigned short v10;

	x1 = ds_readw(0xc011);
	y1 = ds_readw(0xc013);

	x2 = ds_readw(0xc015);
	y2 = ds_readw(0xc017);

	src = (RealPt)ds_readd(0xc019);
	dst = (RealPt)ds_readd(0xc00d);

	v10 = y1 * 320 + x1;
	width = x2 - x1 + 1;
	height = y2 - y1 + 1;

	save_rect(dst + v10, src, width, height);
}

void do_fill_rect(RealPt dst, unsigned short x, unsigned short y, unsigned short w, unsigned short h, unsigned short color) {
	unsigned short width, height;

	width = w - x + 1;
	height = h - y + 1;

	dst += y * 320 + x;

	update_mouse_cursor();
	fill_rect(dst, (unsigned char)color, width, height);
	refresh_screen_size();
}

void wait_for_vsync()
{
#if !defined(__BORLANDC__)
	CALLBACK_RunRealFar(reloc_game + 0xb2a, 0x150d);
#endif
}

/**
 * map_effect() - the snow effect for the map screen
 * @src:	pointer to a picture
 *
 */
void map_effect(Bit8u *src)
{
	signed short bak;
	unsigned short seed;
	unsigned short si, i;

	seed = 0;

	bak = ds_readw(0xe113);
	ds_writew(0xe113, 0);

	wait_for_vsync();
	update_mouse_cursor();

	i = 0;
	while (i < 64000) {
		si = (seed * 17 + 87) & 0xffff;
		seed = si;

		if (si >= 64000)
			continue;

		mem_writeb(Real2Phys(ds_readd(0xd2ff)) + si, host_readb(src + si));
		i++;

/* this too fast now, we slow it down a bit */
#if 1
		if ((i & 0x3ff) == 0x3ff)
			wait_for_vsync();
#endif
	}

	refresh_screen_size();
	ds_writew(0xe113, bak);
}

#if !defined(__BORLANDC__)
}
#endif
