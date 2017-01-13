/*
 *      Rewrite of DSA1 v3.02_de functions of seg006 (Fight)
 *      Functions rewritten: 16/16 (complete)
 *
 *	Borlandified and identical
 *	Compiler:	Borland C++ 3.1
 *	Call:		BCC.EXE -mlarge -O- -c -1 -Y seg006.cpp
 */

#include <stdlib.h>
#include <string.h>

#include "v302de.h"

#include "seg000.h"

#include "seg002.h"
#include "seg004.h"
#include "seg006.h"
#include "seg027.h"
#include "seg096.h"

#if !defined(__BORLANDC__)
namespace M302de {
#endif

/**
 * \brief   get the pointer to the fighter with id fighter_id
 *
 * \param   fighter_id  id of the fighter
 * \return              a pointer to the fighter with id fighter_id
 */
RealPt FIG_get_ptr(signed char fighter_id)
{
	RealPt fighter_ptr = (RealPt)ds_readd(FIG_LIST_HEAD);

	while (host_readbs(Real2Host(fighter_ptr) + 0x10) != fighter_id) {

		/* check if its the last element */
		if (host_readd(Real2Host(fighter_ptr) + 0x1b) == 0) {
			/* return list head */
			return (RealPt)ds_readd(FIG_LIST_HEAD);
		}

		/* set fighter_ptr to the next element */
		fighter_ptr = (RealPt)host_readd(Real2Host(fighter_ptr) + 0x1b);
	}

	return fighter_ptr;
}

/* static */
signed char FIG_set_array(void)
{
	signed char i = 0;

	/* find first element that is zero */
	while (ds_readb(FIG_LIST_ARRAY + i) != 0) {

		i++;
	}

	/* make it 1 */
	ds_writeb(FIG_LIST_ARRAY + i, 1);

	/* return the number of the index */
	return i;
}

void FIG_draw_figures(void)
{
	signed short l1, l2;
	Bit8u *list_i;
	struct screen_rect screen_mode;
	RealPt gfx_dst_bak;
	signed short l_si, l_di;

	l1 = 10;
	l2 = 118;

	gfx_dst_bak = (RealPt)ds_readd(PIC_COPY_DST);
	ds_writed(PIC_COPY_DST, ds_readd(RENDERBUF_PTR));

	/* backup a structure */
	screen_mode = *((struct screen_rect*)(p_datseg + PIC_COPY_DS_RECT));

	list_i = Real2Host(ds_readd(FIG_LIST_HEAD));

	do {

		if (host_readb(list_i + 0x12) == 1) {
			l_si =	(l1 - host_readbs(list_i + 8) / 2) +
				(host_readbs(list_i + 3) + host_readbs(list_i + 4)) * 10;

			l_di =	(l2 - host_readbs(list_i + 7)) +
				(host_readbs(list_i + 3) - host_readbs(list_i + 4)) * 5;

			l_si += host_readbs(list_i + 5);
			l_di += host_readbs(list_i + 6);

			ds_writew(PIC_COPY_X1, l_si);
			ds_writew(PIC_COPY_Y1, l_di);
			ds_writew(PIC_COPY_X2, l_si + host_readbs(list_i + 8) - 1);
			ds_writew(PIC_COPY_Y2, l_di + host_readbs(list_i + 7) - 1);
			/* set gfx_src */
			ds_writed(PIC_COPY_SRC, host_readd(list_i + 0x17));

			ds_writew(PIC_COPY_DS_RECT,
				l_di + host_readbs(list_i + 0xa));
			if (ds_readws(PIC_COPY_DS_RECT) < 0)
				ds_writew(PIC_COPY_DS_RECT, 0);

			ds_writew((PIC_COPY_DS_RECT + 2),
				l_si + host_readbs(list_i + 9));
			if (ds_readws((PIC_COPY_DS_RECT + 2)) < 0)
				ds_writew((PIC_COPY_DS_RECT + 2), 0);

			ds_writew((PIC_COPY_DS_RECT + 4),
				l_di + host_readbs(list_i + 0xc));
			if (ds_readws((PIC_COPY_DS_RECT + 4)) > 199)
				ds_writew((PIC_COPY_DS_RECT + 4), 199);

			ds_writew((PIC_COPY_DS_RECT + 6),
				l_si + host_readbs(list_i + 0xb));
			if (ds_readws((PIC_COPY_DS_RECT + 6)) > 319)
				ds_writew((PIC_COPY_DS_RECT + 6), 319);

			do_pic_copy(2);
		}

	} while (NOT_NULL(list_i = (Bit8u*)Real2Host((RealPt)host_readd(list_i + 0x1b))));

	/* restore a structure */
	//struct_copy(p_datseg + PIC_COPY_DS_RECT, screen_mode, 8);
	*((struct screen_rect*)(p_datseg + PIC_COPY_DS_RECT)) = screen_mode;
	ds_writed(PIC_COPY_DST, (Bit32u)gfx_dst_bak);
}

void FIG_set_gfx(void)
{
	RealPt ptr_bak;

	ptr_bak = (RealPt)ds_readd(PIC_COPY_DST);

	ds_writew(PIC_COPY_X1, 0);
	ds_writew(PIC_COPY_Y1, 0);
	ds_writew(PIC_COPY_X2, 319);
	ds_writew(PIC_COPY_Y2, 199);
	ds_writed(PIC_COPY_SRC, ds_readd(RENDERBUF_PTR));
	ds_writed(PIC_COPY_DST, ds_readd(FRAMEBUF_PTR));
	update_mouse_cursor();
	do_pic_copy(0);
	refresh_screen_size();

	ds_writed(PIC_COPY_DST, (Bit32u)ptr_bak);
}

void FIG_call_draw_pic(void)
{
	FIG_draw_pic();
}

void FIG_draw_pic(void)
{
	mem_memcpy(Real2Phys(ds_readd(RENDERBUF_PTR)),
		Real2Phys(ds_readd(BUFFER8_PTR)), 64000);

	ds_writew(ALWAYS_ONE, 1);

	if (ds_readw(FIG_CHAR_PIC)) {
		FIG_draw_char_pic(0, ds_readw(FIG_CHAR_PIC));
	} else if (ds_readw(FIG_ENEMY_PIC)) {
		FIG_draw_enemy_pic(0, ds_readw(FIG_ENEMY_PIC));
	}
}

RealPt FIG_get_hero_ptr(signed short v1)
{
	signed short i;

	for (i = 0; i <= 6; i++) {
		if (host_readbs(Real2Host(ds_readd(HEROS)) + i * SIZEOF_HERO + HERO_FIGHTER_ID) == v1)
			return (RealPt)ds_readd(HEROS) + i * SIZEOF_HERO;
	}

	return (RealPt)ds_readd(HEROS);
}

RealPt seg006_033c(signed short v)
{
	signed short i;

	for (i = 0; i < 20; i++) {
		if (v == ds_readbs(ENEMY_SHEETS + ENEMY_SHEET_FIGHTER_ID + (i * SIZEOF_ENEMY_SHEET)))
#if !defined(__BORLANDC__)
			return (RealPt)RealMake(datseg, ENEMY_SHEETS + i * SIZEOF_ENEMY_SHEET);
#else
			return (RealPt)&(((struct enemy_sheets*)(p_datseg + ENEMY_SHEETS))[i]);
#endif
	}

	return 0;
}

void FIG_set_0e(signed char fighter_id, signed char val)
{
	Bit8u *ptr = Real2Host(ds_readd(FIG_LIST_HEAD));

	while (host_readbs(ptr + 0x10) != fighter_id) {

		/* check for end of list */
		if (host_readd(ptr + 0x1b) == 0) {
			return;
		}

		/* set ptr to ptr->next */
		ptr = Real2Host(host_readd(ptr + 0x1b));
	}

	host_writeb(ptr + 0x0e, val);

	/* set presence flag */
	host_writeb(ptr + 0x12, 1);
}

/* Used by range attack and spells with more than 1 field distance */
void FIG_reset_12_13(signed char fighter_id)
{
	Bit8u *ptr1, *ptr2;

	ptr1 = Real2Host(ds_readd(FIG_LIST_HEAD));

	while (host_readb(ptr1 + 0x10) != fighter_id) {

		if (host_readd(ptr1 + 0x1b) == 0) {
			return;
		}

		ptr1 = Real2Host(host_readd(ptr1 + 0x1b));
	}

	host_writeb(ptr1 + 0x12, 0);

	if (host_readbs(ptr1 + 0x13) != -1) {

		ptr2 = Real2Host(ds_readd(FIG_LIST_HEAD));

		while (ds_readb(FIG_TWOFIELDED_TABLE + host_readbs(ptr1 + 0x13)) != host_readb(ptr2 + 0x10)) {
			ptr2 = Real2Host(host_readd(ptr2 + 0x1b));
		}
		host_writeb(ptr2 + 0x12, 0);
	}
}

void FIG_set_12_13(signed short fighter_id)
{
	Bit8u *ptr1, *ptr2;

	ptr1 = Real2Host(ds_readd(FIG_LIST_HEAD));

	while (host_readb(ptr1 + 0x10) != (signed char)fighter_id) {

		if (host_readd(ptr1 + 0x1b) == 0){
			return;
		}

		ptr1 = Real2Host(host_readd(ptr1 + 0x1b));
	}

	host_writeb(ptr1 + 0x12, 1);

	if (host_readbs(ptr1 + 0x13) != -1) {

		ptr2 = Real2Host(ds_readd(FIG_LIST_HEAD));

		while (ds_readb(FIG_TWOFIELDED_TABLE + host_readbs(ptr1 + 0x13)) != host_readb(ptr2 + 0x10)) {

			ptr2 = Real2Host(host_readd(ptr2 + 0x1b));

		}

		host_writeb(ptr2 + 0x12, 1);
	}
}

void FIG_set_0f(signed char fighter_id, signed char val)
{
	Bit8u *ptr = Real2Host(ds_readd(FIG_LIST_HEAD));

	while (host_readb(ptr + 0x10) != fighter_id) {

		if (host_readd(ptr + 0x1b) == 0) {
			return;
		}

		ptr = Real2Host(host_readd(ptr + 0x1b));
	}

	host_writeb(ptr + 0x0f, val);
}

struct dummy {
	char a[35];
};

/**
 * \brief   removes an element from the FIG_LIST
 *
 * \param   fighter_id  identificates the element to remove
 * \param   keep_in_memory whether to save the removed element in FIG_LIST_ELEM, useful for moving element to end of list
 */
void FIG_remove_from_list(signed char fighter_id, signed char keep_in_memory)
{
	Bit8u* p = Real2Host(ds_readd(FIG_LIST_HEAD));

	/* NULL check */
	if (!NOT_NULL(p))
		return;

	while (host_readb(p + 0x10) != fighter_id) {

		/* if (ptr->next == NULL); */
		if (host_readd(p + 0x1b) == 0) {
			return;
		}

		/* ptr = ptr->next; */
		p = Real2Host(host_readd(p + 0x1b));
	}

	if (!keep_in_memory) {
		ds_writeb(FIG_LIST_ARRAY + fighter_id, 0);
	} else {
//		struct_copy(p_datseg + FIG_LIST_ELEM, p, 35);
		*((struct dummy*)(p_datseg + FIG_LIST_ELEM)) = *((struct dummy*)(p));
	}

	/* check if p == HEAD */
	if (p == Real2Host(ds_readd(FIG_LIST_HEAD))) {
		/* Set HEAD: head = p->next;*/
		ds_writed(FIG_LIST_HEAD, host_readd(p + 0x1b));
		if (ds_readd(FIG_LIST_HEAD) != 0)
			/* head->prev = NULL */
			host_writed(Real2Host(ds_readd(FIG_LIST_HEAD)) + 0x1f, 0);
	} else {
		/* check if p == tail */
		if (host_readd(p + 0x1b) == 0) {
			/* p->prev->next == NULL */
			host_writed(Real2Host(host_readd(p + 0x1f)) + 0x1b , 0);
		} else {
			/* remove ptr from list
			p->prev->next = p->next;
			p->next->prev = p->prev; */
			host_writed(Real2Host(host_readd(p + 0x1f)) + 0x1b, host_readd(p + 0x1b));
			host_writed(Real2Host(host_readd(p + 0x1b)) + 0x1f, host_readd(p + 0x1f));
		}
	}

	memset(p, 0, 35);

	host_writeb(p + 0x10, -1);
}

/**
 * \brief   adds FIG_LIST_ELEM to FIG_LIST
 *
 * \param   fighter_id  id to assign to the new element (-1 = assign a new id)
 * \return              the new element's fighter_id (position in FIG_LIST_ARRAY)
 */
signed char FIG_add_to_list(signed char fighter_id)
{
	RealPt p1;
	RealPt p2;
	signed short x, y;

	p1 = (RealPt)ds_readd(FIG_LIST_BUFFER);
	x = ds_readbs((FIG_LIST_ELEM+3));
	y = ds_readbs((FIG_LIST_ELEM+4));

	/* FIG_list_start == NULL */
	if (ds_readd(FIG_LIST_HEAD) == 0) {

		ds_writed(FIG_LIST_HEAD, ds_readd(FIG_LIST_BUFFER));

//		struct_copy(Real2Host(ds_readd(FIG_LIST_HEAD)), p_datseg + FIG_LIST_ELEM, 35);
		*((struct dummy*)(Real2Host(ds_readd(FIG_LIST_HEAD)))) = *((struct dummy*)(p_datseg + FIG_LIST_ELEM));

		if (fighter_id == -1) {
			host_writeb(Real2Host(ds_readd(FIG_LIST_HEAD)) + 0x10,
				FIG_set_array());
		}

		host_writed(Real2Host(ds_readd(FIG_LIST_HEAD)) + 0x1f, 0);
		host_writed(Real2Host(ds_readd(FIG_LIST_HEAD)) + 0x1b, 0);

#if !defined(__BORLANDC__)
		D1_LOG("\tlist created x = %d, y = %d\n", x, y);
#endif

		return host_readbs(Real2Host(ds_readd(FIG_LIST_HEAD)) + 0x10);
	}

	while (host_readbs(Real2Host(p1) + 0x10) != -1) {
		p1 += 35;
	}

//	struct_copy(Real2Host(p1), p_datseg + FIG_LIST_ELEM, 35);
	*((struct dummy*)(Real2Host(p1))) =	*((struct dummy*)(p_datseg + FIG_LIST_ELEM));

	if (fighter_id == -1) {
		host_writeb(Real2Host(p1) + 0x10, FIG_set_array());
	} else {
		host_writeb(Real2Host(p1) + 0x10, fighter_id);
	}

	p2 = (RealPt)ds_readd(FIG_LIST_HEAD);

	/* The list is filled in the order of rendering, i.e. from rear to front:
	 * (x1,y1) is rendered before (x2,y2) if (x1 < x2) || (x1 == x2 && y1 > y2)
	 * On the same chessboard field, lower z is rendered before larger z.
	 */
	if (ds_readbs((FIG_LIST_ELEM + 0x11)) != -1) {
		while ((host_readbs(Real2Host(p2) + 3) <= x) &&
		(host_readbs(Real2Host(p2) + 3) != x ||
		host_readbs(Real2Host(p2) + 4) >= y) &&
		(host_readbs(Real2Host(p2) + 3) != x ||
		host_readbs(Real2Host(p2) + 4) != y ||
		host_readbs(Real2Host(p2) + 0x11) <= ds_readbs((FIG_LIST_ELEM + 0x11))))
		{

			/* p2->next != NULL */
			if (host_readd(Real2Host(p2) + 0x1b) == 0) {

				/* append to end of the list */

				/* p2->next = p1 */
				host_writed(Real2Host(p2) + 0x1b, (Bit32u)p1);
				/* p1->prev = p2 */
				host_writed(Real2Host(p1) + 0x1f, (Bit32u)p2);
				/* p1->next = NULL */
				host_writed(Real2Host(p1) + 0x1b, 0);
#if !defined(__BORLANDC__)
				D1_LOG("\tlist appended x = %d, y = %d\n", x, y);
#endif
				return host_readbs(Real2Host(p1) + 0x10);
			}

			/* p2 = p2->next */
			p2 = (RealPt)host_readd(Real2Host(p2) + 0x1b);
		}
	}

	/* p1->prev = p2->prev; */
	host_writed(Real2Host(p1) + 0x1f, host_readd(Real2Host(p2) + 0x1f));

	/* if (p2->prev) */
	if (host_readd(Real2Host(p2) + 0x1f) != 0)
		/* p2->prev->next = p1 */
		host_writed(Real2Host(host_readd(Real2Host(p2) + 0x1f)) + 0x1b, (Bit32u)p1);
	else
		/* FIG_list_start = p1 */
		ds_writed(FIG_LIST_HEAD, (Bit32u)p1);

	/* p2->prev = p1 */
	host_writed(Real2Host(p2) + 0x1f, (Bit32u)p1);
	/* p1->next = p2 */
	host_writed(Real2Host(p1) + 0x1b, (Bit32u)p2);
#if !defined(__BORLANDC__)
	D1_LOG("\tlist insert x = %d, y = %d\n", x, y);
#endif
	return host_readbs(Real2Host(p1) + 0x10);
}

/**
 * \brief   draws the heroes picture to the fight screen
 *
 * \param   loc         0 = upper left, 1 = lower left
 * \param   hero_pos    position of the hero
 */
void FIG_draw_char_pic(signed short loc, signed short hero_pos)
{
	RealPt hero;
	signed short fg_bak, bg_bak;

	hero = (RealPt)ds_readd(HEROS) + (hero_pos - 1)  * SIZEOF_HERO;
	ds_writed(PIC_COPY_SRC, (Bit32u)(hero + HERO_PORTRAIT));

	get_textcolor(&fg_bak, &bg_bak);
	set_textcolor(0xff, 0);

	ds_writed(PIC_COPY_DST, ds_readd(RENDERBUF_PTR));
	ds_writed(PRINT_STRING_BUFFER, ds_readd(RENDERBUF_PTR));

	if (loc == 0) {

		do_border((RealPt)ds_readd(RENDERBUF_PTR), 1, 9, 34, 42, 29);
		ds_writew(PIC_COPY_X1, 2);
		ds_writew(PIC_COPY_Y1, 10);
		ds_writew(PIC_COPY_X2, 33);
		ds_writew(PIC_COPY_Y2, 41);
		GUI_print_string(Real2Host(hero) + HERO_NAME2, 1, 1);

		draw_bar(0, 0, host_readw(Real2Host(hero) + HERO_LE),
			host_readw(Real2Host(hero) + HERO_LE_ORIG), 1);

		draw_bar(1, 0, host_readw(Real2Host(hero) + HERO_AE),
			host_readw(Real2Host(hero) + HERO_AE_ORIG), 1);
	} else {
		do_border((RealPt)ds_readd(RENDERBUF_PTR), 1, 157, 34, 190, 29);
		ds_writew(PIC_COPY_X1, 2);
		ds_writew(PIC_COPY_Y1, 158);
		ds_writew(PIC_COPY_X2, 33);
		ds_writew(PIC_COPY_Y2, 189);
		GUI_print_string(Real2Host(hero) + HERO_NAME2, 1, 193);
	}

	do_pic_copy(0);
	ds_writed(PIC_COPY_DST, ds_readd(FRAMEBUF_PTR));
	ds_writed(PRINT_STRING_BUFFER, ds_readd(FRAMEBUF_PTR));
	set_textcolor(fg_bak, bg_bak);
}

/**
 * \brief   draws a picture of the monster, when on turn
 *
 * \param   loc         0 = left side, 1 = right side
 * \param   id          ID of the enemy
 */
void FIG_draw_enemy_pic(signed short loc, signed short id)
{
	signed short height_width;
	Bit8u *p_enemy;
	signed short fg_bak;
	signed short bg_bak;
	RealPt p1;
	struct nvf_desc nvf;

	p1 = F_PADD((RealPt)(ds_readd(BUFFER8_PTR)), -1288);

	p_enemy = p_datseg + (ENEMY_SHEETS - 10*SIZEOF_ENEMY_SHEET) + id * SIZEOF_ENEMY_SHEET;

	if (ds_readbs(GFXTAB_FIGURES_MAIN + host_readbs(p_enemy + ENEMY_SHEET_GFX_ID) * 5) != ds_readws(FIGHT_FIGS_INDEX)) {

		nvf.src = Real2Host(load_fight_figs(ds_readbs(GFXTAB_FIGURES_MAIN + host_readbs(p_enemy + ENEMY_SHEET_GFX_ID) * 5)));
		nvf.dst = Real2Host(p1);
		nvf.nr = 1;
		nvf.type = 0;
		nvf.width = (Bit8u*)&height_width;
		nvf.height = (Bit8u*)&height_width;

		process_nvf(&nvf);

		ds_writew(FIGHT_FIGS_INDEX,
			ds_readbs(GFXTAB_FIGURES_MAIN + host_readbs(p_enemy + ENEMY_SHEET_GFX_ID) * 5));
	}

	/* save and set text colors */
	get_textcolor(&fg_bak, &bg_bak);
	set_textcolor(0xff, 0);

	/* set gfx address */
	ds_writed(PIC_COPY_DST, ds_readd(RENDERBUF_PTR));
	ds_writed(PRINT_STRING_BUFFER, ds_readd(RENDERBUF_PTR));

	if (loc == 0) {
		do_border((RealPt)ds_readd(RENDERBUF_PTR), 1, 9, 34, 50, 0x1d);
		ds_writew(PIC_COPY_X1, 2);
		ds_writew(PIC_COPY_Y1, 10);
		ds_writew(PIC_COPY_X2, 33);
		ds_writew(PIC_COPY_Y2, 49);
		ds_writed(PIC_COPY_SRC, (Bit32u)p1);
		do_pic_copy(0);
		GUI_print_string(Real2Host(GUI_name_singular(get_monname(host_readbs(p_enemy)))), 1, 1);
	} else {
		do_border((RealPt)ds_readd(RENDERBUF_PTR), 1, 149, 34, 190, 0x1d);
		ds_writew(PIC_COPY_X1, 2);
		ds_writew(PIC_COPY_Y1, 150);
		ds_writew(PIC_COPY_X2, 33);
		ds_writew(PIC_COPY_Y2, 189);
		ds_writed(PIC_COPY_SRC, (Bit32u)p1);
		do_pic_copy(0);
		GUI_print_string(Real2Host(GUI_name_singular(get_monname(host_readbs(p_enemy)))), 1, 193);
	}

	ds_writed(PIC_COPY_DST, ds_readd(FRAMEBUF_PTR));
	ds_writed(PRINT_STRING_BUFFER, ds_readd(FRAMEBUF_PTR));

	set_textcolor(fg_bak, bg_bak);
}

#if !defined(__BORLANDC__)
}
#endif
