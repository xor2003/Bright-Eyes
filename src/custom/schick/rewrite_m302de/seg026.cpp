/**
 *	Rewrite of DSA1 v3.02_de functions of seg026 (texts savegames)
 *	Functions rewritten: 15/15 (complete)
 *
 *	Borlandified and identical
 *	Compiler:	Borland C++ 3.1
 *	Call:		BCC.EXE -mlarge -O- -c -1 -Yo seg026.cpp
 */
#include <stdio.h>
#include <string.h>

#include "v302de.h"

#include "seg000.h"
#include "seg002.h"
#include "seg026.h"
#include "seg028.h"
#include "seg097.h"
#include "seg106.h"

#if !defined(__BORLANDC__)
namespace M302de {
#endif

void init_text(void)
{
	Bit32s len;
	signed short handle;

	handle = load_archive_file(ARCHIVE_FILE_FONT6);
	read_archive_file(handle, Real2Host(ds_readd(BUF_FONT6)), 1000);
	bc_close(handle);

	handle = load_archive_file(ARCHIVE_FILE_TEXT_LTX);
	len = (signed short)read_archive_file(handle, Real2Host(ds_readd(0xd2b9)), 64000);
	bc_close(handle);

	split_textbuffer(Real2Host(ds_readd(TEXT_LTX)), (RealPt)ds_readd(0xd2b9), len);

	handle = load_archive_file(ARCHIVE_FILE_ITEMNAME);
	len = (signed short)read_archive_file(handle, Real2Host(ds_readd(0xd2a5)), 5000);
	bc_close(handle);

	split_textbuffer(Real2Host(ds_readd(ITEMSNAME)), (RealPt)ds_readd(0xd2a5), len);

	handle = load_archive_file(ARCHIVE_FILE_MONNAMES);
	len = (signed short)read_archive_file(handle, Real2Host(ds_readd(0xd2a1)), 5000);
	bc_close(handle);

	split_textbuffer(Real2Host(ds_readd(MONNAMES)), (RealPt)ds_readd(0xd2a1), len);

}

void load_buffer_1(signed short index)
{
	Bit32s len;
	signed short fd;

	if (index == -1)
		return;

	fd = load_archive_file(index);

	len = (signed short)read_archive_file(fd, Real2Host(ds_readd(0xd2b5)), 64000);

	bc_close(fd);

	split_textbuffer(Real2Host(ds_readd(DIALOG_TEXT)), (RealPt)ds_readd(0xd2b5), len);

	ds_writew(0x26bf, index);
}

void load_city_ltx(signed short index)
{
	Bit32s len;
	register signed short fd;

	if (index == -1)
		return;

	ds_writew(0x26bd, index);
	fd = load_archive_file(index);
	len = (signed short)read_archive_file(fd, Real2Host(ds_readd(0xc3a9)), 12000);
	bc_close(fd);

	split_textbuffer(Real2Host(ds_readd(CITY_LTX)), (RealPt)ds_readd(0xc3a9), len);
}

void load_ltx(unsigned short index)
{
	Bit32s len;
	signed short fd;

	fd = load_archive_file(index);
	ds_writew(0x2ccb, 0xffff);
	len = (signed short)read_archive_file(fd, Real2Host(ds_readd(0xd019)) + 1000, 64000);
	bc_close(fd);

	split_textbuffer(Real2Host(ds_readd(0xd019)),
		F_PADD((RealPt)ds_readd(0xd019), 1000L), len);
}

void split_textbuffer(Bit8u *dst, RealPt src, Bit32u len)
{
	Bit32u i = 0;

	host_writed(dst, (Bit32u)src);
	dst += 4;

	for (; i != len; src++, i++) {
		/* continue if not the end of the string */
		if (!host_readbs(Real2Host(src))) {

			/* write the adress of the next string */
			host_writed(dst, (Bit32u)(src + 1));
			dst += 4;
		}
	}
}

void load_ggsts_nvf(void)
{
	Bit16u fd;

	/* seek to GGSTS.NVF */
	fd = load_archive_file(ARCHIVE_FILE_GGSTS_NVF);
	/* read it */
	read_archive_file(fd, Real2Host(ds_readd(0xd2a9)), 16771);
	/* close it */
	bc_close(fd);

	ds_writew(0x2ccb, 0xffff);
}

void prepare_chr_name(char *dst, char *src)
{
	char tmp_str[40];
	signed short i;

	strcpy(tmp_str, src);

	for (i = 0; i < 8; i++) {

		if (!tmp_str[i])
			break;

		/* maybe !isalnum(tmp_str[i]) */
		if (!(ds_readbs(0xb4e9 + tmp_str[i]) & 0x0e)) {
			tmp_str[i] = 0x5f;
		}
	}

	strncpy(dst, tmp_str, 8);
	dst[8] = '\0';
	strcat(dst, (char*)p_datseg + 0x5e3e);
}

void prepare_sg_name(char *dst, char *src)
{
	char tmp_str[40];
	signed short i;

	strcpy(tmp_str, src);

	i = 0;
	while (i < 8) {

		if (!tmp_str[i]) {
			while (i < 8) {
				/* fill up with underscores */
				tmp_str[i] = 0x5f;
				i++;
			}
			break;
		}

		/* maybe !isalnum(tmp_str[i]) */
		if (!(ds_readbs(0xb4e9 + tmp_str[i]) & 0x0e)) {
			tmp_str[i] = 0x5f;
		}
		i++;
	}

	strncpy(dst, tmp_str, 8);
	dst[8] = '\0';
}

signed short load_game_state(void)
{
	register signed short handle_gs;
	signed short i;
	signed short handle;
	signed short answer;
	signed short l1;
	HugePt p_status_start;
	HugePt p_status_end;
	signed short status_length;
	signed short l2;
	signed short l3;
	signed short retval;
	signed short l4;
	RealPt hero_i;
	signed char version[4];
	struct ffblk blk;
	char name[20];

	retval = 0;

	/* select a game state */
	answer = GUI_radio(get_ltx(0), 6,
			p_datseg + (0xe2da + 0),
			p_datseg + (0xe2da + 9),
			p_datseg + (0xe2da + 18),
			p_datseg + (0xe2da + 27),
			p_datseg + (0xe2da + 36),
			get_ltx(0xb84)) -1;

	/* sanity check if answer is in range */
	if (answer != -2 && answer != 5) {

		prepare_sg_name((char*)Real2Host(ds_readd(0xd2eb)), (char*)p_datseg + 0xe2da + 9 * answer);
		/* concat with ".gam" */
		strcat((char*)Real2Host(ds_readd(0xd2eb)), (char*)p_datseg + 0x5e43);

		/* open the game state file */
		if ((handle_gs = bc__open((RealPt)ds_readd(0xd2eb), 0x8001)) == -1) {
			GUI_output(get_ltx(0x9ec));
			retval = -1;
			return retval;
		}

		update_mouse_cursor();

		/* something ani related */
		l1 = ds_readws(0xc3cb);
		ds_writew(0xc3cb, 0);

		l4 = ds_readws(0x29ae);
		ds_writew(0x29ae, 0);

		/* delete every file in TEMP */
		sprintf((char*)Real2Host(ds_readd(0xd2eb)),
			/* "TEMP\\%s" */
			(char*)Real2Host(ds_readd(0x4c88)),
			/* "*.*" */
			(char*)p_datseg + 0x5e48);

		l2 = bc_findfirst((RealPt)ds_readd(0xd2eb), &blk, 0);

		if (l2 == 0) {

			do {
				sprintf((char*)Real2Host(ds_readd(0xd2eb)),
					(char*)Real2Host(ds_readd(0x4c88)),
					((char*)(&blk))+ 30);

				bc_unlink((RealPt)ds_readd(0xd2eb));

				l2 = bc_findnext(&blk);

			} while (l2 == 0);
		}

		/* init */
		ds_writed(0xe2d2, ds_readd(DTP2));
		memset(Real2Host(ds_readd(0xe2d2)), 0, 286 * 4);

		/* read version info */
		bc__read(handle_gs, Real2Host(ds_readd(0xd2eb)), 12);
		bc__read(handle_gs, (Bit8u*)&version[3], 1);
		bc__read(handle_gs, (Bit8u*)&version[2], 1);
		bc__read(handle_gs, (Bit8u*)&version[0], 1);
		bc__read(handle_gs, (Bit8u*)&version[1], 1);

		bc__read(handle_gs, p_datseg + 0x2d34, 4);

		/* read game status */
		p_status_start = (HugePt)RealMake(datseg, 0x2d34);
		p_status_end = (HugePt)RealMake(datseg, 0x4474);
#if !defined(__BORLANDC__)
		status_length = (signed short)F_PSUB(p_status_end, p_status_start);
#else
		status_length = (signed short)(p_status_end - p_status_start);
#endif

		bc__read(handle_gs, p_datseg + 0x2d34, status_length);

		ds_writeb(0x45b8, 1);

		/* read file table */
		bc__read(handle_gs, Real2Host(ds_readd(0xe2d2)), 286 * 4);

		/* create for each saved file in gam a file in TEMP */
		for (i = 0; i < 286; i++) {

			if (host_readd(Real2Host(ds_readd(0xe2d2)) + 4 * i)) {

				/* write file content to TEMP */
				sprintf((char*)Real2Host(ds_readd(0xd2eb)),
					(char*)Real2Host(ds_readd(0x4c88)),
					(char*)Real2Host(ds_readd(FNAMES + 4 * i)));

				handle = bc__creat((RealPt)ds_readd(0xd2eb), 0);

				bc__read(handle_gs, Real2Host(ds_readd(0xd303)), (unsigned short)host_readd(Real2Host(ds_readd(0xe2d2)) + 4 * i));
				bc__write(handle, (RealPt)ds_readd(0xd303), (unsigned short)host_readd(Real2Host(ds_readd(0xe2d2)) + 4 * i));
				bc_close(handle);
			}
		}

		/* clear the heros */
		hero_i = (RealPt)ds_readd(HEROS);
		for (i = 0; i <= 6; i++, hero_i += SIZEOF_HERO) {
			memset(Real2Host(hero_i), 0, SIZEOF_HERO);
		}

		hero_i = (RealPt)ds_readd(0xd303);

		do {
			l3 = bc__read(handle_gs, Real2Host(hero_i), SIZEOF_HERO);

			if (l3 != 0) {

				prepare_chr_name(name, (char*)Real2Host(hero_i));

				/* write file content to TEMP */
				sprintf((char*)Real2Host(ds_readd(0xd2eb)),
					(char*)Real2Host(ds_readd(0x4c88)),
					name);

				handle = bc__creat((RealPt)ds_readd(0xd2eb), 0);

				bc__write(handle, hero_i, SIZEOF_HERO);
				bc_close(handle);

				if (host_readbs(Real2Host(hero_i) + HERO_GROUP_POS) != 0) {

					prepare_chr_name(name, (char*)Real2Host(hero_i));
#if !defined(__BORLANDC__)
					{
						/* create a char[20] on the stack */
						Bit16u sp_bak = reg_sp;
						reg_sp -= 20;

						RealPt r_name = RealMake(SegValue(ss), reg_sp);
						strncpy((char*)Real2Host(r_name), name, 20);
						host_writeb(Real2Host(r_name) + 20, 0);
						read_chr_temp(r_name, host_readbs(Real2Host(hero_i) + HERO_GROUP_POS) - 1, host_readbs(Real2Host(hero_i) + HERO_GROUP_NO));
						reg_sp = sp_bak;
					}
#else
					read_chr_temp(name, host_readbs(Real2Host(hero_i) + HERO_GROUP_POS) - 1, host_readbs(Real2Host(hero_i) + HERO_GROUP_NO));
#endif
				}
			}
		} while (l3 != 0);

		bc_close(handle_gs);

		/* search for "*.CHR" */
		l2 = bc_findfirst((RealPt)RealMake(datseg, 0x5e4c), &blk, 0);

		while (l2 == 0) {

			sprintf((char*)Real2Host(ds_readd(0xd2eb)),
				(char*)Real2Host(ds_readd(0x4c88)),
				((char*)(&blk)) + 30);

			if ((handle_gs = bc__open((RealPt)ds_readd(0xd2eb), 0x8004)) == -1) {
#if !defined(__BORLANDC__)
				{
					Bit16u sp_bak = reg_sp;
					reg_sp -= 128;
					RealPt fname = RealMake(SegValue(ss), reg_sp);
					strncpy((char*)Real2Host(fname), (char*)(&blk) + 30, 128);
					host_writeb(Real2Host(fname) + 128, 0);
					handle = bc__open(fname, 0x8004);
					reg_sp = sp_bak;
				}
#else
				handle = bc__open((char*)(&blk) + 30, 0x8004);
#endif
				bc__read(handle, Real2Host(ds_readd(0xd303)), SIZEOF_HERO);
				bc_close(handle);

				handle_gs = bc__creat((RealPt)ds_readd(0xd2eb), 0);
				bc__write(handle_gs, (RealPt)ds_readd(0xd303), SIZEOF_HERO);
			} else {
				/* Yes, indeed! */
			}

			bc_close(handle_gs);

			l2 = bc_findnext(&blk);
		}

		for (i = ARCHIVE_FILE_NPCS; i <= (ARCHIVE_FILE_NPCS+5); i++) {
			load_npc(i);

			if (host_readbs(get_hero(6) + HERO_GROUP_POS) != 7) {
				memset(get_hero(6), 0, SIZEOF_HERO);
			} else {
				break;
			}
		}

		ds_writew(0x2ccb, -1);
		ds_writew(0x2846, retval = 1);
		ds_writew(CHECK_DISEASE, 0);
		ds_writew(CHECK_POISON, 0);
		ds_writeb(0x4475, 3);

		if (ds_readbs(LOCATION) != 2) {
			ds_writebs((0xbd38 + 6), ds_writebs((0xbd38 + 7), ds_writebs((0xbd38 + 8), -1)));
		}

		load_area_description(2);

		ds_writews(0xc3cb, l1);
		ds_writews(0x29ae, l4);

		refresh_screen_size();
	}

	return retval;
}

/**
 * \brief writes a game state file
 * \return 1 = OK, 0 = error
 */
signed short save_game_state(void)
{
	signed short l_di;
	HugePt p_status_start;
	HugePt p_status_end;
	unsigned short status_len;
	signed short handle;
	signed short tw_bak;
	signed short l1;
	signed short slot;
	Bit32u filepos;
	Bit32u filepos2;
	signed short flag;
	Bit32u len;
	struct ffblk blk;

	tw_bak = ds_readws(TEXTBOX_WIDTH);
	ds_writew(TEXTBOX_WIDTH, 5);

	/* prepare the header for the radio box */
	if (ds_readws(0xc3c1) == 99) {

		/* game done */
		strcpy((char*)Real2Host(ds_readd(0xd2eb)), (char*)get_ltx(0xca8));

	} else {

		if (ds_readbs(LOCATION) != 2 && ds_readws(0xc3c1) != 99) {

			/* save outside the temple */

			sprintf((char*)Real2Host(ds_readd(DTP2)),
				(char*)get_ltx(0xcb4),
				1,
				get_ltx(0x620),
				p_datseg + 0x5e52);

			sprintf((char*)Real2Host(ds_readd(0xd2eb)),
				(char*)get_ltx(4),
				(char*)Real2Host(ds_readd(DTP2)));
		} else {

			/* save inside a temple */
			sprintf((char*)Real2Host(ds_readd(0xd2eb)),
				(char*)get_ltx(4),
				(char*)p_datseg + 0x5e53);
		}
	}

	/* get the slot number */
	slot = GUI_radio(Real2Host(ds_readd(0xd2eb)), 6,
			p_datseg + (0xe2da + 9 * 0),
			p_datseg + (0xe2da + 9 * 1),
			p_datseg + (0xe2da + 9 * 2),
			p_datseg + (0xe2da + 9 * 3),
			p_datseg + (0xe2da + 9 * 4),
			get_ltx(0xb84)) - 1;

	ds_writew(TEXTBOX_WIDTH, tw_bak);

	ds_writed(0xe2d2, ds_readd(DTP2));
	memset(Real2Host(ds_readd(0xe2d2)), 0, 4 * 286);

	if (slot != -2 && slot != 5) {

		do {
			/* ask for filename */
			ds_writew(0x26b7, 1);
			strcpy((char*)Real2Host(ds_readd(0xd2ef)), (char*)p_datseg + 0xe2da + 9 * slot);
			GUI_input(get_ltx(0x9e8), 8);
			ds_writew(0x26b7, 0);

			if (host_readbs(Real2Host(ds_readd(0xd2ef))) == 0) {
				return 0;
			}

			flag = 0;

			prepare_sg_name((char*)Real2Host(ds_readd(0xd2eb)), (char*)Real2Host(ds_readd(0xd2ef)));

			for (tw_bak = 0; tw_bak < 5; tw_bak++) {

				prepare_sg_name((char*)Real2Host(ds_readd(0xd2eb)) + 50, (char*)p_datseg + 0xe2da + 9 * tw_bak);

				if (slot != tw_bak && !strcmp((char*)Real2Host(ds_readd(0xd2eb)), (char*)Real2Host(ds_readd(0xd2eb)) + 50)) {

					GUI_output(get_ltx(0xc98));
					flag = 1;
				}
			}
		} while (flag != 0);

		/* delete the previous file of that slot */
		prepare_sg_name((char*)Real2Host(ds_readd(0xd2eb)), (char*)p_datseg + 0xe2da + 9 * slot);
		strcat((char*)Real2Host(ds_readd(0xd2eb)), (char*)p_datseg + 0x5e54);
		bc_unlink((RealPt)ds_readd(0xd2eb));
		strcpy((char*)p_datseg + 0xe2da + 9 * slot, (char*)Real2Host(ds_readd(0xd2ef)));

		/* create a CHR-file for each hero in TEMP */
		for (tw_bak = 0; tw_bak < 6; tw_bak++) {

			if (host_readbs(get_hero(tw_bak) + HERO_TYPE) != 0) {

				/* save position on the playmask */
				host_writebs(get_hero(tw_bak) + HERO_GROUP_POS, tw_bak + 1);

				if (ds_readws(0xc3c1) != 99 &&
					ds_readbs(LOCATION) != 2 &&
					host_readds(get_hero(tw_bak) + HERO_AP) > 0)
				{
					add_hero_ap(get_hero(tw_bak), -1L);
				}

				write_chr_temp(tw_bak);
			}
		}

		/* save the current NPC in TEMP */
		if (host_readbs(get_hero(6) + HERO_TYPE) != 0) {

			host_writeb(get_hero(6) + HERO_GROUP_POS, 7);
			save_npc(host_readbs(get_hero(6) + HERO_NPC_ID) + 225);
		}

		load_area_description(1);

		p_status_start = (HugePt)RealMake(datseg, 0x2d34);
		p_status_end = (HugePt)RealMake(datseg, 0x4474);
#if !defined(__BORLANDC__)
		status_len = (signed short)F_PSUB(p_status_end, p_status_start);
#else
		status_len = (signed short)(p_status_end - p_status_start);
#endif

		prepare_sg_name((char*)Real2Host(ds_readd(0xd2eb)), (char*)p_datseg + 0xe2da + 9 * slot);
		strcat((char*)Real2Host(ds_readd(0xd2eb)), (char*)p_datseg + 0x5e59);

		while ((l_di = bc__creat((RealPt)ds_readd(0xd2eb), 0)) == -1) {
			GUI_output(get_ltx(0x570));
			return 0;
		}

#if !defined(__BORLANDC__)
		bc_time_dosbox((RealPt)RealMake(datseg, 0xe2d6));
#else
		bc_time((Bit32s*)RealMake(datseg, 0xe2d6));
#endif

		filepos = 0;

		/* write version identifier 16 bytes */
		filepos += bc__write(l_di, (RealPt)RealMake(datseg, 0x46e0), 12);
		filepos += bc__write(l_di, (RealPt)RealMake(datseg, 0x46fb), 1);
		filepos += bc__write(l_di, (RealPt)RealMake(datseg, 0x46fa), 1);
		filepos += bc__write(l_di, (RealPt)RealMake(datseg, 0x46f8), 1);
		filepos += bc__write(l_di, (RealPt)RealMake(datseg, 0x46f9), 1);

		/* write fileposition 4 bytes */
		/* this will be updated later to find the data of the CHR files */
#if !defined(__BORLANDC__)
		/*	The value of filepos needs to be written to the file in
		 *	LE format. bc__write() needs an adress in RealMode-Space,
		 *	so some space on the stack is allocated.
		 */
		{
			Bit16u sp_bak = reg_sp;
			reg_sp -= 64;
			RealPt fp_le = RealMake(SegValue(ss), reg_sp);

			host_writed(Real2Host(fp_le), filepos);
			filepos += bc__write(l_di, fp_le, 4);

			reg_sp = sp_bak;
		}
#else
		filepos += bc__write(l_di, &filepos, 4);
#endif

		/* save the satus section 5952 bytes */
		filepos += bc__write(l_di, p_status_start, status_len);

		/* check if enough bytes were written */
		if (status_len + 16 + 4L != filepos) {
			GUI_output(get_ltx(0x570));
			bc_close(l_di);
			return 0;
		}

		filepos2 = filepos;
		len = (Bit16u)bc__write(l_di, (RealPt)ds_readd(0xe2d2), 4 * 286);
		filepos += len;

		if (len != 4 * 286) {
			GUI_output(get_ltx(0x570));
			bc_close(l_di);
			return 0;
		}

		/* save all changed files from SCHICK.DAT */
		for (tw_bak = 0; tw_bak < 286; tw_bak++) {

			sprintf((char*)Real2Host(ds_readd(0xd2eb)),
				(char*)Real2Host(ds_readd(0x4c88)),
				(char*)Real2Host(ds_readd(FNAMES + 4 * tw_bak)));

			l1 = bc_findfirst((RealPt)ds_readd(0xd2eb), &blk, 0);


			if (l1 == 0) {

				handle = load_archive_file(tw_bak + 0x8000);
				host_writed(Real2Host(ds_readd(0xe2d2)) + 4 * tw_bak, get_readlength2(handle));
				bc__read(handle, Real2Host(ds_readd(0xd303)), (unsigned short)host_readd(Real2Host(ds_readd(0xe2d2)) + 4 * tw_bak));
				bc_close(handle);

				len = (Bit16u)bc__write(l_di, (RealPt)ds_readd(0xd303), (unsigned short)host_readd(Real2Host(ds_readd(0xe2d2)) + 4 * tw_bak));
				filepos += len;

				if ((Bit16u)host_readd(Real2Host(ds_readd(0xe2d2)) + 4 * tw_bak) != len) {
					GUI_output(get_ltx(0x570));
					bc_close(l_di);
					return 0;
				}
			}
		}

		/* skip back to the start of the offset of the CHR data */
		bc_lseek(l_di, 16, 0);
#if !defined(__BORLANDC__)
		/*	The value of filepos needs to be written to the file in
		 *	LE format. bc__write() needs an adress in RealMode-Space,
		 *	so some space on the stack is allocated.
		 */
		{
			Bit16u sp_bak = reg_sp;
			reg_sp -= 64;
			RealPt fp_le = RealMake(SegValue(ss), reg_sp);

			host_writed(Real2Host(fp_le), filepos);
			bc__write(l_di, fp_le, 4);

			reg_sp = sp_bak;
		}
#else
		bc__write(l_di, &filepos, 4);
#endif

		/* write the file table */
		bc_lseek(l_di, filepos2, 0);
		bc__write(l_di, (RealPt)ds_readd(0xe2d2), 4 * 286);

		/* append all CHR files */
		bc_lseek(l_di, filepos, 0);
		sprintf((char*)Real2Host(ds_readd(0xd2eb)),
			(char*)Real2Host(ds_readd(0x4c88)),
			(char*)p_datseg + 0x5e5e);

		l1 = bc_findfirst((RealPt)ds_readd(0xd2eb), &blk, 0);
		do {
			/* create the CHR filename */
			sprintf((char*)Real2Host(ds_readd(0xd2eb)),
				(char*)Real2Host(ds_readd(0x4c88)),
				((char*)(&blk)) + 30);

			/* read the CHR file from temp */
			handle = bc__open((RealPt)ds_readd(0xd2eb), 0x8004);
			bc__read(handle, Real2Host(ds_readd(0xd303)), SIZEOF_HERO);
			bc_close(handle);

			/* append it */
			len = bc__write(l_di, (RealPt)ds_readd(0xd303), SIZEOF_HERO);

			if (len != SIZEOF_HERO) {
				GUI_output(get_ltx(0x570));
				bc_close(l_di);
				return 0;
			}

			l1 = bc_findnext(&blk);

		} while (l1 == 0);

		bc_close(l_di);

		/* rewrite GAMES.NAM */
		l_di = bc__creat((RealPt)ds_readd(FNAMES + 0x33c), 0);
		bc__write(l_di, RealMake(datseg, 0xe2da), 45);
		bc_close(l_di);

		return 1;
	}

	return 0;
}

/**
 * \brief reads a CHR file from TEMP-dir
 * \param fname		filename
 * \param hero_pos	position of the hero
 * \param a2		???
 * \return 1 = OK, 0 = Error
*/
signed short read_chr_temp(RealPt fname, signed short hero_pos, signed short a2)
{
	signed short handle;
	signed short hero_size = SIZEOF_HERO;
	Bit8u *hero;

	sprintf((char*)Real2Host(ds_readd(0xd2eb)),
		(char*)Real2Host(ds_readd(0x4c88)),
		(char*)Real2Host(fname));

	if ((handle = bc__open((RealPt)ds_readd(0xd2eb), 0x8004)) == -1) {
		copy_file_to_temp(fname, (RealPt)ds_readd(0xd2eb));
		handle = bc__open((RealPt)ds_readd(0xd2eb), 0x8004);
	}

	if (handle != -1) {

		hero = get_hero(hero_pos);
		bc__read(handle, hero, hero_size);
		bc_close(handle);

		host_writeb(hero + HERO_GROUP_NO, (signed char)a2);

		if (host_readbs(hero + HERO_SEX) == 1) {
			host_writeb(hero + HERO_SPRITE_NO, host_readbs(hero + HERO_TYPE) + 11);

			if (host_readbs(hero + HERO_SPRITE_NO) > 21) {
				host_writeb(hero + HERO_SPRITE_NO, 21);
			}
		} else {
			host_writeb(hero + HERO_SPRITE_NO, host_readbs(hero + HERO_TYPE));

			if (host_readbs(hero + HERO_SPRITE_NO) > 10) {
				host_writeb(hero + HERO_SPRITE_NO, 10);
			}
		}

		if (!host_readbs(hero + HERO_START_GEAR)) {

			startup_equipment(hero);
			host_writeb(get_hero(hero_pos) + HERO_START_GEAR, 1);

			write_chr_temp(hero_pos);
		}

	} else {
		GUI_output(get_ltx(0x10));
		return 0;
	}

	return 1;

}

/**
 * \brief	writes a CHR file to temp
 * \param hero_pos	position of the hero
 */
void write_chr_temp(unsigned short hero_pos)
{
	char fname[20];
	unsigned short fd;

	prepare_chr_name(fname, (char*)get_hero(hero_pos));

	sprintf((char*)Real2Host(ds_readd(0xd2eb)),
		(char*)Real2Host(ds_readd(0x4c88)),		/* "TEMP\\%s" */
		fname);

	fd = bc__creat((RealPt)ds_readd(0xd2eb), 0);
	bc__write(fd, (RealPt)ds_readd(HEROS) + SIZEOF_HERO * hero_pos, SIZEOF_HERO);
	bc_close(fd);
}

/**
 * \brief		copy the names from CHR file
 * \param ptr		pointer
 * \param temple_id	> 0 the id of the temple, -1 on delete mode
 * \return # of CHR-files in TEMP-dir
 */
signed short copy_chr_names(Bit8u *ptr, signed short temple_id)
{
	signed short count = 0;
	signed short l_di;
	signed short handle;
	Bit8u *buf;
	struct ffblk blk;

	buf = Real2Host(ds_readd(0xd303)) + 60000;
	sprintf((char*)Real2Host(ds_readd(0xd2eb)),
		(char*)Real2Host(ds_readd(0x4c88)),
		(char*)p_datseg + 0x5e64);

	l_di = bc_findfirst((RealPt)ds_readd(0xd2eb), &blk, 0);

	if (!l_di) {

		do {
			/* create the CHR filename */
			sprintf((char*)Real2Host(ds_readd(0xd2eb)),
				(char*)Real2Host(ds_readd(0x4c88)),
				((char*)(&blk)) + 30);

			/* read the CHR file from temp */
			handle = bc__open((RealPt)ds_readd(0xd2eb), 0x8004);
			bc__read(handle, buf, SIZEOF_HERO);
			bc_close(handle);

			if ((host_readbs(buf + 0x88) == temple_id && !host_readbs(buf + 0x8a)) ||
				(!host_readbs(buf + 0x8a) && temple_id == -1))
			{
				strcpy((char*)ptr + 32 * count, (char*)buf);
				strcpy((char*)ptr + 32 * count + 16, (char*)buf + 16);
				count++;
			}

			l_di = bc_findnext(&blk);

		} while (!l_di);

		return count;
	} else {
		return 0;
	}
}

/**
 * \brief	loads a head icon from IN_HEADS.NVF
 * \param head	index of the desired head
 */
void load_in_head(signed short head)
{
	signed short handle;

	if (head >= 0) {

		handle = load_archive_file(ARCHIVE_FILE_IN_HEADS_NVF);

		seg002_0c72(handle, 1024L * head, 0);

		read_archive_file(handle, Real2Host(ds_readd(DTP2)), 1024);

		bc_close(handle);

		ds_writew(0x515c, head);
	}
}

/**
 * \brief	load a temple icon
 * \param nr	the number of the icon
 */
void load_tempicon(signed short nr)
{
	struct nvf_desc nvf;
	signed short handle;

	if (nr == 14) {
		nr = 7;
	}

	/* load TEMPICON */
	handle = load_archive_file(0xb4);
	read_archive_file(handle, Real2Host(ds_readd(0xc3a9)), 7000);
	bc_close(handle);

	nvf.dst = Real2Host(ds_readd(0xc3a9)) + 7000;
	nvf.src = Real2Host(ds_readd(0xc3a9));
	nvf.nr = nr;
	nvf.type = 0;
	nvf.width = (Bit8u*)&handle;
	nvf.height = (Bit8u*)&handle;

	process_nvf(&nvf);
}

#if !defined(__BORLANDC__)
}
#endif
