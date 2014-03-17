/*
	Rewrite of DSA1 v3.02_de functions of seg044 (Fightsystem)
	Functions rewritten: 4/6
*/

#include "string.h"

#include "v302de.h"

#include "seg002.h"
#include "seg007.h"
#include "seg038.h"

#if !defined(__BORLANDC__)
namespace M302de {
#endif

/**
 * copy_ani_seq() - copies an animation sequence
 * @dst:	where to copy the sequence
 * @ani:	the number of the animation sequence
 * @type:	type of animation (3 = WEAPANI.DAT else ANI.DAT)
 *
 * @return	the number of copied bytes
 */
/* Borlandified and identical */
Bit16s copy_ani_seq(Bit8u *dst, Bit16s ani, Bit16u type)
{
	Bit8u *p_start, *p_off;
	Bit16s nr_anis;
	Bit16s i;
	Bit8s length;

	/* get pointer from ANI.DAT */
	p_start = Real2Host(ds_readd(BUFFER_ANIDAT));

	/* check if we must use WEAPANI.DAT */
	if (type == 3)
		p_start = Real2Host(ds_readd(BUFFER_WEAPANIDAT));

	/* get number of animation sequences */
	nr_anis = host_readw(p_start);

	/* sanity check */
	if (ani < 0)
		return 0;

	if (ani > nr_anis)
		return 0;

	/* set p_off the the first data byte */
	p_off = p_start;
	p_off += nr_anis + 2;

	/* set p_off the first byte of the requested animation sequence */
	length = host_readb(p_start + 2);

	for (i = 1; i <= ani; i++) {
		p_off += length;
		length = host_readb(p_start + i + 2);
	}

	/* skip the first byte */
	p_off++;
	/* calc the length of the sequence */
	length -= 2;

	/* copy them */
	for (i = 0; i < length; p_off++, dst++, i++)
		host_writeb(dst, host_readb(p_off));

	return length;
}

/**
 * seg044_00ae() - return the first byte of a sequence from ANI.DAT
 * @ani:	the number of the animation sequence
 */
/* Borlandified and identical */
Bit8s seg044_00ae(Bit16s ani)
{
	Bit8u *p_start, *p_off;
	Bit8s length;
	Bit16s nr_anis;
	Bit16s i;

	/* get pointer from ANI.DAT */
	p_start = Real2Host(ds_readd(BUFFER_ANIDAT));

	/* get number of ani seqences in ANI.DAT */
	nr_anis = host_readw(p_start);

	if (ani < 0)
		return 0;

	if (ani > nr_anis)
		return 0;

	p_off = p_start;
	p_off += nr_anis + 2;

	length = host_readb(p_start + 2);

	for (i = 1; i <= ani; i++) {
		p_off += length;
		length = host_readb(p_start + i + 2);
	}

#if 0
	D1_INFO("ani = 0x%x\tlength = %d\n", ani, length);
	for (i = 0; i < length; i++) {
		D1_INFO("%x ", host_readb(p_off + i));
	}
	D1_INFO("\n");
#endif

	return host_readb(p_off);
}

/**
 *
 * @v1: 0 or 1
 * @hero: pointer to a hero
 * @v2: 99 or 4
 * @obj1:
 * @obj2:
 * @v5: -1 or a var
 * @v6: 0 or 1
 */

void seg044_002a(Bit16u v1, Bit8u *hero, Bit16u v2, Bit8s obj1, Bit8s obj2,
			Bit16u v5, Bit16u v6)
{
	signed short x_obj1, y_obj1;
	signed short x_obj2, y_obj2;
	Bit16s dir, l2, l3;
	register Bit16s si, di;
	Bit8u *lp1;
	Bit8u *lp2;

	/* TODO: Stackframe is too large 2 Byte */

	/* get a pointer from an array where the Monster-ID serves as index */
	lp2 = Real2Host(ds_readd(0x2555 + host_readbs(hero + 0x9b) * 4));

	FIG_search_obj_on_cb(obj2, &x_obj2, &y_obj2);
	FIG_search_obj_on_cb(obj1, &x_obj1, &y_obj1);

	if (x_obj1 == x_obj2) {
		if (y_obj2 < y_obj1)
			dir = 1;
		else
			dir = 3;
	} else {
		if (x_obj2 < x_obj1)
			dir = 2;
		else
			dir = 0;
	}

	if (obj2 == obj1)
		dir = host_readbs(hero + 0x82);

	if (v2 == 4) {
		di = (v5 == 1) ? 37 : 29;
	} else
		di = 16;

	if (v2 == 4)
		di += dir;
	else
		di += host_readbs(hero + 0x82);

	lp1 = p_datseg + 0xd8cf + v1 * 0xf3;

	ds_writeb(0xd8ce + v1 * 0xf3, seg044_00ae(host_readw(lp2 + di * 2)));

	ds_writeb(0xd9c0 + v1 * 0xf3, host_readbs(hero + 0x9b));

	if ((host_readbs(hero + 0x82) != dir) && (v2 == 4)) {

		ds_writeb(0xd8ce + v1 * 0xf3, 0);
		l3 = l2 = -1;
		si = host_readbs(hero + 0x82);
		l3 = si;
		si++;
		if (si == 4)
			si = 0;

		if (si != dir) {
			l2 = si;
			si++;
			if (si == 4)
				si = 0;

			if (si != dir) {
				l3 = host_readbs(hero + 0x82) + 4;
				l2 = -1;
			}
		}

		host_writeb(hero + 0x82, (signed char)dir);
		lp1 += copy_ani_seq(lp1, host_readw(lp2 + l3 * 2), 2);

		if (l2 != -1)
			lp1 += copy_ani_seq(lp1, host_readw(lp2 + l2 * 2), 2);

		host_writeb(lp1, 0xfc);
		lp1++;

		host_writeb(lp1, seg044_00ae(host_readw(lp2 + di * 2)));
		lp1++;

		host_writeb(lp1, 0x00);
		lp1++;
	}

	if ((v2 == 4) || check_hero(hero) ||
		((ds_readw(0xe3a8) != 0) && (v6 == 0)) ||
		((ds_readw(0xe3a6) != 0) && (v6 == 1))) {

		lp1 += copy_ani_seq(lp1, host_readw(lp2 + di * 2), 2);
	}

	if (((ds_readw(0xe3a8) != 0) && (v6 == 0)) ||
		((ds_readw(0xe3a6) != 0) && (v6 == 1))) {

		host_writeb(lp1, 0xfc);
		lp1++;

		host_writeb(lp1, seg044_00ae(host_readw(lp2 + 0x28)));
		lp1++;

		host_writeb(lp1, 0x00);
		lp1++;

		lp1 += copy_ani_seq(lp1, host_readw(lp2 + 0x28), 2);
	}

	host_writeb(lp1, 0xff);
}


/**
 * seg044_002f() - prepares a spell animation
 * @v1:		0 or 1
 * @p:		????
 * @v2:		4 of 99
 * @target:	the id of the target
 * @caster:	the id of the caster
 * @v5:		0 or 1
 *
 * This is used for "Blitz", "Fulminictus", "Ignifaxius"

 */

void seg044_002f(Bit16u v1, Bit8u *p, Bit16u v2, Bit16s target, Bit16s caster,
								Bit16u v5)
{
	Bit8u *lp1;		/* mostly written */
	Bit8u *lp2;		/* read only */
	Bit16s l1, l2, l3;	/* indicees to lp2 */
	signed short x_target, y_target;
	signed short x_caster, y_caster;
	Bit16s dir, dir2;


	/* get a pointer from an array where the Monster-ID serves as index */
	lp2 = Real2Host(ds_readd(0x2555 + host_readb(p + 1) * 4));

	FIG_search_obj_on_cb(caster, &x_caster, &y_caster);
	FIG_search_obj_on_cb(target, &x_target, &y_target);

	if (x_target == x_caster) {
		if (y_caster < y_target)
			dir = 1;
		else
			dir = 3;
	} else {
		if (x_caster < x_target)
			dir = 2;
		else
			dir = 0;
	}

	if (target == caster)
		dir = (signed char)host_readb(p + 0x27);

	/* this is true if a monster attacks a hero */
	if (v2 == 4)
		l1 = 29;
	else
		l1 = 16;

	lp1 = p_datseg + 0xd8cf + v1 * 0xf3;

	/* this is true if a monster attacks a hero */
	if (v2 == 4)
		l1 += dir;
	else
		l1 += (signed char)host_readb(p + 0x27);

	ds_writeb(0xd8ce + v1 * 0xf3, seg044_00ae(host_readw(lp2 + l1 * 2)));

	ds_writeb(0xd9c0 + v1 * 0xf3, host_readb(p + 1));

	if (((signed char)host_readb(p + 0x27) != dir) && (v2 == 4)) {

		ds_writeb(0xd8ce + v1 * 0xf3, 0);
		l2 = -1;
		l3 = -1;

		dir2 = (signed char)host_readb(p + 0x27);
		l3 = dir2;
		dir2++;
		if (dir2 == 4)
			dir2 = 0;

		if (dir2 != dir) {

			l2 = dir2;
			dir2++;
			if (dir2 == 4)
				dir2 = 0;
			if (dir2 != dir) {
				l3 = (signed char)host_readb(p + 0x27) + 4;
				l2 = -1;
			}
		}

		host_writeb(p + 0x27, (signed char)dir);

		lp1 += copy_ani_seq(lp1, host_readw(lp2 + l3 * 2), 1);

		if (l2 != -1)
			lp1 += copy_ani_seq(lp1, host_readw(lp2 + l2 * 2), 1);

		host_writeb(lp1, 0xfc);
		lp1++;

		host_writeb(lp1, seg044_00ae(host_readw(lp2 + l1 * 2)));
		lp1++;

		host_writeb(lp1, 0);
		lp1++;
	}

	lp1 += copy_ani_seq(lp1, host_readw(lp2 + l1 * 2), 1);

	if (((ds_readw(0xe3a8) != 0) && (v5 == 0)) ||
		((ds_readw(0xe3a6) != 0) && (v5 == 1))) {

		host_writeb(lp1, 0xfc);
		lp1++;

		host_writeb(lp1, seg044_00ae(host_readw(lp2 + 0x28)));
		lp1++;

		host_writeb(lp1, 0);
		lp1++;

		lp1 += copy_ani_seq(lp1, host_readw(lp2 + 0x28), 1);
	}

	host_writeb(lp1, 0xff);

	/* check if the moster sprite ID needs two fields */
	if (is_in_byte_array(host_readb(p + 1),
		p_datseg + TWO_FIELDED_SPRITE_ID)) {
			memcpy(p_datseg + 0xdab4 + v1 * 0xf3,
				p_datseg + 0xd8ce + v1 * 0xf3,
				0xf3);
	}

}

#if !defined(__BORLANDC__)
}
#endif
