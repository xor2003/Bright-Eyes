#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <ctype.h>

#include "regs.h"
#include "paging.h"
#include "callback.h"
#include "../../../dos/drives.h"

#include "../schick.h"

#include "g105de_seg000.h"
#include "g105de_seg001.h"
#include "g105de_seg002.h"
#include "g105de_seg003.h"
#include "g105de_seg005.h"
#include "g105de_seg006.h"

#include "../rewrite_m302de/seg002.h"
#include "../rewrite_m302de/seg008.h"
#include "../rewrite_m302de/seg009.h"


struct color_struct {
	signed char r;
	signed char g;
	signed char b;
};

static FILE * fd_open_datfile(Bit16u);

static const Bit16u MAX_PAGES = 11;
static const Bit16u MAX_TYPES = 13;

/* DS:0x08df */
static const unsigned short init_le[MAX_TYPES + 1] = {	0,
						30, 30, 30, 30, 30, 40,
						25, 30, 25, 25, 30, 25};
/* DS:0x08f9 */
static const unsigned short init_ae[MAX_TYPES + 1] = {	0,
						0, 0, 0, 0, 0, 0,
						25, 25, 30, 25, 25, 25};
/* DS:0x0913 */
struct minmax {
	unsigned char min;
	unsigned char max;
};

static const struct minmax height_range[13] = {	{0, 0},
						{150, 188},	{155, 170},
						{165, 205},	{156, 194},
						{167, 210},	{130, 140},
						{154, 188},	{154, 188},
						{164, 197},	{170, 204},
						{160, 194},	{170, 210} };

/* DS:0x1048 */
static const signed char head_first_male[12] = {	0, 0, 6, 12,
							18, 24,	30, 36,
							42, 48, 54, 62 };
/* DS:0x1054 */
static const signed char head_first_female[11] = {	0, 3, 9, 15,
							21, 27, 34, 37,
							46, 51, 58 };

/* DS:0x135e */
static const struct mouse_action action_default[2] = {
			{ 0, 0, 319, 199, 0xfe},
			{ 0xffff, 0xffff, 0xffff, 0xffff, 0xffff} };

/* DS:0x1272 */
static Bit8u* ptr_def_action = (Bit8u*)&action_default;

/* DS:0x1276 */
static Bit8u *action_table;

/* DS:0x137a */
static const struct mouse_action action_base[9] = {
			{ 272, 8, 304, 41, 0xfd},	/* credits */
			{ 305, 7, 319, 21, 0x60},	/* change sex */
			{ 145, 13, 175, 21, 0x61},	/* enter name */
			{ 271, 42, 286, 56, 0x48},	/* previous head */
			{ 288, 42, 303, 56, 0x50},	/* next head */
			{ 145, 178, 164, 192, 0x4b},	/* previous page */
			{ 284, 178, 303, 192, 0x4d},	/* next page */
			{ 0, 0, 319, 199, 0xfe},
			{ 0xffff, 0xffff, 0xffff, 0xffff, 0xffff} };
/* DS:0x13d4 */
static const struct mouse_action action_skills[4] = {
			{ 145, 178, 164, 192, 0x4b},	/* previous page */
			{ 284, 178, 303, 192, 0x4d},	/* next page */
			{ 0, 0, 319, 199, 0xfe},
			{ 0xffff, 0xffff, 0xffff, 0xffff, 0xffff} };
/* DS:0x13fc */
static const struct mouse_action action_spells[4] = {
			{ 16, 178, 35, 192, 0x4b},	/* previous page */
			{ 284, 178, 303, 192, 0x4d},	/* next page */
			{ 0, 0, 319, 199, 0xfe},
			{ 0xffff, 0xffff, 0xffff, 0xffff, 0xffff} };

/* DS:0x1324 */
static Bit16s gen_page;

/* DS:0x1a09 */
static bool use_cda;
/* DS:0x1a0b */
static bool eh_installed;
/* DS:0x1a11 */
static Bit8u *bg_buffer[MAX_PAGES];
/* DS:0x1a3d */
static long bg_len[MAX_PAGES];
/* DS:0x1a69 */
static Bit8u *typus_buffer[MAX_TYPES];
/* DS:0x1a9d */
static long typus_len[MAX_TYPES];
/* DS:0x1a7d */
static const char fnames_g105de[][13] = { "GEN1.NVF",
					"GEN2.NVF",
					"GEN3.NVF",
					"GEN4.NVF",
					"GEN5.NVF",
					"GEN6.NVF",
					"GEN7.NVF",
					"GEN8.NVF",
					"GEN9.NVF",	/* 0x08 */
					"GEN10.NVF",
					"GEN11.NVF",
					"HEADS.DAT",
					"SEX.DAT",
					"TYPPIC.DAT",
					"FONT6",
					"GENTEXT",
					"DSALOGO.DAT",	/* 0x10 */
					"GENTIT.DAT",
					"ATTIC",
					"POPUP.DAT",
					"DGAUKLER.DAT",
					"DJAEGER.DAT",
					"DKRIEGER.DAT",
					"DSTREUNE.DAT",
					"DTHORWAL.DAT",	/* 0x18 */
					"DZWERG.DAT",
					"DHEXE.DAT",
					"DDRUIDE.DAT",
					"DMAGIER.DAT",
					"DAELF.DAT",
					"DFELF.DAT",
					"DWELF.DAT",
					"DMENGE.DAT",	/* 0x20 */
					"GEN.XMI",
					"FANPRO.NVF",
					"SAMPLE.AD",
					"MT32EMUL.XMI" };

/* DS:0x1c63 */
static const struct mouse_action action_input[2] = {
			{ 0, 0, 319, 199, 0x1c},
			{ 0xffff, 0xffff, 0xffff, 0xffff, 0xffff} };
/* DS:0x1c77 */
static bool bool_mode;
/* DS:0x1c79 */
static const struct mouse_action *action_page[MAX_PAGES] = {
			(struct mouse_action*)&action_base,
			(struct mouse_action*)&action_skills,
			(struct mouse_action*)&action_skills,
			(struct mouse_action*)&action_skills,
			(struct mouse_action*)&action_skills,
			(struct mouse_action*)&action_spells,
			(struct mouse_action*)&action_spells,
			(struct mouse_action*)&action_spells,
			(struct mouse_action*)&action_spells,
			(struct mouse_action*)&action_spells,
			(struct mouse_action*)&action_spells };

/* DS:0x1ca5 */
static bool need_refresh = true;

/* DS:0x1ca6 */
struct type_bitmap {
	char t[13];
};
struct type_bitmap empty_bitmap;

/* DS:0x1cb3 */
static char version[] = "V1.05";

/* DS:0x1d49 */
static struct color_struct col_white = { 0x3f, 0x3f, 0x3f };
/* DS:0x1d4c */
static struct color_struct col_black = { 0x00, 0x00, 0x00 };
/* DS:0x1d4f */
static struct color_struct col_popup[8] = {	{ 0x00, 0x00, 0x00 },
						{ 0x38, 0x30, 0x28 },
						{ 0x38, 0x30, 0x10 },
						{ 0x30, 0x28, 0x0c },
						{ 0x2c, 0x24, 0x08 },
						{ 0x28, 0x20, 0x04 },
						{ 0x18, 0x14, 0x00 },
						{ 0x0b, 0x19, 0x0c } };
/* DS:0x1d67 */
static struct color_struct col_misc[3] = {	{ 0x28, 0x00, 0x00 },
						{ 0x28, 0x28, 0x00 },
						{ 0x00, 0x00, 0x28 } };

/* DS:0x2780 */
static bool got_ch_bonus;
/* DS:0x2782 */
static bool got_mu_bonus;

/* DS:0x3f2a */
static Bit32s flen;
/* DS:0x3f2e */
static Bit32s flen_left;

/* DS:0x3f3a */
FILE *fd_timbre;

/* DS:0x3f42 */
void *snd_driver;
void *form_xmid;
void *snd_ptr_unkn1;
void *state_table;

struct inc_states {
	char tries;
	char incs;
};

/* DS:0x3f62 */
static struct inc_states spell_incs[86];
/* DS:0x400e */
static struct inc_states skill_incs[52];
/* DS:0x4076 */
static char attrib_changed[14];
/* DS:0x4084 */
static char *type_names[MAX_TYPES];
/* DS:0x40B4 */
/* the index of the last head */
static signed char head_last;
/* DS:0x40B5 */
/* the index of the first head */
static signed char head_first;
/* DS:0x40B6 */
/* the index of the current head */
static signed char head_current;
/* DS:0x40B7 */
/* the typus for the heads e.G. all elves are 10 */
static signed char head_typus;

/* DS:0x40b9 */
static unsigned short menu_tiles;

/* DS:0x40d1 */
static unsigned short unkn1;
/* DS:0x40d3 */
static unsigned short unkn2;
/* DS:0x40d5 */
static unsigned short unkn3;
/* DS:0x40d7 */
static unsigned short unkn4;

char *texts[300];

/* DS:0x4669 */
static char cursor_bak[256];
/* DS:0x4769 */
Bit8u *buffer_sex_dat;
Bit8u *buffer_popup_nvf;
Bit8u *buffer_popup_dis;
Bit8u *buffer_heads_dat;
Bit8u *buffer_text;
Bit8u *buffer_font6;
/* DS:0x477d */
static Bit16u col_index;
/* DS:0x477f */
static Bit16u bg_color;
/* DS:0x4781 */
static Bit16u fg_color[6];
/* DS:0x478d */
static Bit16u text_x_end;
/* DS:0x478f */
static Bit16u text_y;
/* DS:0x4791 */
static Bit16u text_x;

/* DS:0x4797 */
Bit8u *picbuf3;
Bit8u *picbuf2;
Bit8u *picbuf1;
Bit8u *gen_ptr6;
Bit8u *gen_ptr6_dis;
Bit8u *buffer_dmenge_dat;
/* DS:0x47b3 */
Bit8u *gen_ptr5;
Bit8u *gen_ptr4;
char *gen_ptr3;
char *gen_ptr2;

/* DS:0x47cf */
Bit8u *page_buffer;

/* DS:0x47e3 */
static const Bit16u ro_var[7] = {0, 0, 0, 0, 0, 0, 0};

/* DS:0x47f3 */
Bit8u *gen_ptr1;
Bit8u *gen_ptr1_dis;

static void prepare_path(char *p)
{
	while (*p) {
#ifdef __WIN32__
		if (*p == '/')
			*p = '\\';
#else
		if (*p == '\\')
			*p = '/';
#endif
		p++;
	}
}

/**
 * get_pwd() -  get the path to the current directory
 *
 * This must be freed after use.
 * WARNING: Does only work on mounted drives
 */
static char *get_pwd() {

	char *path = (char*)calloc(2048, sizeof(char));

	if (path == NULL)
		return NULL;

	Bit8u drive = DOS_GetDefaultDrive();
	localDrive *dr = dynamic_cast<localDrive*>(Drives[drive]);
	dr->GetSystemFilename((char*)path, "");
	strcat(path, "/");
	strcat(path, Drives[drive]->curdir);
	strcat(path, "/");

	return path;
}

namespace G105de {

static Bit16u fd_read_datfile(FILE * fd, Bit8u *buf, Bit16u len);
static FILE * fd_open_datfile(Bit16u index);

void BE_cleanup()
{
	long sum = 0;

	free(buffer_sex_dat);
	free(buffer_popup_nvf);
	free(buffer_heads_dat);
	free(buffer_text);
	free(buffer_font6);

	buffer_sex_dat = NULL;
	buffer_popup_nvf = NULL;
	buffer_heads_dat = NULL;
	buffer_text = NULL;
	buffer_font6 = NULL;

	free(picbuf3);
	free(picbuf2);
	free(picbuf1);
	free(gen_ptr6);
	free(buffer_dmenge_dat);
	free(gen_ptr5);
	free(gen_ptr4);
	free(gen_ptr2);

	picbuf3 = NULL;
	picbuf2 = NULL;
	picbuf1 = NULL;
	gen_ptr6 = NULL;
	buffer_dmenge_dat = NULL;
	gen_ptr5 = NULL;
	gen_ptr4 = NULL;
	gen_ptr2 = NULL;

	free(page_buffer);
	free(gen_ptr1);

	page_buffer = NULL;
	gen_ptr1 = NULL;

	for (long i = 0; i < MAX_PAGES; i++) {
		if (bg_buffer[i]) {
			free(bg_buffer[i]);
			bg_buffer[i] = NULL;
		}
		sum += bg_len[i];
		bg_len[i] = 0;
	}
	for (long i = 0; i < MAX_TYPES; i++) {
		if (typus_buffer[i]) {
			free(typus_buffer[i]);
			typus_buffer[i] = NULL;
		}
		sum += typus_len[i];
		typus_len[i] = 0;
	}
	D1_INFO("Cleanup %ld bytes freed\n", sum);
}

void start_music(Bit16u track)
{

	if (!use_cda) {
		if (ds_readw(0x1a07))
			return;
		play_midi(track);
	} else {
		G105de::seg001_0465();
	}
}

void read_soundcfg()
{
	FILE *fd;
	char *fname;
	Bit16u port;

	/* build the path to SOUND.CFG */
	fname = get_pwd();
	strncat(fname, "SOUND.CFG", 9);
	prepare_path(fname);


	use_cda = false;
	ds_writew(0x1a07, 1);

	fd = fopen(fname, "rb");
	free(fname);

	if (fd == NULL) {
		D1_ERR("Failed to open %s\n", fname);
		return;
	}

	fread(&port, 2, sizeof(char), fd);
	fclose(fd);

	D1_INFO("MIDI port 0x%x\n", host_readw((Bit8u*)&port));
	if (port && load_driver(RealMake(datseg, 0x1dda), 3, host_readw((Bit8u*)&port))) {
		/* disable audio-cd */
		use_cda = false;
		return;
	}

	/* enable audio-cd */
	use_cda = true;
	/* disable midi */
	ds_writew(0x1a07, 1);

	/* play audio-cd */
	G105de::seg001_0600();
}

void init_music(unsigned long size)
{
	form_xmid = gen_alloc(size);
	ds_writed(0x3f46, emu_gen_alloc(size));

	if (form_xmid == NULL)
		return;

	AIL_startup();
	ds_writew(0x1a07, 1);
}

void stop_music()
{

/*	AIL_shutdown(NULL); */
	AIL_shutdown(0);

	/* free the pointers in the emu */
	if (ds_readd(0x3f4a))
		bc_free(RealMake(datseg, 0x3f4a));
	if (ds_readd(0x3f4e))
		bc_free(RealMake(datseg, 0x3f4e));
	if (ds_readd(0x3f46))
		bc_free(RealMake(datseg, 0x3f46));
	if (ds_readd(0x3f42))
		bc_free(RealMake(datseg, 0x3f42));


	/* free the pointers at the host */
	if (snd_ptr_unkn1)
		free(snd_ptr_unkn1);

	if (state_table)
		free(state_table);

	if (form_xmid)
		free(form_xmid);

	if (snd_driver)
		free(snd_driver);

	seg001_033b();
}

bool emu_load_seq(Bit16u sequence_num)
{
	CPU_Push16(sequence_num);
	CALLBACK_RunRealFar(reloc_gen + 0x3c6, 0x1e7);
	CPU_Pop16();
	return reg_ax ? true : false;
}

#if 0
bool load_seq(Bit16u sequence_num)
{
	Bit8u *ptr;
	Bit16u si, di, patch;

	fd_timbre = fd_open_datfile(35);

	if (fd_timbre == NULL)
		return false;

	ds_writew(0x3f5a, AIL_register_sequence(ds_readw(0x3f5c),
		Real2Host(ds_readd(0x3f46)), sequence_num,
		Real2Host(ds_readd(0x3f4e)), NULL));

	if (ds_readw(0x3f5a) == 0xffff) {
		fclose(fd_timbre);
		return false;
	}

	while (si = AIL_timbre_request(ds_readw(0x3f5c), ds_readw(0x3f5a)) != 0xffff)
	{
		di = si << 8;
		patch = si & 0xff;
		ptr = get_timbre(di, patch);
		if (ptr == NULL)
			continue;

		AIL_install_timbre(ds_readw(0x3f5c), di, patch, ptr);
		free(ptr);
	}
	fclose(fd_timbre);
	return true;

}
#endif

bool play_sequence(Bit16u sequence_num)
{
	if (emu_load_seq(sequence_num) == false)
		return false;

	AIL_start_sequence(ds_readw(0x3f5c), sequence_num);
	return true;
}

Bit8u *get_timbre(Bit16u bank, Bit16u patch)
{
	Bit8u *ptr;
	fseek(fd_timbre, ds_readd(0x3f36), SEEK_SET);
	do {
		fd_read_datfile(fd_timbre, p_datseg + 0x2476, 6);
		if (ds_readb(0x2477) == 0xff)
			return NULL;
	} while (ds_readb(0x2477) != bank && ds_readb(0x2476) != patch);

	fseek(fd_timbre, ds_readd(0x3f36) + ds_readd(0x2478), SEEK_SET);
	fd_read_datfile(fd_timbre, p_datseg + 0x2474, 2);
	ptr = (Bit8u*)gen_alloc(ds_readw(0x2474));
	host_writew(ptr, ds_readw(0x2474));
	fd_read_datfile(fd_timbre, ptr + 2, ds_readw(0x2474) - 2);
	return ptr;
}

bool call_load_file(Bit16u index)
{
	return load_file(index);
}

bool load_file(Bit16u index)
{
	FILE *fd;

	fd = fd_open_datfile(index);

	if (fd == NULL)
		return false;

	fread(Real2Host(ds_readd(0x3f46)), 1, 32767, fd);
	fclose(fd);

	return true;
}

bool load_driver(RealPt fname, Bit16u type, Bit16u port)
{
	CPU_Push16(port);
	CPU_Push16(type);
	CPU_Push32(fname);
	CALLBACK_RunRealFar(reloc_gen + 0x3c6, 0x3d0);
	CPU_Pop32();
	CPU_Pop16();
	CPU_Pop16();
	return reg_ax ? true : false;
}

void play_midi(Bit16u index)
{
	/* Midi disabled */
	if (ds_readw(0x1a07))
		return;
	if (host_readw(Real2Host(ds_readd(0x3f56)) + 2) != 3)
		return;

	stop_sequence();
	call_load_file(index);
	play_sequence(0);
}

void stop_sequence()
{
	/* Midi disabled */
	if (ds_readw(0x1a07))
		return;
	if (host_readw(Real2Host(ds_readd(0x3f56)) + 2) != 3)
		return;

	AIL_stop_sequence(ds_readw(0x3f5c), ds_readw(0x3f5a));
	AIL_release_sequence_handle(ds_readw(0x3f5c), ds_readw(0x3f5a));
}


void restart_midi()
{
	if (ds_readw(0x1a07))
		return;

	if (host_readw(Real2Host(ds_readd(0x3f56)) + 2) != 3)
		return;

	if (AIL_sequence_status(ds_readw(0x3f5c), ds_readw(0x3f5a)) != 2)
		return;

	AIL_start_sequence(ds_readw(0x3f5c), ds_readw(0x3f5a));
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

void mouse_enable()
{
	Bit16u p1, p2, p3, p4, p5;

	if (ds_readw(0x4591) != 2)
		return;

	/* initialize mouse */
	p1 = 0;

	mouse_action((Bit8u*)&p1, (Bit8u*)&p2, (Bit8u*)&p3,
				(Bit8u*)&p4, (Bit8u*)&p5);

	if (p1 == 0)
		ds_writew(0x4591, 0);

	ds_writed(0x4625, RealMake(datseg, 0x1200));
	ds_writed(0x4621, RealMake(datseg, 0x1200));

	if (ds_readw(0x4591) != 2)
		return;

	/* move cursor  to initial position */
	p1 = 4;
	p3 = ds_readw(0x124c);
	p4 = ds_readw(0x124e);

	mouse_action((Bit8u*)&p1, (Bit8u*)&p2, (Bit8u*)&p3,
				(Bit8u*)&p4, (Bit8u*)&p5);

	mouse_do_enable(0x1f, RealMake(reloc_gen + 0x3c6, 0x68c));
}


void mouse_disable()
{
	if (ds_readw(0x4591) == 2)
		mouse_do_disable();

}

void mouse_do_enable(Bit16u val, RealPt ptr)
{
	Bit16u p1, p2, p3, p4, p5;

	p1 = 0x0c;
	p3 = val;

	p4 = 0x86a;
	p5 = reloc_gen + 0x3c6;

	/* save adress of old IRQ 0x78 */
	ds_writed(0x3f32, RealGetVec(0x78));

	/* set new IRS 0x78 */
	RealSetVec(0x78, ptr);

	/* set the new mouse event handler */
	mouse_action((Bit8u*)&p1, (Bit8u*)&p2, (Bit8u*)&p3,
				(Bit8u*)&p4, (Bit8u*)&p5);

	eh_installed = true;
}

void mouse_do_disable()
{
	Bit16u v1, v2, v3, v4, v5;

	/* restore the old int 0x78 handler */
	RealSetVec(0x78, ds_readd(0x3f32));

	/* uninstall mouse event handler */
	v1 = 0x0c;
	v3 = 0;
	v4 = 0;
	v5 = 0;

	mouse_action((Bit8u*)&v1, (Bit8u*)&v2, (Bit8u*)&v3,
		(Bit8u*)&v4, (Bit8u*)&v5);

	eh_installed = false;
}

/* static */
void draw_mouse_ptr_wrapper() {

	draw_mouse_ptr();
}

/* static */
void call_mouse()
{
	mouse();
}

/* static */
void draw_mouse_ptr()
{
	if (ds_readw(0x1248))
		return;

	if (ds_readw(0x124a) == 0) {
		ds_writew(0x1248, 1);
		do_draw_mouse_ptr();
		ds_writew(0x1248, 0);
	}
	ds_writew(0x124a, ds_readw(0x124a) - 1);
}

/* static */
void mouse()
{
	if (ds_readw(0x1248))
		return;

	ds_writew(0x124a, ds_readw(0x124a) + 1);

	if (ds_readw(0x124a))
		return;

	ds_writew(0x1248, 1);

	if (ds_readw(0x124c) < ds_readw(0x1256))
		ds_writew(0x124c, ds_readw(0x1256));

	if (ds_readw(0x124c) > 315)
		ds_writew(0x124c, 315);

	if (ds_readw(0x124e) < ds_readw(0x1258))
		ds_writew(0x124e, ds_readw(0x1258));

	if (ds_readw(0x124e) > 195)
		ds_writew(0x124e, 195);

	save_mouse_ptr();

	ds_writew(0x1250, ds_readw(0x124c));
	ds_writew(0x1252, ds_readw(0x124e));
	ds_writew(0x125a, ds_readw(0x1256));
	ds_writew(0x125c, ds_readw(0x1258));

	update_mouse_ptr();

	ds_writew(0x1248, 0);
}

/* static */
void mouse_compare()
{
	/* these pointers never differ in gen */
	if (ds_readw(0x1254) || ds_readd(0x4621) != ds_readd(0x4625)) {

		/* copy a pointer */
		ds_writed(0x4621, ds_readd(0x4625));

		if (PhysMake(datseg, 0x1200) == Real2Phys(ds_readd(0x4625))) {
			ds_writew(0x1258, 0);
			ds_writew(0x1256, 0);
		} else {
			ds_writew(0x1258, 8);
			ds_writew(0x1256, 8);
		}
		ds_writew(0x1254, 0);
		draw_mouse_ptr();
		mouse();
	}
}

void handle_input()
{
	Bit16u si, i;

	si = 0;
	ds_writew(0x459f, 0);
	ds_writew(0x459d, 0);

	if (CD_bioskey(1)) {
		si = CD_bioskey(0);
		ds_writew(0x459d, si & 0xff);
		si = si >> 8;
		if (si == 0x24)
			si = 0x2c;

		if (ds_readw(0x459d) == 0x11 && !ds_readb(0x40b8)) {

			draw_mouse_ptr_wrapper();
			mouse_disable();
			stop_music();
			restore_mouse_isr();
			exit_video();
			bc_clrscr();
			exit(0);
		}
	}

	if (ds_readw(0x459b)) {
		ds_writew(0x459b, 0);
		si = 0;

		if (action_table)
			si = get_mouse_action(ds_readw(0x124c),
				ds_readw(0x124e),
				action_table);
		if (si == 0 && ptr_def_action)
			si = get_mouse_action(ds_readw(0x124c),
				ds_readw(0x124e),
				ptr_def_action);

		if (ds_readw(0x4591) == 2) {
			for (i = 0; i < 15; i++)
				wait_for_vsync();

			if (ds_readw(0x459b) != 0) {
				ds_writew(0x4595, 1);
				ds_writew(0x459b, 0);
			}

			if (si == 0xfd) {
				si = 0;
				menu_tiles = 4;
				ds_writew(0x4789, 1);
				infobox((Bit8u*)texts[267], 0);
				ds_writew(0x4789, 0);
				menu_tiles = 3;
			}
		}
	}
	mouse_compare();
	ds_writew(0x459f, si);
}

/* static */
Bit16u get_mouse_action(Bit16u x, Bit16u y, Bit8u *act)
{
	struct mouse_action *ptr = (struct mouse_action*)act;
	Bit16u i;

	for (i = 0; ptr[i].action != 0xffff; i++) {

		if (ptr[i].x1 > x)
			continue;
		if (ptr[i].x2 < x)
			continue;
		if (ptr[i].y1 > y)
			continue;
		if (ptr[i].y2 < y)
			continue;

		return ptr[i].action;
	}

	return 0;
}

/**
 * decomp_rle() - decompress a RLE compressed picture
 * @dst:	destination
 * @src:	source
 * @y:		y - Coordinate to start
 * @x:		x - Coordinate to start
 * @width:	width of the picture
 * @height:	height of the picture
 * @mode:	if 2 copy pixels with the value 0
 *
*/

void decomp_rle(Bit8u *dst, Bit8u *src, Bit16u y, Bit16u x,
				Bit16u width, Bit16u height, Bit16u mode)
{
	Bit8u *dst_loc;
	Bit16u i, j, n, k;
	unsigned char val, pix;

	/*
	 * In Gen V1.05_de this function can an will be tweaked,
	 * since the only argument which differs is src.
	 *
	 * To help the compiler optimizing, we set the arguments to the values,
	 * we know they will have, so they can be threaten as constants.
	 *
	 * With GCC 4.4.5 and the default DOSBox settings (-O2),
	 * the code of this function shrinked:
	 * - on my x86_64 machine from 253 to 156 byte (62%).
	 * - on my x86_32 machine from 276 to 180 byte (65%).
	 */

	y = x = 0;
	width = 320;
	height = 200;
	mode = 0;

	/* End of the tweaker section. */

	dst_loc = dst + 320 * y + x;
	draw_mouse_ptr_wrapper();

	for (i = 0; i < height; dst_loc += 320, i++) {

		j = 0;

		while (j < width) {

			val = host_readb(src++);

			if (val == 0x7f) {
				n = host_readb(src++);
				pix = host_readb(src++);

				if (pix != 0 || mode != 2)
					for (k = 0; k <= n; k++)
						host_writeb(dst_loc + j + k, pix);
				j += n;
			} else {
				if (val != 0 || mode != 2)
					host_writeb(dst_loc + j, val);
				j++;
			}
		}
	}

	call_mouse();
}

/* static */
void update_mouse_ptr()
{
	PhysPt p1, p2;
	Bit16u v1, v2, v3, si, di;
	Bit8s i, j;

	p1 = Real2Phys(ds_readd(0x47cb));

	p2 = Real2Phys(ds_readd(0x4625)) + 32;

	di = ds_readw(0x124c) - ds_readw(0x1256);

	v1 = ds_readw(0x124e) - ds_readw(0x1258);

	v2 = v3 = 16;

	if (di > 304)
		v2 = 320 - di;

	if (v1 > 184)
		v3 = 200 - v1;

	p1 += v1 * 320 + di;

	for (i = 0; i < v3; p1 += 320, i++) {

		si = mem_readw_inline(p2);
		p2 += 2;

		for (j = 0; j < v2; j++)
			if ((0x8000 >> j) & si)
				mem_writeb_inline(p1 + j, 0xff);

	}
}

/* static */
void save_mouse_ptr()
{
	PhysPt p;
	Bit16u v6, v8, va, si, di, cx;

	p = Real2Phys(ds_readd(0x47cb));

	/* X - Coordinate */
	di = ds_readw(0x124c) - ds_readw(0x1256);
	/* Y - Coordinate */
	v6 = ds_readw(0x124e) - ds_readw(0x1258);

	va = v8 = 16;

	if (di > 304)
		v8 = 320 - di;

	if (v6 > 184)
		va = 200 - v6;

	p += v6 *320 + di;

	for (si = 0; si < va; p += 320, si++)
		for (cx = 0; cx < v8; cx++)
			cursor_bak[si * 16 + cx] = mem_readb_inline(p + cx);
}

/* static */
void do_draw_mouse_ptr()
{
	PhysPt ptr;
	Bit16u pos_x, pos_y;
	Bit16u d_x, d_y;
	Bit16u i, j;

	ptr = Real2Phys(ds_readd(0x47cb));

	pos_x = ds_readw(0x1250) - ds_readw(0x125a);
	pos_y = ds_readw(0x1252) - ds_readw(0x125c);
	d_x = d_y = 16;

	if (pos_x > 304)
		d_x = 320 - pos_x;
	if (pos_y > 184)
		d_y = 200 - pos_y;

	ptr += pos_y * 320 + pos_x;

	for (i = 0; i < d_y; ptr += 320, i++)
		for (j = 0; j < d_x; j++)
			mem_writeb_inline(ptr + j, cursor_bak[i * 16 + j]);
}

void split_textbuffer(Bit8u *dst, RealPt src, Bit32u len)
{
	Bit32u i = 0;

	host_writed(dst, src);
	dst += 4;

	for (; i != len; src++, i++) {
		/* continue if not the ned of the string */
		if (mem_readb(Real2Phys(src)) != 0)
			continue;
		/* return if "\0\0" (never happens) */
		if (mem_readb(Real2Phys(src) + 1) == 0)
			return;
		/* write the adress of the next string */
		host_writed(dst, src + 1);
		dst += 4;
	}
}

void load_font_and_text()
{
	FILE *fd;
	Bit32u len;

	fd = fd_open_datfile(0x0e);
	fd_read_datfile(fd, buffer_font6, 1000);
	fclose(fd);

	fd = fd_open_datfile(0x0f);
	len = fd_read_datfile(fd, buffer_text, 64000);
	fclose(fd);

	split_textbuffer_host(texts, (char*)buffer_text, len);

}

void split_textbuffer_host(char **dst, char *src, Bit32u len)
{
	Bit32u i = 0;

	for (i = 0, *dst++ = src; i != len; src++, i++) {
		/* continue if not the end of the string */
		if (*src)
			continue;
		/* return if "\0\0" (never happens) */
		if (*(src + 1) == 0)
			return;
		/* write the adress of the next string */
		*dst++ = src + 1;
	}
}

void load_page(Bit16u page)
{
	Bit8u *ptr;
	FILE *fd;

	if (page <= 10) {
		/* check if this image is in the buffer */
		if (bg_buffer[page]) {
			decomp_rle(Real2Host(ds_readd(0x47d3)),
				bg_buffer[page], 0, 0, 320, 200, 0);
			return;
		}

		fd = fd_open_datfile(page);
		ptr = (Bit8u*)gen_alloc(get_filelength());

		if (ptr) {
			bg_buffer[page] = ptr;
			bg_len[page] = get_filelength();
			fd_read_datfile(fd, bg_buffer[page], bg_len[page]);
			decomp_rle(Real2Host(ds_readd(0x47d3)),
				bg_buffer[page], 0, 0, 320, 200, 0);
		} else {
			fd_read_datfile(fd, page_buffer, 64000);
			decomp_rle(Real2Host(ds_readd(0x47d3)),
				page_buffer, 0, 0, 320, 200, 0);
		}
		fclose(fd);
	} else {
		/* this should not happen */
		fd = fd_open_datfile(page);
		fd_read_datfile(fd, Real2Host(ds_readd(0x47d3)) - 8,
			64000);
		fclose(fd);
		decomp_pp20(Real2Host(ds_readd(0x47d3)) - 8,
			Real2Host(ds_readd(0x47d3)),
			NULL,  get_filelength());
	}
}


void load_typus(Bit16u typus)
{
	Bit8u *ptr;
	FILE *fd;
	Bit16u index;

	index = typus + 19;

	/* check if this image is in the buffer */
	if (typus_buffer[typus]) {
		decomp_pp20(typus_buffer[typus],
			Real2Host(ds_readd(0x47b3)),
			NULL, typus_len[typus]);
		return;
	}

	fd = fd_open_datfile(index);
	ptr = (Bit8u*)gen_alloc(get_filelength());

	if (ptr != NULL) {
		/* load the file into the typus buffer */
		typus_buffer[typus] = ptr;
		typus_len[typus] = get_filelength();
		fd_read_datfile(fd, typus_buffer[typus], typus_len[typus]);
		decomp_pp20(typus_buffer[typus],
			Real2Host(ds_readd(0x47b3)),
			NULL, typus_len[typus]);
	} else {
		/* load the file direct */
		typus_buffer[typus] = ptr;
		fd_read_datfile(fd, Real2Host(ds_readd(0x47d3)),
			25000);
		decomp_pp20(Real2Host(ds_readd(0x47d3)),
			Real2Host(ds_readd(0x47b3)),
			NULL, get_filelength());
	}
	fclose(fd);
}

/**
 * save_chr() - save the hero the a CHR file
 */
void save_chr()
{
	FILE *fd;
	char *pwd;
	char path[80];
	char filename[20];
	char nvf[19];
	Bit8u *n =  (Bit8u*)nvf;

	Bit16u i;

	/* check for typus */
	if (ds_readb(0x134d) == 0) {
		infobox((Bit8u*)texts[0x120 / 4], 0);
		return;
	}
	/* check for name */
	if (ds_readb(0x132c) == 0) {
		infobox((Bit8u*)texts[0x120 / 4], 0);
		return;
	}
	/* Load picture from nvf */
	/* TODO: why not just copy? */
	host_writed(n + 0, ds_readd(0x47d3));

	host_writed(n + 4, ds_readd(0x4771));

	host_writew(n + 8, head_current);

	host_writew(n + 10, 0);

	host_writed(n + 11, RealMake(SegValue(ss), reg_sp - 8));
	host_writed(n + 15, RealMake(SegValue(ss), reg_sp - 10));

	process_nvf(n);

	/* copy picture to the character struct */
	memcpy(MemBase + PhysMake(datseg, 0x1606),
		Real2Host(ds_readd(0x47d3)), 1024);
	/* set an unknown value in the character struct */
	ds_writeb(0x13b4, 1);

	/* wanna save ? */
	if (!gui_bool((Bit8u*)texts[3]))
		return;

	/* copy name to alias */
	/* TODO: should use strncpy() here */
	strcpy((char*)MemBase + PhysMake(datseg, 0x133c),
		(char*)MemBase + PhysMake(datseg, 0x132c));
	/* copy name to buffer */
	/* TODO: should use strncpy() here */
	strcpy(gen_ptr2, (const char*)MemBase + PhysMake(datseg, 0x132c));
	/* prepare filename */
	for (i = 0; i < 8; i++) {
		char c = gen_ptr2[i];
		/* leave the loop if the string ends */
		if (c == 0)
			break;
		if (isalnum(c))
			continue;
		/* replace non alphanumerical characters with underscore */
		gen_ptr2[i] = '_';
	}

	strncpy(filename, gen_ptr2, 8);
	filename[8] = 0;
	strcat(filename, ".CHR");

	pwd = get_pwd();
	strncat(pwd, filename, 12);
	prepare_path(pwd);

	/* try to open the filename */
	fd = fopen(pwd, "rb");
	free(pwd);

	/* if the file exists ask if should overwrite */
	if (fd) {
		/* Original-Bugfix: the file should be closed */
		fclose(fd);

		if (!gui_bool((Bit8u*)texts[0x414 / 4]))
			return;
	}

	/* here originally creat() was used */
	fd = fopen(filename, "w+");

	if (fd) {
		/* write the CHR file to the current directory */
		fwrite(MemBase + PhysMake(datseg, 0x132c), 1, 1754, fd);
		fclose(fd);

		/* save it to the TEMP dir if called from with arguments */
		if (ds_readw(0x3f60) != 0) {
			strcpy(path, "TEMP\\");
			strcat(path, filename);

			pwd = get_pwd();
			strncat(pwd, path, 80);
			prepare_path(pwd);

			fd = fopen(pwd, "w+");
			free(pwd);

			if (fd) {
				fwrite(MemBase + PhysMake(datseg, 0x132c),
					1, 1754, fd);
				fclose(fd);
			}
		}
	} else {
		/* should be replaced with infobox() */
		error_msg(MemBase + PhysMake(datseg, 0x1e09));
	}
}

Bit16u open_datfile(Bit16u index)
{
	CPU_Push16(index);
	CALLBACK_RunRealFar(reloc_gen + 0x3c6, 0x1af4);
	CPU_Pop16();
	return reg_ax;
}

static FILE * fd_open_datfile(Bit16u index)
{
	FILE *fd;
	char *fname;
	signed long offset;
	Bit8u buf[800];


	/* build the path to DSAGEN.DAT */
	fname = get_pwd();
	strncat(fname, "DSAGEN.DAT", 10);
	prepare_path(fname);

	fd = fopen(fname, "rb");
	free(fname);

	if (fd == NULL) {
		D1_ERR("%s(): failed to open datafile at %s\n",
			__func__, fname);
		return NULL;
	}

	if (fread(buf, 1, 800, fd) != 800) {
		D1_ERR("%s(): failed to read datafile\n");
		fclose(fd);
		return NULL;
	}


	offset = get_archive_offset(fnames_g105de[index], buf);
	ds_writew(0x3f36, offset);


	if (offset == -1) {
		D1_ERR("FILE %s IS MISSING!", fnames_g105de[index]);
		fclose(fd);
		return NULL;
	}

	fseek(fd, offset, SEEK_SET);

	return fd;

}

static Bit16u fd_read_datfile(FILE * fd, Bit8u *buf, Bit16u len)
{

	if (len > flen_left)
		len = flen_left;

	len = fread(buf, 1, len, fd);

	flen_left -= len;

	return len;
}

void read_common_files()
{
	FILE *fd;
	long len;

	/* load HEADS.DAT */
	fd = fd_open_datfile(11);
	fd_read_datfile(fd, Real2Host(ds_readd(0x4771)), 64000);
	fclose(fd);

	/* load POPUP.NVF */
	fd = fd_open_datfile(19);
	len = fd_read_datfile(fd, Real2Host(ds_readd(0x476d)) - 8,
		500);
	fclose(fd);
	decomp_pp20(Real2Host(ds_readd(0x476d)) - 8,
		Real2Host(ds_readd(0x476d)), NULL, len);

	/* load SEX.DAT */
	fd = fd_open_datfile(12);
	fd_read_datfile(fd, Real2Host(ds_readd(0x4769)), 900);
	fclose(fd);

	/* load DMENGE.DAT */
	fd = fd_open_datfile(32);
	len = fd_read_datfile(fd, Real2Host(ds_readd(0x47a7)) - 8,
		25000);
	fclose(fd);
	decomp_pp20(Real2Host(ds_readd(0x47a7)) - 8,
		Real2Host(ds_readd(0x47a7)), NULL, len);

}

/* static */
Bit32s get_archive_offset(const char *name, Bit8u *table) {

	Bit32s offset, length;
	Bit16u i;

	for (i = 0; i < 50; i++) {

		/* check the filename */
		if (strncmp((char*)name, (char*)table + i * 16, 12))
			continue;

		/* calculate offset and length */
		offset = host_readd(table + i * 16 + 0x0c);
		length = host_readd(table + (i + 1) * 16 + 0x0c) - offset;

		/* save length in 2 variables */
		flen = length;
		flen_left = length;

		return offset;
	}

	return -1;
}

Bit16u read_datfile(Bit16u handle, Bit8u *buf, Bit16u len)
{

	if (len > flen_left)
		len = flen_left;

	len = bc__read(handle, buf, len);

	flen_left -= len;

	return len;
}

Bit32s get_filelength() {

	return flen;
}

Bit16u ret_zero1() {
	return 0;
}

void wait_for_keypress()
{
	while (G105de::CD_bioskey(1)) {
		G105de::CD_bioskey(0);
	}
}

void error_msg(Bit8u *msg)
{
	vsync_or_key(print_line((char*)msg) * 150);
}

void vsync_or_key(Bit16u val)
{
	Bit16u i;

	for (i = 0; i < val; i++) {
		handle_input();
		if (ds_readw(0x459f) || ds_readw(0x4599)) {
			ds_writew(0x4599, 0);
			ds_writew(0x459f, 0x1c);
			return;
		}
		wait_for_vsync();
	}
}

Bit32u swap32(Bit16u v1, Bit16u v2) {
	return (swap_u16(v2) << 16 | swap_u16(v1));
}

void init_video()
{
	/* set the video mode to 320x200 8bit */
	set_video_mode(0x13);
	set_color((Bit8u*)&col_white, 0xff);
}

void exit_video()
{
	/* restore old mode */
	set_video_mode(ds_readw(0x47dd));
	/* restore old page */
	set_video_page(ds_readw(0x47db));
}

void draw_v_line(Bit16u x, Bit16u y1, Bit16u y2, Bit16u color)
{
	Bit16u tmp, len, off;

	if (y1 > y2) {
		tmp = y2;
		y2 = y1;
		y1 = tmp;
	}

	len = y2 - y1 + 1;
	off = y1 * 320 + x;

	draw_h_spaced_dots(PhysMake(0xa000, off), len, color, 320);
}

void do_draw_pic(Bit16u mode)
{
	Bit16u x, y, d1, d2, v1, v2;
	Bit16u d3, d4, w, h;
	PhysPt dst, src;

	x = ds_readw(0x40c5);
	y = ds_readw(0x40c7);
	d1 = ds_readw(0x40c9);
	d2 = ds_readw(0x40cb);
	v1 = unkn1;
	v2 = unkn2;
	d3 = unkn3;
	d4 = unkn4;

	w = d1 - x + 1;
	h = d2 - y + 1;

	src = Real2Phys(ds_readd(0x40cd));
	dst = Real2Phys(ds_readd(0x40c1));

	draw_mouse_ptr_wrapper();

	draw_pic(dst, x, y, d1, d2, v1, v2, d3, d4, w, h, src, mode);

	call_mouse();


}

void call_fill_rect_gen(PhysPt ptr, Bit16u x1, Bit16u y1, Bit16u x2, Bit16u y2, Bit16u color)
{
	fill_rect(ptr + y1 * 320 + x1, color, x2 - x1 + 1, y2 - y1 + 1);
}

void wait_for_vsync()
{
	CALLBACK_RunRealFar(reloc_gen + 0x3c6, 0x2024);
}

/* static */
void blit_smth3(PhysPt ptr, Bit16u v1, Bit16u v2) {

	Bit8u *src;
	Bit16u i, j;

	src = MemBase + PhysMake(datseg, 0x45e1);

	for (i = 0; i < v1; src += 8 - v2, ptr += 320, i++)
		for (j = 0; j < v2; src++, j++)
			mem_writeb_inline(ptr + j, host_readb(src));
}

/* static */
Bit16u print_line(char *str)
{
	Bit16u lines = 1;

	draw_mouse_ptr_wrapper();

	lines = str_splitter(str);

	print_str(str, text_x, text_y);

	call_mouse();

	return lines;
}

/* static */
void print_str(char *str, Bit16u x, Bit16u y)
{
	Bit16u i, x_bak;
	unsigned char c;

	i = 0;

	draw_mouse_ptr_wrapper();

	if (ds_readw(0x4789) == 1)
		x = get_line_start_c(str, x, text_x_end);

	x_bak = x;

	while (c = str[i++]) {
		switch (c) {
			case 0x0d: case 0x40: {
				/* newline */
				y += 7;

				if (ds_readw(0x4789) == 1)
					x = get_line_start_c(str + i,
						text_x,	text_x_end);
				else
					x = x_bak;
				break;
			}
			case 0x7e: {
				/* CRUFT */
				if (x < ro_var[0]) {
					x = ro_var[0];
					continue;
				}
				if (x < ro_var[1]) {
					x = ro_var[1];
					continue;
				}
				if (x < ro_var[2]) {
					x = ro_var[2];
					continue;
				}
				if (x < ro_var[3]) {
					x = ro_var[3];
					continue;
				}
				if (x < ro_var[4]) {
					x = ro_var[4];
					continue;
				}
				if (x < ro_var[5]) {
					x = ro_var[5];
					continue;
				}
				if (x < ro_var[6]) {
					x = ro_var[6];
					continue;
				}
				break;
		}
		case 0xf0: case 0xf1: case 0xf2: case 0xf3: {
			/* change text color */
			col_index = c - 0xf0;
			break;
		}
		default:
			/* print normal */
			x += print_chr(c, x, y);
		}
	}

	call_mouse();
}

/**
 * str_splitter() - sets the line breaks for a string
 * @s:	string
 *
 * Returns the number of lines the string needs.
 */
/* static */
Bit16u str_splitter(char *s) {

	char *tp;
	Bit16u last_space, lines, c_width, l_width, l_width_max;
	Bit16s i;

	if (s == NULL || s == (char*)MemBase)
		return 0;

	lines = 1;
	l_width_max = text_x_end;


	/* replace all CR and LF with spaces */
	for (tp = s; *tp; tp++)
		if (*tp == 0x0d || *tp == 0x0a)
			*tp = 0x20;

	tp = s;

	l_width = i = last_space = 0;

	while (tp[i]) {
		get_chr_info(tp[i], (Bit8u*)&c_width);
		l_width += c_width;

		if (l_width >= l_width_max) {

			if (last_space) {
				tp[last_space] = 0xd;
				tp += last_space;
			} else {
				tp[i] = 0xd;
				tp += i + 1;
			}

			lines++;
			l_width = last_space = i = 0;
		}

		/* remember the last i in last_space */
		if (tp[i] == 0x20)
			last_space = i;

		if (tp[i] == 0x40) {
			tp += i + 1;
			i = -1;
			l_width = last_space = 0;
			lines++;
		}
		i++;
	}

	if (l_width >= l_width_max)
		if (last_space) {
			tp[last_space] = 0xd;
			lines++;
		} else
			tp[i - 1] = 0;

	return lines;
}

Bit16u print_chr(unsigned char c, Bit16u x, Bit16u y) {

	Bit16u width, idx;

	idx = get_chr_info(c, (Bit8u*)&width);

	call_them_all(idx, width, x, y);

	return width;
}

/**
 * get_chr_info() - gets font information of a character
 * @c:		the character
 * @width:	pointer to save width
 *
 * Returns the font index.
 */
Bit8u get_chr_info(unsigned char c, Bit8u *ptr) {

	Bit16u i;

	for (i = 0; i != 222; i += 3) {
		/* search for the character */
		if (ds_readb(0x1b85 + i) != c)
			continue;

		host_writew(ptr, ds_readb(0x1b85 + 2 + i));
		return ds_readb(0x1b85 + 1 + i);
	}

	if (c == 0x7e || c == 0xf0 || c == 0xf1 || c == 0xf2 || c == 0xf3) {
		host_writew(ptr, 0);
		return 0;
	} else {
		host_writew(ptr, 6);
		return 0;
	}
}

/* static */
void call_them_all(Bit16u v1, Bit16u v2, Bit16u x, Bit16u y) {

	PhysPt gfx_ptr;
	Bit32u bogus;

	fill_smth();
	fill_smth2(buffer_font6 + v1 * 8);

	gfx_ptr = get_gfx_ptr(x, y);
	bogus = ret_zero();

	call_blit_smth3(Real2Phys(gfx_ptr), 7, 0, 0, v2);
}

/* static */
void fill_smth() {

	Bit8u *ptr;
	Bit16u i, j;

	if (ds_readb(0x109a))
		ptr = MemBase + PhysMake(datseg, 0x45a1);
	else
		ptr = MemBase + PhysMake(datseg, 0x45e1);

	for (i = 0; i < 8; i++, ptr += 8)
		for (j = 0; j < 8; j++)
			host_writeb(ptr + j, bg_color);
}

/* static */
void fill_smth2(Bit8u* ptr) {

	Bit8u *lp;
	Bit16u i, j;
	Bit8u lv;

	if (ds_readb(0x109a))
		lp = MemBase + PhysMake(datseg, 0x45a1);
	else
		lp = MemBase + PhysMake(datseg, 0x45e1);

	for (i = 0; i < 8; i++, lp += 8) {
		lv = host_readb(ptr);
		ptr++;
		for (j = 0; j < 8; j++) {
			if (!((0x80 >> j) & lv))
				continue;

			host_writeb(lp + j, fg_color[col_index]);
		}
	}
}

/* static */
RealPt get_gfx_ptr(Bit16u x, Bit16u y) {

	RealPt start;

	start = ds_readd(0x47c7) + 320 * y + x;

	return start;
}

/* static */
Bit16u ret_zero() {
	return 0;
}

/* static */
void call_blit_smth3(PhysPt dst, Bit16u v1, Bit16u v2, Bit16u v3, Bit16u v4) {
	blit_smth3(dst, v1, v4);
}

/* static */
void set_vals(Bit16u v1, Bit16u v2) {
	fg_color[0] = v1;
	bg_color = v2;
}

/* static */
void get_vals(Bit8u *p1, Bit8u *p2) {
	host_writew(p1, fg_color[0]);
	host_writew(p2, bg_color);
}

Bit16u get_str_width(char *str) {

	Bit16u width, sum = 0;

	while (*str) {
		get_chr_info(*str++, (Bit8u*)&width);
		sum += width;
	}

	return sum;
}

/**
 * get_line_start_c() - calculates the start positon for a centered line
 * @str:	the string
 * @x:		start position of the string
 * @x_max:	end position of the string
 *
 * Returns the X coordinate where the strin must start.
 */
Bit16u get_line_start_c(char *str, Bit16u x, Bit16u x_max) {

	Bit16u width, sum = 0;

	while (*str && *str != 0x40 && *str != 0x0d) {
		get_chr_info(*str++, (Bit8u*)&width);
		sum += width;
	}
	return (x_max - sum) / 2 + x ;
}

Bit16u enter_string(char *dst, Bit16u x, Bit16u y, Bit16u num, Bit16u zero)
{
	Bit16u pos, l3, di, si;
	Bit16s c;

	draw_mouse_ptr_wrapper();
	di = x;
	pos = 0;

	if (zero == 0) {
		for (si = 0; si < num; si++) {
			print_chr(0x20, di, y);
			print_chr(0x5f, di, y);
			di += 6;
		}
		di = x;
	} else {
		print_chr(0x20, di, y);
		print_chr(0x5f, di, y);
	}
	wait_for_keypress();
	ds_writew(0x4597, 0);

	c = 0;
	while (c != 0xd || pos == 0) {
		do {
			do {} while (G105de::CD_bioskey(1) == 0 &&
				ds_readw(0x4597) == 0);

			if (ds_readw(0x4597)) {
				ds_writew(0x459d, 0xd);
				ds_writew(0x459b, 0);
				ds_writew(0x4597, 0);
			} else {
				ds_writew(0x459d, G105de::CD_bioskey(0));
				ds_writew(0x459f, ds_readw(0x459d) >> 8);
				ds_writew(0x459d, ds_readw(0x459d) & 0xff);
			}
		} while (ds_readw(0x459f) == 0 && ds_readw(0x459d) == 0);

		c = ds_readw(0x459d);

		if (c == 0xd)
			continue;

		if (ds_readw(0x459f) == 1) {
			*dst = 0;
			call_mouse();
			ds_writew(0x459f, 0);
			return 1;
		}
		if (c == 8) {
			if (pos <= 0)
				continue;

			if (zero == 1 && pos != num)
				print_chr(0x20, di, y);
			pos--;
			dst--;
			get_chr_info(*dst, (Bit8u*)&l3);

			if (zero == 0)
				di -= 6;
			else
				di -= l3;
		} else {
			if (!(ds_readb(0x1ff9 + c) & 0x0e) &&
				(c != 0x84 & 0xff) && (c != 0x94 & 0xff) &&
				(c != 0x81 & 0xff) && (c != 0x8e & 0xff) &&
				(c != 0x99 & 0xff) && (c != 0x9a & 0xff) &&
				(c != 0x20) && (c != 0x2e))
					continue;

			/* is_alpha(c) */
			if (ds_readb(0x1ff9 + c) & 0xc)
				c = toupper(c);

			/* ae */
			if (c == 0x84)
				c = 0xff8e;
			/* oe */
			if (c == 0x94)
				c = 0xff99;
			/* ue */
			if (c == 0x81)
				c = 0xff9a;

			/* are we at the end of the input field */
			if (pos == num) {
				dst--;
				get_chr_info(*dst, (Bit8u*)&l3);

				if (zero != 0)
					di -= l3;
				else
					di -= 6;

				pos--;
			}

			*dst++ = c & 0xff;
			print_chr(0x20, di, y);
			print_chr(c & 0xff, di, y);
			get_chr_info(c & 0xff, (Bit8u*)&l3);

			if (zero != 0)
				di += l3;
			else
				di += 6;

			pos++;

			if (zero != 1 || pos == num)
				continue;
		}
		print_chr(0x20, di, y);
		print_chr(0x5f, di, y);
	}

	if (zero == 0)
		while (pos < num) {
			print_chr(0x20, di, y);
			di += 6;
			pos++;
		}

	*dst = 0;
	call_mouse();
	return 0;
}

void draw_popup_line(Bit16u line, Bit16u type)
{
	PhysPt dst, src;
	Bit16u i, popup_right, popup_left, popup_middle;

	/* This is a bit bogus */
	dst = Real2Phys(ds_readd(0x47cb));

	/* (line * 8 + y) * 320  + x */
	dst = ((line * 8) + ds_readw(0x40bd)) * 320 + Real2Phys(ds_readd(0x47cb)) + ds_readw(0x40bb);

	switch (type) {
		case 0: {
			popup_left = 0;
			popup_middle = 0x380;
			popup_right = 0x80;
			break;
		}
		case 1: {
			popup_left = 0x100;
			popup_middle = 0x480;
			popup_right = 0x180;
			break;
		}
		case 2: {
			popup_left = 0x200;
			popup_middle = 0x480;
			popup_right = 0x180;
			break;
		}
		case 3: {
			popup_left = 0x280;
			popup_middle = 0x580;
			popup_right = 0x300;
			break;
		}
	}

	src = Real2Phys(ds_readd(0x476d)) + popup_left;
	copy_to_screen(src, dst, 16, 8, 0);

	src = Real2Phys(ds_readd(0x476d)) + popup_middle;
	dst += 16;
	for (i = 0; i < menu_tiles; dst += 32, i++)
		copy_to_screen(src, dst, 32, 8, 0);

	src = Real2Phys(ds_readd(0x476d)) + popup_right;
	copy_to_screen(src, dst, 16, 8, 0);
}

/**
 *	infobox() - draws and info- or enter_numberbox
 *	@msg:		the message for the box
 *	@enter_num:	number of digits to enter
 *
 *	if @digits is zero the function just delays.
 */
Bit16u infobox(Bit8u *msg, Bit16u digits)
{
	PhysPt src, dst;
	Bit16u bg, fg;
	Bit16u retval, v2, v3, v4, i, lines;
	Bit16s di;

	retval = 0;
	ds_writew(0x4789, 1);
	v2 = text_x;
	v3 = text_y;
	v4 = text_x_end;

	di = (menu_tiles + 1) * 32;
	ds_writew(0x40bb, abs(320 - di) / 2 + ds_readw(0x1327));
	text_x = abs(320 - di) / 2 + ds_readw(0x1327) + 5;
	text_x_end = di - 10;
	lines = str_splitter((char*)msg);

	if (digits != 0)
		lines += 2;

	ds_writew(0x40bd, abs(200 - (lines + 2) * 8) / 2);
	ds_writew(0x40bd, ds_readw(0x40bd) + ds_readw(0x1329));
	text_y = ds_readw(0x40bd) + 7;

	draw_mouse_ptr_wrapper();

	src = Real2Phys(ds_readd(0x47cb));
	src += ds_readw(0x40bd) * 320 + ds_readw(0x40bb);
	dst = Real2Phys(ds_readd(0x47d3));

	copy_to_screen(src, dst, di, (lines + 2) * 8, 2);

	/* draw the popup box */
	draw_popup_line(0, 0);

	for (i = 0; i < lines; i++)
		draw_popup_line(i + 1, 1);

	draw_popup_line(lines + 1, 3);

	get_vals((Bit8u*)&fg, (Bit8u*)&bg);
	set_vals(0xff, 0xdf);

	print_line((char*)msg);

	ds_writew(0x4599, 0);
	call_mouse();

	if (digits) {
		enter_string(gen_ptr3,
			abs(di - digits * 6) / 2 + ds_readw(0x40bb),
			lines * 8 + ds_readw(0x40bd) - 2, digits, 0);

		retval = atol(gen_ptr3);
	} else {
		action_table = (Bit8u*)&action_input;
		vsync_or_key(150 * lines);
		action_table = NULL;
	}

	set_vals(fg, bg);
	draw_mouse_ptr_wrapper();

	dst = Real2Phys(ds_readd(0x47cb));
	dst += ds_readw(0x40bd) * 320 + ds_readw(0x40bb);
	src = Real2Phys(ds_readd(0x47d3));

	copy_to_screen(src, dst, di, (lines + 2) * 8, 0);
	call_mouse();

	text_x = v2;
	text_y = v3;
	text_x_end = v4;

	ds_writew(0x4789, 0);
	ds_writew(0x459f, 0);

	return retval;
}

/**
 * gui_bool() - displays a yes - no radio box
 * @header:	the header of menu
 *
 */
Bit16s gui_bool(Bit8u *msg)
{
	Bit16s retval;

	bool_mode = true;
	retval = gui_radio(msg, 2, texts[4], texts[5]);
	bool_mode = false;

	if (retval == 1)
		return 1;
	else
		return 0;
}

/**
 * fill_radio_button() - marks the active radio button
 * @old_pos:	the position of the last active button (or -1)
 * @new_pos:	the position of the current active button
 * @offset:	the offset of the first radio line
 *
 */
void fill_radio_button(Bit16s old_pos, Bit16u new_pos, Bit16u offset)
{
	Bit16u i, x, y;

	draw_mouse_ptr_wrapper();

	/* unmark the old radio button, if any */
	if (old_pos != -1) {
		y = ds_readw(0x40bb) + 6;

		x = (offset + old_pos) * 8 + ds_readw(0x40bd) + 2;

		for (i = 0; i < 4; i++)
			draw_v_line(y + i, x, x + 3, 0xd8);
	}

	/* mark the new radio button */
	y = ds_readw(0x40bb) + 6;

	x = (offset + new_pos) * 8 + ds_readw(0x40bd) + 2;

	for (i = 0; i < 4; i++)
		draw_v_line(y + i, x, x + 3, 0xd9);

	call_mouse();
}

/**
 * gui_radio() - displays a radio menu
 * @header:	the header of the menu
 * @options:	the number of options
 *
 */
Bit16s gui_radio(Bit8u *header, Bit8s options, ...)
{
	va_list arguments;

	char *str;
	PhysPt src, dst;
	Bit16u r3, r4, r5, r6, r7, r8, r9;
	Bit16u my_bak, mx_bak;
	Bit16u bak1, bak2, bak3;
	Bit16u fg_bak, bg_bak;
	Bit16u lines_header, lines_sum;
	Bit16s retval;
	Bit16u di;
	Bit16u i;

	r5 = 0;
	r6 = 0xffff;
	di = 1;
	bak1 = text_x;
	bak2 = text_y;
	bak3 = text_x_end;
	r9 = (menu_tiles + 1) * 32;
	ds_writew(0x40bb, (abs(320 - r9) / 2) + ds_readw(0x1327));
	text_x = ds_readw(0x40bb) + 5;
	text_x_end = (menu_tiles + 1) * 32 - 10;
	lines_header = str_splitter((char*)header);
	lines_sum = lines_header + options;
	ds_writew(0x40bd, abs(200 - (lines_sum + 2) * 8) / 2);
	text_y = ds_readw(0x40bd) + 7;
	draw_mouse_ptr_wrapper();

	/* save old background */
	src = Real2Phys(ds_readd(0x47cb));
	src += ds_readw(0x40bd) * 320 + ds_readw(0x40bb);
	dst = Real2Phys(ds_readd(0x47d3));
	copy_to_screen(src, dst, r9, (lines_sum + 2) * 8, 2);

	/* draw popup */
	draw_popup_line(0, 0);
	for (i = 0; i < lines_header; i++)
		draw_popup_line(i + 1, 1);
	for (i = 0; options > i; i++)
		draw_popup_line(i + lines_header + 1, 2);
	draw_popup_line(lines_sum + 1, 3);

	/* save and set text colors */
	get_vals((Bit8u*)&fg_bak, (Bit8u*)&bg_bak);
	set_vals(0xff, 0xdf);

	/* print header */
	if (lines_header)
		print_line((char*)header);

	r3 = text_x + 8;
	r4 = (lines_header + 1) * 8 + ds_readw(0x40bd);

	/* print radio options */
	va_start(arguments, options);
	for (i = 1; i <= options; r4 += 8, i++) {
		str = va_arg(arguments, char*);
		print_str(str, r3, r4);
	}
	va_end(arguments);

	/* save and set mouse position */
	mx_bak = ds_readw(0x124c);
	my_bak = ds_readw(0x124e);
	ds_writew(0x124c, ds_readw(0x40bb) + 90);
	ds_writew(0x1250, ds_readw(0x40bb) + 90);
	r7 = (lines_header + 1) * 8 + ds_readw(0x40bd);
	r8 = r7;
	ds_writew(0x124e, r8);
	ds_writew(0x1252, r8);
	mouse_move_cursor(ds_readw(0x124c), r8);

	ds_writew(0x1246, ds_readw(0x40bb) + r9 - 16);
	ds_writew(0x1242, ds_readw(0x40bb));
	ds_writew(0x1240, (lines_header + 1) * 8 + ds_readw(0x40bd));
	ds_writew(0x1244,
		ds_readw(0x40bd) + options * 8 + (lines_header + 1) * 8 - 1);
	call_mouse();
	ds_writew(0x4599, 0);

	while (r5 == 0) {
		action_table = (Bit8u*)&action_input;
		handle_input();
		action_table = NULL;

		if (di != r6) {
			fill_radio_button(r6, di, lines_header);
			r6 = di;
		}
		if (ds_readw(0x4599) != 0 ||
			ds_readw(0x459f) == 1 ||
			ds_readw(0x459f) == 0x51) {
			/* has the selection been canceled */
			retval = 0xffff;
			r5 = 1;
			ds_writew(0x4599, 0);
		}
		if (ds_readw(0x459f) == 0x1c) {
			/* has the return key been pressed */
			retval = di;
			r5 = 1;
		}
		if (ds_readw(0x459f) == 0x48) {
			/* has the up key been pressed */
			if (di == 1)
				di = options;
			else
				di--;
		}
		if (ds_readw(0x459f) == 0x50) {
			/* has the down key been pressed */
			if (di == options)
				di = 1;
			else
				di++;
		}
		if (ds_readw(0x124e) != r8) {
			/* ihas the mouse been moved */
			r8 = ds_readw(0x124e);
			di = (r8 - r7) / 8 + 1;
		}
		/* is this a bool radiobox ? */
		if (bool_mode) {
			if (ds_readw(0x459f) == 0x2c) {
				/* has the 'j' key been pressed */
				retval = 1;
				r5 = 1;
			} else if (ds_readw(0x459f) == 0x31) {
				/* has the 'n' key been pressed */
				retval = 2;
				r5 = 1;
			}
		}
	}

	draw_mouse_ptr_wrapper();

	ds_writew(0x124c, mx_bak);
	ds_writew(0x1250, mx_bak);
	ds_writew(0x124e, my_bak);
	ds_writew(0x1252, my_bak);

	ds_writew(0x1246, 319);
	ds_writew(0x1242, 0);
	ds_writew(0x1240, 0);
	ds_writew(0x1244, 199);

	mouse_move_cursor(mx_bak, my_bak);

	dst = Real2Phys(ds_readd(0x47cb));
	dst += ds_readw(0x40bd) * 320 + ds_readw(0x40bb);
	src = Real2Phys(ds_readd(0x47d3));
	copy_to_screen(src, dst, r9, (lines_sum + 2) * 8, 0);
	call_mouse();
	set_vals(fg_bak, bg_bak);

	text_x = bak1;
	text_y = bak2;
	text_x_end = bak3;
	ds_writew(0x459f, 0);

	return retval;
}

/**
 * enter_name() - enter the name of a hero
 */
void enter_name()
{
	PhysPt dst;

	dst = Real2Phys(ds_readd(0x47cb) + 12 * 320 + 176);

	draw_mouse_ptr_wrapper();
	copy_to_screen(Real2Phys(ds_readd(0x479f)), dst, 94, 8, 0);
	enter_string((char*)MemBase + PhysMake(datseg, 0x132c), 180, 12, 15, 1);
	copy_to_screen(Real2Phys(ds_readd(0x479f)), dst, 94, 8, 0);
	call_mouse();
	print_str((char*)MemBase + PhysMake(datseg, 0x132c), 180, 12);
}

void change_head()
{
	char nvf[19];
	Bit8u *n = (Bit8u*)nvf;

	host_writed(n + 0, ds_readd(0x47a3));

	host_writed(n + 4, ds_readd(0x4771));

	host_writew(n + 8, head_current);

	host_writew(n + 10, 0);

	host_writed(n + 11, RealMake(SegValue(ss), reg_sp - 8));
	host_writed(n + 15, RealMake(SegValue(ss), reg_sp - 10));

	process_nvf(n);

	ds_writed(0x40cd, ds_readd(0x47a3));

	ds_writew(0x40c5, 272);
	ds_writew(0x40c9, 303);

	if (gen_page == 0) {
		ds_writew(0x40c7, 8);
		ds_writew(0x40cb, 39);
		do_draw_pic(0);
	} else if (gen_page > 4) {
		ds_writew(0x40c7, 4);
		ds_writew(0x40cb, 35);
		ds_writew(0x40c7, 8);
		ds_writew(0x40cb, 39);
		do_draw_pic(0);
	}
}

/**
 * change_sex() - changes the sex of the hero
 *
 */
void change_sex()
{
	PhysPt dst, src;
	signed char tmp;

	/* change sex of the hero */
	ds_writeb(0x134e, ds_readb(0x134e) ^ 1);

	/* hero has a typus */
	if (ds_readb(0x134d)) {
		if (ds_readb(0x134e) != 0) {
			/* To female */
			head_current = head_first_female[head_typus];
			head_first = head_first_female[head_typus];
			head_last = head_first_male[head_typus + 1] - 1;
		} else {
			/* To male */
			tmp = head_first_male[head_typus];
			head_current = tmp;
			head_first = tmp;
			head_last = head_first_female[head_typus] - 1;
		}
		ds_writew(0x11fe, 1);
		return;
	} else {
		dst = Real2Phys(ds_readd(0x47cb)) + 7 * 320 + 305;
		src = Real2Phys(ds_readd(0x4769)) + ds_readb(0x134e) * 256;
		draw_mouse_ptr_wrapper();
		copy_to_screen(src, dst, 16, 16, 0);
		call_mouse();
	}
}

void do_gen()
{
	Bit16s si, di;

	di = 0;

	ds_writew(0x11fe, 1);

	/* try to set the level from parameters */
	switch (ds_readw(0x3f5e)) {
		case 'a': {
			/* ADVANCED */
			ds_writew(0x40bf, 2);
			break;
		}
		case 'n': {
			/* NOVICE */
			ds_writew(0x40bf, 1);
			break;
		}
		default: {
			ds_writew(0x40bf, -1);
		}
	}

	/* ask for level */
	while (ds_readw(0x40bf) == 0xffff) {
		ds_writew(0x40bf,
			gui_radio((Bit8u*)texts[0], 2, texts[1], texts[2]));
	}

	ds_writew(0x4599, 1);

	/* main loop */
	while (!di) {
		if (ds_readw(0x11fe)) {
			refresh_screen();
			ds_writew(0x11fe, 0);
		}

		action_table = (Bit8u*)action_page[gen_page];
		handle_input();
		action_table = NULL;

		if (ds_readw(0x4599) || ds_readw(0x459f) == 0x49) {
			/* print the menu for each page */
			switch(gen_page) {
				case 0: {
					si = gui_radio((Bit8u*)texts[0x1c/4], 9,
						texts[0x28 / 4],
						texts[0x2c / 4],
						texts[0x3c / 4],
						texts[0x20 / 4],
						texts[0x38 / 4],
						texts[0x30 / 4],
						texts[0x418 / 4],
						texts[0x24 / 4],
						texts[0x408 / 4]);

					if (si != -1) {
						if (si >= 4 && si < 6 &&
							ds_readb(0x1360) &&
							!gui_bool((Bit8u*)texts[0x34 /4])) {
							si = 0;
						}
						ds_writew(0x459f, 0);
						switch (si) {
							case 1: {
								enter_name();
								break;
							}
							case 2: {
								change_sex();
								break;
							}
							case 3: {
								change_attribs();
								break;
							}
							case 4: {
								memset(MemBase +PhysMake(datseg, 0x132c), 0, 1754);
								clear_hero();
								ds_writew(0x4599,
									1);
								ds_writew(0x11fe,
									1);
								break;
							}
							case 5: {
								new_values();
								break;
							}
							case 6: {
								select_typus();
								break;
							}
							case 7: {
								choose_typus();
								break;
							}
							case 8: {
								save_chr();
								break;
							}
							case 9: {
								if (gui_bool((Bit8u*)texts[0x40c / 4]))
									di = 1;
								break;
							}
						}
					/* TODO: 0x3334 -> 0x33e0 */
					}
					break;
				}
				case 1:
				case 2:
				case 3: {
					select_skill();
					break;
				}
				case 4: {
					choose_atpa();
					break;
				}
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
				case 10: {
					select_spell();
					break;
				}
			}
		}

		if (ds_readw(0x459f) == 0x60)
			change_sex();

		if (ds_readw(0x459f) == 0x61)
			enter_name();

		if (ds_readw(0x459f) == 0x48 && gen_page == 0) {
			if (ds_readb(0x134d) == 0) {
				infobox((Bit8u*)texts[0x44 / 4], 0);
			} else {
				if (head_current < head_last) {
					head_current++;
				} else {
					head_current = head_first;
				}
				change_head();
			}
		}

		if (ds_readw(0x459f) == 0x50 && gen_page == 0) {
			if (ds_readb(0x134d) == 0) {
				infobox((Bit8u*)texts[0x44 / 4], 0);
			} else {
				if (head_current > head_first) {
					head_current--;
				} else {
					head_current = head_last;
				}
				change_head();
			}
		}

		if (ds_readw(0x459f) == 0x4d && ds_readb(0x40bf) != 1) {
			if (ds_readb(0x134d) == 0) {
				infobox((Bit8u*)texts[0x120 / 4], 0);
			} else {
				ds_writew(0x11fe, 1);

				if (((ds_readw(0x134d) >= 7) ? 10 : 4) > gen_page)
					gen_page++;
				else
					gen_page = 0;
			}
		}

		if (ds_readw(0x459f) == 0x4b) {
			if ((Bit16s)gen_page > 0) {
				ds_writew(0x11fe, 1);
				gen_page--;
			} else {
				if (ds_readw(0x40bf) != 1) {
					if (ds_readb(0x134d) == 0) {
						infobox((Bit8u*)texts[0x120 / 4], 0);
					} else {
						ds_writew(0x11fe, 1);
						gen_page = ds_readb(0x134d) < 7 ? 4 : 10;
					}
				}
			}
		}

		if (ds_readw(0x459f) > 2 &&
			ds_readw(0x459f) <= 6 &&
			ds_readw(0x40bf) == 2 &&
			ds_readb(0x134d)) {
			switch (ds_readw(0x459f)) {
				case 2: {
					si = 0;
					break;
				}
				case 3: {
					si = 1;
					break;
				}
				case 4: {
					si = 4;
					break;
				}
				case 5: {
					si = 5;
					break;
				}
				default: {
					si = 10;
				}
			}
		}
		if (si != gen_page && si >= 5 && ds_readb(0x134d >= 7)) {
			gen_page = si;
			ds_writew(0x11fe, 1);
		}
	}
}

/**
 * calc_at_pa() - calculate AT and PA values
 */
/* static */
void calc_at_pa() {
	Bit16u i;
	Bit16s tmp, base;

	/* base = (GE + IN + KK) / 5 */
	tmp = (signed char)ds_readb(0x136f);
	tmp += (signed char)ds_readb(0x1372);
	tmp += (signed char)ds_readb(0x136c);

	base = tmp / 5;

	/* round up if neccessary */
	if ((tmp % 5) >= 3)
		base++;

	/* save AT/PA base value */
	ds_writeb(0x1393, base);

	for (i = 0; i < 7; i++) {
		/* set the weapon values to base */
		ds_writeb(0x139b + i, base);
		ds_writeb(0x1394 + i, base);

		if ((signed char)ds_readb(0x1434 + i) < 0) {
			/* calculate ATPA for negative weapon skill */
			tmp = abs((signed char)ds_readb(0x1434 + i)) / 2;

			/* sub skill / 2 from AT */
			ds_writeb(0x1394 + i, ds_readb(0x1394 + i) - tmp);

			/* sub skill / 2 from PA */
			ds_writeb(0x139b + i, ds_readb(0x139b + i) - tmp);

			/* if skill % 2, then decrement PA */
			if (abs((signed char)ds_readb(0x1434 + i)) != tmp * 2)
				ds_writeb(0x139b + i, ds_readb(0x139b + i) - 1);
		} else {
			/* calculate ATPA for positive weapon skill */
			tmp = abs((signed char)ds_readb(0x1434 + i)) / 2;

			/* add skill / 2 to AT */
			ds_writeb(0x1394 + i, ds_readb(0x1394 + i) + tmp);

			/* add skill / 2 to PA */
			ds_writeb(0x139b + i, ds_readb(0x139b + i) + tmp);

			/* if skill % 2, then increment AT */
			if (ds_readb(0x1434 + i) != tmp * 2)
				ds_writeb(0x1394 + i, ds_readb(0x1394 + i) + 1);
		}

	}
}

/**
 * fill_values() - fills the values if typus is chosen
 *
 */
void fill_values()
{
	Bit8u *ptr;
	Bit16u v2, v1, i;
	Bit16u si, di;

	/* helper vars */
	Bit8u typus = ds_readb(0x134d);

	/* fill skill values */
	for (i = 0; i < 52; i++) {
		Bit8s tval;

		/* get skill value from a char[13][52] */
		tval = ds_readb(0x437 + typus * 52 + i);
		ds_writeb(0x1434 + i, tval);

		/* set skill_incs and skill_tries to zero */
		skill_incs[i].incs = 0;
		skill_incs[i].tries = 0;
	}

	/* set skill_attempts */
	ds_writeb(0x1468, ds_readb(0xa85 + typus - 1));

	/* do magic user init */
	if (typus >= 7) {
		/* fill initial spell values */
		for (i = 0; i < 86; i++) {
			Bit8s sval;

			/* get spell value from a char[13][86] */
			sval = ds_readb(0x481 + typus * 86 + i);
			ds_writeb(0x1469 + i, sval);

			/* set spell_incs and spell_tries to zero */
			spell_incs[i].incs = 0;
			spell_incs[i].tries = 0;
		}
		/* special mage values */
		if (typus == 9) {
			/* set staff spell to level 1 */
			ds_writeb(0x14c1, 1);
			/* select mage school */
			do {
				ds_writeb(0x14c0, gui_radio((Bit8u*)texts[47], 9,
							texts[48], texts[49],
							texts[50], texts[51],
							texts[52], texts[53],
							texts[54], texts[55],
							texts[56]) - 1);
			} while (ds_readb(0x14c0) == 0xfe);

			/* add magic school modifications */
			for (i = 0; ds_readb(0xa9d + ds_readb(0x14c0) * 29) > i; i++) {
				Bit8s school = ds_readb(0x14c0);
				Bit16s spell, mod;

				spell = ds_readw(0xa9d + 1 + school * 29 + i * 2);
				mod = ds_readb(0xa9d + 15 + school * 29 + i * 2);
				ds_writeb(0x1469 + spell,
					ds_readb(0x1469 + spell) + mod);


			}
		}

		/* set spell attempts */
		ds_writeb(0x14bf, ds_readb(0xa91 + typus - 7));

		/* get convertable increase attempts */
		di = ds_readb(0xa97 + typus - 7);

		if (di && ds_readw(0x40bf) == 2 && gui_bool((Bit8u*)texts[269])) {
			/* create string */
			sprintf(gen_ptr2,
				texts[270], di);

			i = infobox((Bit8u*)gen_ptr2, 1);

			if (i > 0) {
				/* spell attempts to skill attempts */
				if (i > di)
					i = di;
				di -= i;
				/* change spell attempts */
				ds_writeb(0x14bf, ds_readb(0x14bf) - i);
				/* change skill attempts */
				ds_writeb(0x1468, ds_readb(0x1468) + i);
			} else {

				/* create string */
				sprintf(gen_ptr2,
					texts[271], di);

				i = infobox((Bit8u*)gen_ptr2, 1);
				if (i > 0) {
					if (i > di)
						i = di;
					/* change spell attempts */
					ds_writeb(0x14bf, ds_readb(0x14bf) + i);
					/* change skill attempts */
					ds_writeb(0x1468, ds_readb(0x1468) - i);
				}
			}
		}


	}

	/* set LE */
	ds_writew(0x138c, init_le[typus]);
	ds_writew(0x138a, init_le[typus]);

	/* set AE */
	ds_writew(0x1390, init_ae[typus]);
	ds_writew(0x138e, init_ae[typus]);

	/* wanna change 10 spell_attempts against 1W6+2 AE ? */
	if (typus == 9 && ds_readw(0x40bf) == 2 && gui_bool((Bit8u*)texts[268])) {
		/* change spell_attempts */
		ds_writeb(0x14bf, ds_readb(0x14bf) - 10);
		ds_writew(0x1390, random_interval_gen(3, 8) + ds_readw(0x1390));
		ds_writew(0x138e, ds_readw(0x1390));
	}

	/* roll out size */
	ds_writeb(0x134f, random_interval_gen(height_range[typus].min,
				height_range[typus].max));

	/* calculate weight i = (height - weight_mod) * 40 */
	ds_writew(0x1350, (ds_readb(0x134f) - ds_readb(0x92d + typus)) * 40);

	/* roll out the money */
	i = random_gen(20);
	ptr = Real2Host(ds_readd(0xa51 + typus * 4));
	for (si = 0; host_readw(ptr + si * 6) < i; si++);

	ds_writed(0x1358, random_interval_gen(host_readw(ptr + si * 6 + 2),
				host_readw(ptr + si * 6 + 4)) * 10);

	/* calculate MR  = (KL + SI + Level) / 3 - 2 * AG */
	ds_writeb(0x1392,
		(ds_readb(0x1363) + ds_readb(0x1360) + ds_readb(0x1353)) / 3 -
		ds_readb(0x1375) * 2);
	/* add typus MR Modificator */
	ds_writeb(0x1392, ds_readb(0x1392) + ds_readb(0x93a + typus));

	/* roll out god */
	ds_writeb(0x1352, random_gen(12));

	/* add gods boni */
	switch (ds_readb(0x1352)) {
		case 1 : {
			/* Praios: MU + 1 */
			ds_writeb(0x1360, ds_readb(0x1360) + 1);
			ds_writeb(0x1361, ds_readb(0x1360) + 1);
			got_mu_bonus = true;
			break;
		}
		case 2 : {
			/* Rondra: skill swords + 1 */
			ds_writeb(0x1434 + 3, ds_readb(0x1434 + 3) + 1);
			break;
		}
		case 3 : {
			/* Efferd: skill swim + 1 */
			ds_writeb(0x1434 + 14, ds_readb(0x1434 + 14) + 1);
			break;
		}
		case 4 : {
			/* Travia: skill treat poison + 1 */
			ds_writeb(0x1434 + 44, ds_readb(0x1434 + 44) + 1);
			break;
		}
		case 5 : {
			/* Boron: skill human nature + 1 */
			ds_writeb(0x1434 + 24, ds_readb(0x1434 + 24) + 1);
			break;
		}
		case 6 : {
			/* Hesinde: skill alchemy + 1 */
			ds_writeb(0x1434 + 32, ds_readb(0x1434 + 32) + 1);
			break;
		}
		case 7 : {
			/* Firun: skills track and missle weapons + 1  */
			ds_writeb(0x1434 + 26, ds_readb(0x1434 + 26) + 1);
			ds_writeb(0x1434 + 7, ds_readb(0x1434 + 7) + 1);
			break;
		}
		case 8 : {
			/* Tsa: CH + 1 */
			ds_writeb(0x1366, ds_readb(0x1366) + 1);
			ds_writeb(0x1367, ds_readb(0x1367) + 1);
			got_ch_bonus = true;
			break;
		}
		case 9 : {
			/* Phex: skills hide and pickpocket + 1 */
			ds_writeb(0x1434 + 49, ds_readb(0x1434 + 49) + 1);
			ds_writeb(0x1434 + 13, ds_readb(0x1434 + 13) + 1);
			break;
		}
		case 10 : {
			/* Peraine: skills treat disease and wounds + 1 */
			ds_writeb(0x1434 + 45, ds_readb(0x1434 + 45) + 1);
			ds_writeb(0x1434 + 46, ds_readb(0x1434 + 46) + 1);
			break;
		}
		case 11 : {
			/* Ingerimm: skill tactics + 1*/
			ds_writeb(0x1434 + 37, ds_readb(0x1434 + 37) + 1);
			break;
		}
		case 12 : {
			/* Rhaja: skills dance, seduce and instrument + 1*/
			ds_writeb(0x1434 + 20, ds_readb(0x1434 + 20) + 1);
			ds_writeb(0x1434 + 16, ds_readb(0x1434 + 16) + 1);
			ds_writeb(0x1434 + 47, ds_readb(0x1434 + 47) + 1);
			break;
		}
	}
	/* calclate AT and PA values */
	calc_at_pa();

	/* if mode == novice */
	if (ds_readw(0x40bf) == 1) {
		/* automatic increase skills */
		for (i = 0; ds_readb(0x1468) > 0; i++) {
			v1 = ds_readw(0xba2 + typus * 50 + i * 2);
			skill_inc_novice(v1);
		}

		si = 0;
		/* prepare mage automatic spell list */
		if (typus == 9) {
			Bit16u school = ds_readb(0x14c0);
			/* 1. house spells */
			for (i = 0; ds_readb(0xa9d + school * 29) > i; si++, i++) {
				ds_writew(0xe2c + 90 * 2 + si * 2,
					ds_readw(0xa9d + 1 + school * 29 + i *2));
			}
			/* 2. all schools spells */
			for (i = 0; ds_readw(0x3ab + school * 4 + 2) > i; si++, i++) {
				ds_writew(0xe2c + 90 * 2 + si * 2,
					ds_readw(0x3ab + school * 4) + i);
			}
			/* 3. five domination spells */
				/* Herr der Tiere */
			ds_writew(0xe2c + 90 * 2 + si++ * 2, 0x52);
				/* Horriphobus */
			ds_writew(0xe2c + 90 * 2 + si++ * 2, 0x31);
				/* Mag. Raub */
			ds_writew(0xe2c + 90 * 2 + si++ * 2, 0x35);
				/* Respondami */
			ds_writew(0xe2c + 90 * 2 + si++ * 2, 0x21);
				/* Sanftmut */
			ds_writew(0xe2c + 90 * 2 + si++ * 2, 0x4f);

			/* 4. all schools spells */
			for (i = 0; ds_readw(0x3ab + school * 4 + 2) > i; si++, i++) {
				ds_writew(0xe2c + 90 * 2 + si * 2,
					ds_readw(0x3ab + school *4) + i);
			}
			/* 5. all schools spells */
			for (i = 0; ds_readw(0x3ab + school * 4 + 2) > i; si++, i++) {
				ds_writew(0xe2c + 90 * 2 + si * 2,
					ds_readw(0x3ab + school *4) + i);
			}
			/* 6. random spells */
			while (si < 45) {
				ds_writew(0xe2c + 90 * 2 + si++ * 2,
					random_gen(85));
			}
		}
		/* automatic increase spells */
		for (i = 0; ds_readb(0x14bf) > 0; i++) {
			v2 = ds_readw(0xe2c + (typus - 7) * 90 + i * 2);
			spell_inc_novice(v2);
		}
	}
}


void refresh_screen()
{
	PhysPt src, dst;

	if (ds_readw(0x11fe)) {
		ds_writed(0x47c7, ds_readd(0x47d3));
		load_page(gen_page);
		save_picbuf();

		/* page with base values and hero is not male */
		if (gen_page == 0 && ds_readb(0x134e) != 0) {

			dst = Real2Phys(ds_readd(0x47d3)) + 7 * 320 + 305;
			src = Real2Phys(ds_readd(0x4769) + ds_readb(0x134e) * 256);

			copy_to_screen(src, dst, 16, 16, 0);
		}

		/* page with base values and level is advanced */
		if (gen_page == 0 && ds_readw(0x40bf) == 1) {
			dst = Real2Phys(ds_readd(0x47d3)) + 178 * 320 + 284;
			src = Real2Phys(ds_readd(0x4769) + 512);

			copy_to_screen(src, dst, 20, 15, 0);
		}
		/* if the page is lower than 5 */
		if (gen_page < 5) {
			/* draw DMENGE.DAT or the typus name */
			dst = Real2Phys(ds_readd(0x47d3)) + 0xa10;
			if (ds_readb(0x134d) != 0) {
				need_refresh = true;
				copy_to_screen(Real2Phys(ds_readd(0x47b3)),
					dst, 128, 184, 0);

				if (ds_readb(0x134e) != 0) {
					char *p;
					p = texts[0x43c / 4 + ds_readb(0x134d)];

					print_str(p,
						get_line_start_c(p, 16, 128),
						184);
				} else {
					char *p;
					p = texts[0x44 / 4 + ds_readb(0x134d)];

					print_str(p,
						get_line_start_c(p, 16, 128),
						184);
				}
			} else {
				if (need_refresh) {
					call_fill_rect_gen(Real2Phys(ds_readd(0x47cb)),
						16, 8, 143, 191, 0);
					need_refresh = false;
				}
				wait_for_vsync();
				set_palette(Real2Host(ds_readd(0x47a7)) + 0x5c02, 0 , 32);
				copy_to_screen(Real2Phys(ds_readd(0x47a7)),
					dst, 128, 184, 0);
			}
		}
		/* if hero has a typus */
		if (ds_readb(0x134d) != 0) {
			/* draw the head */
			char nvf[19];
			Bit8u *n =  (Bit8u*)nvf;

			/* set src */
			host_writed(n + 0, ds_readd(0x47a3));
			/* set dst */
			host_writed(n + 4, ds_readd(0x4771));
			/* set nr */
			host_writew(n + 8, head_current);
			/* set type */
			host_writew(n + 10, 0);
			/* place somewhere on unused DOS stack */
			host_writed(n + 11, RealMake(SegValue(ss), reg_sp - 8));
			host_writed(n + 15, RealMake(SegValue(ss), reg_sp - 10));
			process_nvf(n);

			ds_writed(0x40cd, ds_readd(0x47a3));
			ds_writew(0x40c5, 272);
			ds_writew(0x40c9, 303);
			ds_writed(0x40c1, ds_readd(0x47d3));

			/* draw the head */
			if (gen_page == 0) {
				/* on the base page */
				ds_writew(0x40c7, 8);
				ds_writew(0x40cb, 39);
				do_draw_pic(0);
			} else if (gen_page > 4) {
				/* on the spell pages */
				ds_writew(0x40c7, 4);
				ds_writew(0x40cb, 35);
				do_draw_pic(0);
			}

			ds_writed(0x40c1, ds_readd(0x47cb));

		}

		print_values();
		ds_writed(0x47c7, ds_readd(0x47cb));
		dst = Real2Phys(ds_readd(0x47cb));
		src = Real2Phys(ds_readd(0x47d3));
		draw_mouse_ptr_wrapper();
		copy_to_screen(src, dst, 320, 200, 0);
		call_mouse();
	} else {
		print_values();
	}
}

/* static */
void clear_hero() {

	Bit16u i;

	got_ch_bonus = false;
	got_mu_bonus = false;

	head_current = 0;
	head_last = 0;
	head_first = 0;
	head_typus = 0;

	for (i = 0; i < 14; i++)
		attrib_changed[i] = 0;

	for (i = 0; i < 86; i++) {
		spell_incs[i].incs = 0;
		spell_incs[i].tries = 0;
	}
	for (i = 0; i < 52; i++) {
		skill_incs[i].tries = 0;
		skill_incs[i].incs = 0;
	}

	ds_writeb(0x1353, 1);
}

/**
 * new_values() - roll out new attribute values
 *
 */
void new_values()
{
	/* Original-Bugfix:	there once was a char[11],
				which could not hold a char[16] */

	Bit8u *ptr;
	char name_bak[17];
	signed char values[8];
	Bit16u si, di, i, j;
	Bit8s bv1, bv2, bv3;

	/* set variable if hero has a typus */
	if (ds_readb(0x134d))
		ds_writew(0x11fe, 1);

	/* save the name of the hero */
	/* TODO strncpy() would be better here */
	strcpy(name_bak, (char*)MemBase + PhysMake(datseg, 0x132c));

	/* save the sex of the hero */
	bv3 = ds_readb(0x134e);

	/* clear the hero */
	memset(MemBase + PhysMake(datseg, 0x132c), 0 , 0x6da);
	clear_hero();

	/* restore the sex of the hero */
	ds_writeb(0x134e, bv3);

	/* restore the name of the hero */
	/* TODO strncpy() would be better here */
	strcpy((char*)MemBase + PhysMake(datseg, 0x132c), name_bak);

	refresh_screen();

	ds_writew(0x11fe, 0);
	ptr = MemBase + PhysMake(datseg, 0x1360);

	for (j = 0; j < 7; j++) {
		bv1 = random_interval_gen(8, 13);
		bv2 = 0;

		for (i = 0; i < 7; i++) {
			if (host_readb(ptr + i * 3))
				continue;

			values[bv2] = i;
			type_names[bv2] = texts[0x80 / 4 + i];
			bv2++;
		}

		sprintf(gen_ptr2,
			texts[46], bv1);

		do {
			ds_writew(0x1327, 0xffb0);

			di = gui_radio((Bit8u*)gen_ptr2,
				bv2,
				type_names[0],
				type_names[1],
				type_names[2],
				type_names[3],
				type_names[4],
				type_names[5],
				type_names[6]);

			ds_writew(0x1327, 0);
		} while (di == 0xffff);
		di = values[di - 1];
		host_writeb(ptr + di * 3 + 1, bv1);
		host_writeb(ptr + di * 3, bv1);
		draw_mouse_ptr_wrapper();
		refresh_screen();
		call_mouse();
	}

	ptr = MemBase + PhysMake(datseg, 0x1375);
	for (j = 0; j < 7; j++) {
		bv1 = random_interval_gen(2, 7);
		bv2 = 0;

		for (i = 0; i < 7; i++) {
			if (host_readb(ptr + i * 3))
				continue;

			values[bv2] = i;
			type_names[bv2] = texts[0x9c / 4 + i];
			bv2++;
		}

		sprintf(gen_ptr2,
			texts[46], bv1);

		do {
			ds_writew(0x1327, 0xffb0);

			di = gui_radio((Bit8u*)gen_ptr2,
				bv2,
				type_names[0],
				type_names[1],
				type_names[2],
				type_names[3],
				type_names[4],
				type_names[5],
				type_names[6]);

			ds_writew(0x1327, 0);
		} while (di == 0xffff);
		di = values[di - 1];
		host_writeb(ptr + di * 3 + 1, bv1);
		host_writeb(ptr + di * 3, bv1);
		draw_mouse_ptr_wrapper();
		refresh_screen();
		call_mouse();
	}



}

/**
 * skill_inc_novice() - tries to increment a skill in novice mode
 * @skill:	the skill which should be incremented
 *
 *
 */
void skill_inc_novice(Bit16u skill)
{
	Bit16u done = 0;

	while (!done) {
		/* leave the loop if 3 tries have been done */
		if (skill_incs[skill].tries == 3) {
			/* set the flag to leave this loop */
			done++;
			continue;
		}

		/* decrement counter for skill increments */
		ds_writeb(0x1468, ds_readb(0x1468) - 1);

		/* check if the test is passed */
		if (random_interval_gen(2, 12) > (signed char)ds_readb(0x1434 + skill)) {
			/* increment skill */
			ds_writeb(0x1434 + skill, ds_readb(0x1434 + skill) + 1);

			/* set inc tries for this skill to zero */
			skill_incs[skill].tries = 0;

			/* set the flag to leave this loop */
			done++;

			if (skill > 6)
				continue;

			/* set increment the lower AT/PA value */
			if (ds_readb(0x1394 + skill) > ds_readb(0x139b + skill))
				ds_writeb(0x139b + skill, ds_readb(0x139b + skill) + 1);
			else
				ds_writeb(0x1394 + skill, ds_readb(0x1394 + skill) + 1);
		} else
			/* inc tries for that skill */
			skill_incs[skill].tries++;
	}
}

/**
 * spell_inc_novice() - tries to increment a spell in novice mode
 * @spell:	the spell which should be incremented
 *
 *
 */
void spell_inc_novice(Bit16u spell)
{
	Bit16u done = 0;

	while (!done) {
		/* leave the loop if 3 tries have been done */
		if (spell_incs[spell].tries == 3) {
			/* set the flag to leave this loop */
			done++;
			continue;
		}

		/* decrement counter for spell increments */
		ds_writeb(0x14bf, ds_readb(0x14bf) - 1);

		/* check if the test is passed */
		if (random_interval_gen(2, 12) > (signed char)ds_readb(0x1469 + spell)) {
			/* increment spell */
			ds_writeb(0x1469 + spell, ds_readb(0x1469 + spell) + 1);

			/* set inc tries for this spell to zero */
			spell_incs[spell].tries = 0;

			/* set the flag to leave this loop */
			done++;
		} else
			spell_incs[spell].tries++;
	}
}

#define INC (1)
#define DEC (2)

/**
 * select_typus() - select a possible typus with current attribute values
 *
 */
void select_typus()
{
	Bit8s old_typus, possible_types, ltmp2;
	Bit8u *ptr;
	bool impossible;
	Bit16s i, si, di;
	struct type_bitmap t;

	old_typus = -1;
	t = empty_bitmap;

	/* check if attribs have bee set */
	if (ds_readb(0x1360) == 0) {
		infobox((Bit8u*)texts[265], 0);
		return;
	}
	/* save the old typus */
	old_typus = ds_readb(0x134d);
	/* disable MU bonus */
	if (got_mu_bonus) {
		ds_writeb(0x1360, ds_readb(0x1360) - 1);
		ds_writeb(0x1361, ds_readb(0x1360));
	}
	/* disable CH bonus */
	if (got_ch_bonus) {
		ds_writeb(0x1366, ds_readb(0x1366) - 1);
		ds_writeb(0x1367, ds_readb(0x1366));
	}
	possible_types = 0;

	for (i = 1; i <= 12; i++) {
		impossible = false;
		for (si = 0; si < 4; si++) {
			Bit8u req;
			ptr = MemBase + PhysMake(datseg, 0x1360 +
				ds_readb(0x3cf +  i * 8 + si * 2) * 3);

			ltmp2 = host_readb(ptr);
			req = ds_readb(0x3cf + 1 +  i * 8 + si * 2);
			if (req & 0x80) {
				if (ltmp2 <= (req & 0x80))
					continue;
				impossible = true;
			} else {
				if (req <= ltmp2)
					continue;
				impossible = true;
			}
		}

		if (impossible)
			continue;

		if (ds_readb(0x134e))
			type_names[possible_types] = texts[271 + i];
		else
			type_names[possible_types] = texts[17 + i];

		t.t[possible_types] = i;
		possible_types++;

	}

	if (possible_types == 0) {
		if (can_change_attribs() == 0) {
			/* totally messed up values */
			infobox((Bit8u*)texts[284], 0);
			return;
		} else {
			infobox((Bit8u*)texts[31], 0);
			return;
		}
	}

	di = gui_radio((Bit8u*)texts[30], possible_types,
			type_names[0],
			type_names[1],
			type_names[2],
			type_names[3],
			type_names[4],
			type_names[5],
			type_names[6],
			type_names[7],
			type_names[8],
			type_names[9],
			type_names[10],
			type_names[11]);

	/*	restore attibute boni when selection is canceled
	 *	or the same typus is selected.
	 */
	if (di == -1 || t.t[di - 1] == old_typus) {
		if (got_mu_bonus) {
			ds_writeb(0x1360, ds_readb(0x1360) + 1);
			ds_writeb(0x1361, ds_readb(0x1360));
		}
		if (got_ch_bonus) {
			ds_writeb(0x1366, ds_readb(0x1366) + 1);
			ds_writeb(0x1367, ds_readb(0x1366));
		}
		return;
	}

	/* set new typus */
	ds_writeb(0x134d, t.t[di - 1]);
	ds_writew(0x11fe, 1);

	load_typus(ds_readb(0x134d));
	draw_mouse_ptr_wrapper();
	call_fill_rect_gen(Real2Phys(ds_readd(0x47cb)), 16, 8, 143, 191, 0);
	wait_for_vsync();
	set_palette(Real2Host(ds_readd(0x47b3)) + 0x5c02, 0, 32);
	call_mouse();

	if (ds_readb(0x134d) == 10)
		head_typus = 10;
	else
		head_typus = ds_readb(0x134d);

	if (ds_readb(0x134e)) {
		head_current = head_first_female[head_typus];
		head_first = head_first_female[head_typus];
		head_last = head_first_male[head_typus + 1] - 1;
	} else {
		head_current = head_first_male[head_typus];
		head_first = head_first_male[head_typus];
		head_last = head_first_female[head_typus] - 1;
	}

	/* reset boni falags */
	got_ch_bonus = false;
	got_mu_bonus = false;
	fill_values();
	return;
}

/**
 * can_change_attribs() - checks if attribute changes are possible
 *
 */
Bit16u can_change_attribs()
{
	Bit8u *p;
	Bit16u i;
	Bit16s pa_inc, pa_dec, na_inc, na_dec;

	na_dec = na_inc = pa_dec = pa_inc = 0;

	for (i = 0; i < 14; i++)
		D1_LOG("%d ", attrib_changed[i]);
	D1_LOG("\n");


	for (i = 0; i < 7; i++) {
		p = p_datseg + 0x1360 + i * 3;

		if (attrib_changed[i] != INC && host_readb(p) > 8)
			pa_dec += 8 - (signed char)host_readb(p);
		if (attrib_changed[i] != DEC && host_readb(p) < 13)
			pa_inc += 13 - (signed char)host_readb(p);
	}

	for (i = 7; i < 14; i++) {
		p = p_datseg + 0x1360 + i * 3;

		if (attrib_changed[i] != INC && host_readb(p) > 2)
			na_dec += 2 - (signed char)host_readb(p);
		if (attrib_changed[i] != DEC && host_readb(p) < 8)
			na_inc += 8 - (signed char)host_readb(p);
	}

	D1_LOG("%d %d %d %d\n", pa_inc, pa_dec, na_inc, na_dec);

	/* no values from positive attributes left */
	if (pa_inc == 0 && pa_dec == 0)
		return 0;

	if (pa_inc == 0 && na_dec < 2)
		return 0;

	if (na_inc < 2 && pa_dec == 0)
		return 0;

	if (na_dec >= 2)
		return 1;

	if (na_inc >= 2)
		return 1;

	return 0;
}

/**
 * change_attribs() - change attributes
 */
void change_attribs()
{
	Bit8u *ptr1, *ptr2;
	Bit16s tmp1, tmp2, tmp3, si, di;
	Bit8u c;

	/* check if attributes have been set */
	if (ds_readb(0x1360) == 0) {
		infobox((Bit8u*)texts[16], 0);
		return;
	}
	/* check if changing is possible */
	if (can_change_attribs() == 0) {
		infobox((Bit8u*)texts[266], 0);
		return;
	}
	/* if typus != 0 */
	if (ds_readb(0x134d)) {
		if (!gui_bool((Bit8u*)texts[73]))
			return;
		/* set typus to 0 */
		ds_writeb(0x134d, 0);
		/* remove MU boni */
		if (got_mu_bonus) {
			ds_writeb(0x1360, ds_readb(0x1360) - 1);
			ds_writeb(0x1361, ds_readb(0x1360));
			got_mu_bonus = false;
		}
		/* remove CH boni */
		if (got_ch_bonus) {
			ds_writeb(0x1366, ds_readb(0x1366) - 1);
			ds_writeb(0x1367, ds_readb(0x1366));
			got_ch_bonus = false;
		}
		ds_writew(0x11fe, 1);
		refresh_screen();
		ds_writew(0x11fe, 0);
	}
	/* check again if changing is possible */
	if (can_change_attribs() == 0) {
		infobox((Bit8u*)texts[266], 0);
		return;
	}
	/* select a positive attribute to change */
	ds_writew(0x1327, 0xffb0);
	tmp2 = gui_radio((Bit8u*)texts[78], 7,
			texts[32], texts[33], texts[34], texts[35],
			texts[36], texts[37], texts[38]);
	ds_writew(0x1327, 0);

	if (tmp2 == -1)
		return;
	tmp2--;
	/* get the modification type */
	if (attrib_changed[tmp2] == 0) {
		/* ask user if inc or dec */
		ds_writew(0x1327, 0xffb0);
		tmp3 = gui_radio((Bit8u*)NULL, 2, texts[75], texts[76]);
		ds_writew(0x1327, 0);

		if (tmp3 == -1)
			return;
	} else {
		tmp3 = attrib_changed[tmp2];
	}

	ptr1 = MemBase + PhysMake(datseg, 0x1360 + tmp2 * 3);
	if (tmp3 == INC) {
		/* increment */
		if (host_readb(ptr1) == 13) {
			infobox((Bit8u*)texts[77], 0);
			return;
		}
		c = 0;
		for (di = 7; di < 14; di++) {
			if (attrib_changed[di] == DEC)
				continue;
			ptr2 = MemBase + PhysMake(datseg, 0x1360 + di * 3);
			if (host_readb(ptr2) >= 8)
				continue;
			c += 8 - host_readb(ptr2);
		}
		if (c < 2) {
			infobox((Bit8u*)texts[85], 0);
			return;
		}
		/* increment positive attribute */
		host_writeb(ptr1 + 1, host_readb(ptr1 + 1) + 1);
		host_writeb(ptr1, host_readb(ptr1) + 1);

		attrib_changed[tmp2] = INC;

		refresh_screen();

		tmp1 = 0;
		while (tmp1 != 2) {
			/* ask which negative attribute to increment */
			ds_writew(0x1327, 0xffb0);
			si = gui_radio((Bit8u*)texts[80], 7,
					texts[39], texts[40], texts[41],
					texts[42], texts[43], texts[44],
					texts[45]);
			ds_writew(0x1327, 0);

			if (si == -1)
				continue;

			si--;
			/* check if this attribute has been decremented */
			if (attrib_changed[si + 7] == DEC) {
				infobox((Bit8u*)texts[83], 0);
				continue;
			}
			/* check if attribute can be incremented */
			ptr1 = MemBase + PhysMake(datseg, 0x1375 + si * 3);
			if (host_readb(ptr1) == 8) {
				infobox((Bit8u*)texts[77], 0);
				continue;
			}
			/* increment the negative attribute */
			tmp1++;
			attrib_changed[si + 7] = INC;
			host_writeb(ptr1 + 1, host_readb(ptr1 + 1) + 1);
			host_writeb(ptr1, host_readb(ptr1) + 1);
			refresh_screen();
		}
	} else {
		/* decrement */
		/* check if the positive attribute can be decremented */
		if (host_readb(ptr1) == 8) {
			infobox((Bit8u*)texts[81], 0);
			return;
		}
		c = 0;
		for (di = 7; di < 14; di++) {
			if (attrib_changed[di] == INC)
				continue;
			ptr2 = MemBase + PhysMake(datseg, 0x1360 + di * 3);
			if (host_readb(ptr2) <= 2)
				continue;
			c += host_readb(ptr2) - 2;
		}
		if (c < 2) {
			infobox((Bit8u*)texts[84], 0);
			return;
		}
		/* decrement positive attribute */
		host_writeb(ptr1 + 1, host_readb(ptr1 + 1) - 1);
		host_writeb(ptr1, host_readb(ptr1) - 1);
		/* mark this attribute as decremented */
		attrib_changed[tmp2] = DEC;

		refresh_screen();

		tmp1 = 0;
		while (tmp1 != 2) {
			/* ask which negative attribute to increment */
			ds_writew(0x1327, 0xffb0);
			si = gui_radio((Bit8u*)texts[79], 7,
					texts[39], texts[40], texts[41],
					texts[42], texts[43], texts[44],
					texts[45]);
			ds_writew(0x1327, 0);

			if (si == -1)
				continue;

			si--;
			/* check if this attribute has been incremented */
			if (attrib_changed[si + 7] == INC) {
				infobox((Bit8u*)texts[82], 0);
				continue;
			}
			/* check if attribute can be decremented */
			ptr1 = MemBase + PhysMake(datseg, 0x1375 + si * 3);
			if (host_readb(ptr1) == 2) {
				infobox((Bit8u*)texts[81], 0);
				continue;
			}
			/* deccrement the negative attribute */
			tmp1++;
			host_writeb(ptr1 + 1, host_readb(ptr1 + 1) - 1);
			host_writeb(ptr1, host_readb(ptr1) - 1);
			attrib_changed[si + 7] = DEC;
			refresh_screen();
		}
	}
}

#undef INC
#undef DEC

void save_picbuf()
{
	PhysPt p;
	Bit16u x_1, x_2, x_3;
	Bit16u y_1, y_2, y_3;
	Bit16u w_1, w_2, w_3;
	Bit16u h_1, h_2, h_3;

	x_1 = 0;

	/* check on which page we are */
	switch (gen_page) {
		/* main page */
		case 0: {
			/* name field */
			x_1 = 176; y_1 = 12; w_1 = 94; h_1 = 8;

			/* positive attributes values */
			x_2 = 205; y_2 = 73; w_2 = 20; h_2 = 90;

			/* negative attribute values */
			x_3 = 273; y_3 = 73; w_3 = 20; h_3 = 90;
			break;
		}
		/* skill pages */
		case 1:	case 2: case 3: {
			/* remaining skill augmention tries */
			x_1 = 270; y_1 = 184; w_1 = 15; h_1 = 8;

			/* left row of skills */
			x_2 = 205; y_2 = 42; w_2 = 20; h_2 = 140;

			/* right row of skills */
			x_3 = 287; y_3 = 42; w_3 = 20; h_3 = 140;
			break;
		}
		/* ATPA page */
		case 4: {
			/* left row AT values */
			x_2 = 225; y_2 = 48; w_2 = 20; h_2 = 130;

			/* right row PA values */
			x_3 = 260; y_3 = 48; w_3 = 20; h_3 = 130;
			break;
		}
		/* spell pages */
		case 5: case 6:	case 7:
		case 8:	case 9:	case 10: {
			/* remaining spell augmention tries */
			x_1 = 215; y_1 = 184; w_1 = 15; h_1 = 8;

			/* left row of spells */
			x_2 = 141; y_2 = 42; w_2 = 20;	h_2 = 140;

			/* right row of spells */
			x_3 = 286; y_3 = 42; w_3 = 20;	h_3 = 140;
			break;
		}
	}

	if (x_1) {
		p = Real2Phys(ds_readd(0x47d3)) + y_1 * 320 + x_1;
		copy_to_screen(p, Real2Phys(ds_readd(0x479f)),
			w_1, h_1, 2);
	}

	p = Real2Phys(ds_readd(0x47d3)) + y_2 * 320 + x_2;
	copy_to_screen(p, Real2Phys(ds_readd(0x479b)), w_2, h_2, 2);

	p = Real2Phys(ds_readd(0x47d3)) + y_3 * 320 + x_3;
	copy_to_screen(p, Real2Phys(ds_readd(0x4797)), w_3, h_3, 2);
}

void restore_picbuf(PhysPt ptr)
{
	PhysPt p;
	Bit16u x_1, x_2, x_3;
	Bit16u y_1, y_2, y_3;
	Bit16u w_1, w_2, w_3;
	Bit16u h_1, h_2, h_3;

	x_1 = 0;

	/* check on which page we are */
	switch (gen_page) {
		/* main page */
		case 0: {
			/* name field */
			x_1 = 176; y_1 = 12; w_1 = 94; h_1 = 8;

			/* positive attributes values */
			x_2 = 205; y_2 = 73; w_2 = 20; h_2 = 90;

			/* negative attribute values */
			x_3 = 273; y_3 = 73; w_3 = 20; h_3 = 90;
			break;
		}
		/* skill pages */
		case 1:	case 2: case 3: {
			/* remaining skill augmention tries */
			x_1 = 270; y_1 = 184; w_1 = 15; h_1 = 8;

			/* left row of skills */
			x_2 = 205; y_2 = 42; w_2 = 20; h_2 = 140;

			/* right row of skills */
			x_3 = 287; y_3 = 42; w_3 = 20; h_3 = 140;
			break;
		}
		/* ATPA page */
		case 4: {
			/* left row AT values */
			x_2 = 225; y_2 = 48; w_2 = 20; h_2 = 130;

			/* right row PA values */
			x_3 = 260; y_3 = 48; w_3 = 20; h_3 = 130;
			break;
		}
		/* spell pages */
		case 5: case 6:	case 7:
		case 8:	case 9:	case 10: {
			/* remaining spell augmention tries */
			x_1 = 215; y_1 = 184; w_1 = 15; h_1 = 8;

			/* left row of spells */
			x_2 = 141; y_2 = 42; w_2 = 20;	h_2 = 140;

			/* right row of spells */
			x_3 = 286; y_3 = 42; w_3 = 20;	h_3 = 140;
			break;
		}
	}

	if (x_1) {
		p = ptr + y_1 * 320 + x_1;
		copy_to_screen(Real2Phys(ds_readd(0x479f)),
			p, w_1, h_1, 0);
	}

	p = ptr + y_2 * 320 + x_2;
	copy_to_screen(Real2Phys(ds_readd(0x479b)), p, w_2, h_2, 0);

	p = ptr + y_3 * 320 + x_3;
	copy_to_screen(Real2Phys(ds_readd(0x4797)), p, w_3, h_3, 0);
}

/**
 * print_attribs() -	print the attribute values
 *
 */
void print_attribs()
{
	Bit8u *p;
	char buf[10];
	Bit16u i;

	p = p_datseg + 0x1360;

	for (i = 0; i < 14; p += 3, i++) {
		/* don't print 0s */
		if (host_readb(p) == 0)
			continue;

		/* convert value to string with itoa() */
		sprintf(buf, "%d", (signed char)host_readb(p));

		/* print it */
		print_str(buf, ds_readw(i * 4 + 0x105f),
			ds_readw(i * 4 + 0x1061));
	}
}

/**
 * print_values() - print the values of the character
 *
 */
void print_values()
{
	char tmp[4];
	const Bit16u align_left = 222;
	const Bit16u align_right = 302;
	Bit16u width;
	Bit16s i, pos;


	switch (gen_page) {

		case 0: {
			restore_picbuf(Real2Phys(ds_readd(0x47c7)));

			/* print name */
			print_str((char*)MemBase + PhysMake(datseg, 0x132c),
				180, 12);

			/* print attributes */
			print_attribs();

			/* break if no typus */
			if (ds_readb(0x134d) == 0)
				break;

			/* print height */
			sprintf(gen_ptr2,
				texts[0x118 / 4], ds_readb(0x134f));

			print_str(gen_ptr2,
				205, 25);

			/* print weight */
			sprintf(gen_ptr2,
				texts[0x11c / 4], ds_readw(0x1350));

			print_str(gen_ptr2,
				205, 37);

			/* print god name */
			print_str(texts[0xe0 / 4 + ds_readb(0x1352)],
				205, 49);

			/* print money */
			make_valuta_str(gen_ptr2,
				ds_readd(0x1358));
			print_str(gen_ptr2,
				205, 61);

			/* print LE */
			/* originally it was itoa() */
			sprintf(tmp, "%d", ds_readw(0x138c));
			print_str(tmp, 172, 164);

			/* print AE */
			/* originally it was itoa() */
			sprintf(tmp, "%d", ds_readw(0x1390));
			print_str(tmp, 221, 164);

			/* print Endurance */
			/* originally it was itoa() */
			sprintf(tmp, "%d",
				ds_readw(0x138c) + (signed char)ds_readb(0x1373));
			print_str(tmp, 296, 164);

			/* print MR */
			/* originally it was itoa() */
			sprintf(tmp, "%d", (signed char)ds_readb(0x1392));
			print_str(tmp, 232, 184);

			break;
		}
		case 1: {
			/* SKILLS Page 1/3 */
			restore_picbuf(Real2Phys(ds_readd(0x47c7)));

			/* print fight skills */
			for (i = 0; i < 9; i++) {
				/* originally it was itoa() */
				sprintf(tmp, "%d",
					(signed char)ds_readb(0x1434 + i));
				width = get_str_width(tmp);

				if (i & 1)
					/* print in right column */
					print_str(tmp, align_right - width,
						(abs(i) / 2) * 12 + 42);
				else
					/* print in left column */
					print_str(tmp, align_left - width,
						(abs(i) / 2) * 12 + 42);
			}

			/* print body skills */
			for (i = 9; i < 19; i++) {
				pos = i - 9;
				/* originally it was itoa() */
				sprintf(tmp, "%d",
					(signed char)ds_readb(0x1434 + i));
				width = get_str_width(tmp);

				if (pos & 1)
					/* print in right column */
					print_str(tmp, align_right - width,
						(abs(pos) / 2) * 12 + 119);
				else
					/* print in left column */
					print_str(tmp, align_left - width,
						(abs(pos) / 2) * 12 + 119);
			}

			/* remaining attempts for skills */
			/* originally it was itoa() */
			sprintf(tmp, "%d", (signed char)ds_readb(0x1468));
			print_str(tmp, 271, 184);

			break;
		}
		case 2: {
			/* SKILLS Page 2/3 */
			restore_picbuf(Real2Phys(ds_readd(0x47c7)));

			/* print social skills */
			for (i = 19; i < 26; i++) {
				pos = i - 19;
				/* originally it was itoa() */
				sprintf(tmp, "%d",
					(signed char)ds_readb(0x1434 + i));
				width = get_str_width(tmp);

				if (pos & 1)
					/* print in right column */
					print_str(tmp, align_right - width,
						(abs(pos) / 2) * 12 + 42);
				else
					/* print in left column */
					print_str(tmp, align_left - width,
						(abs(pos) / 2) * 12 + 42);
			}

			/* print lore skills */
			for (i = 32; i < 41; i++) {
				pos = i - 32;
				/* originally it was itoa() */
				sprintf(tmp, "%d",
					(signed char)ds_readb(0x1434 + i));
				width = get_str_width(tmp);

				if (pos & 1)
					/* print in right column */
					print_str(tmp, align_right - width,
						(abs(pos) / 2) * 12 + 113);
				else
					/* print in left column */
					print_str(tmp, align_left - width,
						(abs(pos) / 2) * 12 + 113);
			}

			/* remaining attempts for skills */
			/* originally it was itoa() */
			sprintf(tmp, "%d", (signed char)ds_readb(0x1468));
			print_str(tmp, 271, 184);

			break;
		}
		case 3: {
			/* SKILLS Page 3/3 */
			restore_picbuf(Real2Phys(ds_readd(0x47c7)));

			/* print craftmansship skills */
			for (i = 41; i < 50; i++) {
				pos = i - 41;
				/* originally it was itoa() */
				sprintf(tmp, "%d",
					(signed char)ds_readb(0x1434 + i));
				width = get_str_width(tmp);

				if (pos & 1)
					/* print in right column */
					print_str(tmp, align_right - width,
						(abs(pos) / 2) * 12 + 42);
				else
					/* print in left column */
					print_str(tmp, align_left - width,
						(abs(pos) / 2) * 12 + 42);
			}

			/* print nature skills */
			for (i = 26; i < 32; i++) {
				pos = i - 26;
				/* originally it was itoa() */
				sprintf(tmp, "%d",
					(signed char)ds_readb(0x1434 + i));
				width = get_str_width(tmp);

				if (pos & 1)
					/* print in right column */
					print_str(tmp, align_right - width,
						(abs(pos) / 2) * 12 + 119);
				else
					/* print in left column */
					print_str(tmp, align_left - width,
						(abs(pos) / 2) * 12 + 119);
			}

			/* print intuition skills */
			for (i = 50; i < 52; i++) {
				pos = i - 50;
				/* originally it was itoa() */
				sprintf(tmp, "%d",
					(signed char)ds_readb(0x1434 + i));
				width = get_str_width(tmp);

				if (pos & 1)
					/* print in right column */
					print_str(tmp, align_right - width,
						(abs(pos) / 2) * 12 + 170);
				else
					/* print in left column */
					print_str(tmp, align_left - width,
						(abs(pos) / 2) * 12 + 170);
			}

			/* remaining attempts for skills */
			/* originally it was itoa() */
			sprintf(tmp, "%d", (signed char)ds_readb(0x1468));
			print_str(tmp, 271, 184);

			break;
		}
		case 4: {
			/* ATPA Page */
			restore_picbuf(Real2Phys(ds_readd(0x47c7)));

			/* Print base value  2x the same */
			sprintf(tmp, "%d", (signed char)ds_readb(0x1393));
			print_str(tmp, 231, 30);
			sprintf(tmp, "%d", (signed char)ds_readb(0x1393));
			print_str(tmp, 268, 30);

			for (i = 0; i < 7; i++) {
				/* print AT value */
				sprintf(tmp, "%d",
					(signed char)ds_readb(0x1394 + i));

				print_str(tmp, 237 - get_str_width(tmp),
					i * 12 + 48);

				/* print PA value */
				sprintf(tmp, "%d",
					(signed char)ds_readb(0x139b + i));

				print_str(tmp, 274 - get_str_width(tmp),
					i * 12 + 48);

				/* print skill value */
				sprintf(tmp, "%d",
					(signed char)ds_readb(0x1434 + i));

				print_str(tmp, 315 - get_str_width(tmp),
					i * 12 + 48);
			}

			/* calc range base value (KL+GE+KK)/4 */
			pos = (signed char)ds_readb(0x1363) +
				(signed char)ds_readb(0x136c) +
				(signed char)ds_readb(0x1372);
			pos /= 4;

			/* print missle weapon value */
			sprintf(tmp, "%d",
				(signed char)ds_readb(0x143b) + pos);

			print_str(tmp, 231, 144);

			/* print thrown weapon value */
			sprintf(tmp, "%d",
				(signed char)ds_readb(0x143c) + pos);
			print_str(tmp, 231, 156);

			break;
		}

		case 5: {
			/* Spells Page 1/6 */
			restore_picbuf(Real2Phys(ds_readd(0x47c7)));

			for (i = 1; i < 6; i++) {
				pos = i - 1;
				/* originally it was itoa() */
				sprintf(tmp, "%d",
					(signed char)ds_readb(0x1469 + i));
				width = get_str_width(tmp);

				if (pos & 1)
					/* print in right column */
					print_str(tmp, 302 - width,
						(abs(pos) / 2) * 12 + 42);
				else
					/* print in left column */
					print_str(tmp, 157 - width,
						(abs(pos) / 2) * 12 + 42);
			}
			for (i = 33; i < 38; i++) {
				pos = i - 33;
				/* originally it was itoa() */
				sprintf(tmp, "%d",
					(signed char)ds_readb(0x1469 + i));
				width = get_str_width(tmp);

				if (pos & 1)
					/* print in right column */
					print_str(tmp, 302 - width,
						(abs(pos) / 2) * 12 + 95);
				else
					/* print in left column */
					print_str(tmp, 157 - width,
						(abs(pos) / 2) * 12 + 95);
			}
			for (i = 6; i <= 11; i++) {
				pos = i - 6;
				/* originally it was itoa() */
				sprintf(tmp, "%d",
					(signed char)ds_readb(0x1469 + i));
				width = get_str_width(tmp);

				if (pos & 1)
					/* print in right column */
					print_str(tmp, 302 - width,
						(abs(pos) / 2) * 12 + 146);
				else
					/* print in left column */
					print_str(tmp, 157 - width,
						(abs(pos) / 2) * 12 + 146);
			}

			/* print spell attempts */
			sprintf(tmp, "%d", (signed char)ds_readb(0x14bf));
			print_str(tmp, 217, 184);

			break;
		}
		case 6: {
			/* Spells Page 2/6 */
			restore_picbuf(Real2Phys(ds_readd(0x47c7)));

			for (i = 12; i <= 17; i++) {
				pos = i - 12;
				/* originally it was itoa() */
				sprintf(tmp, "%d",
					(signed char)ds_readb(0x1469 + i));
				width = get_str_width(tmp);

				if (pos & 1)
					/* print in right column */
					print_str(tmp, 302 - width,
						(abs(pos) / 2) * 12 + 42);
				else
					/* print in left column */
					print_str(tmp, 157 - width,
						(abs(pos) / 2) * 12 + 42);
			}
			for (i = 18; i < 24; i++) {
				pos = i - 18;
				/* originally it was itoa() */
				sprintf(tmp, "%d",
					(signed char)ds_readb(0x1469 + i));
				width = get_str_width(tmp);

				if (pos & 1)
					/* print in right column */
					print_str(tmp, 302 - width,
						(abs(pos) / 2) * 12 + 95);
				else
					/* print in left column */
					print_str(tmp, 157 - width,
						(abs(pos) / 2) * 12 + 95);
			}
			for (i = 24; i < 27; i++) {
				pos = i - 24;
				/* originally it was itoa() */
				sprintf(tmp, "%d",
					(signed char)ds_readb(0x1469 + i));
				width = get_str_width(tmp);

				if (pos & 1)
					/* print in right column */
					print_str(tmp, 302 - width,
						(abs(pos) / 2) * 12 + 146);
				else
					/* print in left column */
					print_str(tmp, 157 - width,
						(abs(pos) / 2) * 12 + 146);
			}

			/* print spell attempts */
			sprintf(tmp, "%d", (signed char)ds_readb(0x14bf));
			print_str(tmp, 217, 184);

			break;
		}
		case 7: {
			/* Spells Page 3/6 */
			restore_picbuf(Real2Phys(ds_readd(0x47c7)));

			for (i = 27; i < 33; i++) {
				pos = i - 27;
				/* originally it was itoa() */
				sprintf(tmp, "%d",
					(signed char)ds_readb(0x1469 + i));
				width = get_str_width(tmp);

				if (pos & 1)
					/* print in right column */
					print_str(tmp, 302 - width,
						(abs(pos) / 2) * 12 + 42);
				else
					/* print in left column */
					print_str(tmp, 157 - width,
						(abs(pos) / 2) * 12 + 42);
			}

			for (i = 38; i < 45; i++) {
				pos = i - 38;
				/* originally it was itoa() */
				sprintf(tmp, "%d",
					(signed char)ds_readb(0x1469 + i));
				width = get_str_width(tmp);

				if (pos & 1)
					/* print in right column */
					print_str(tmp, 302 - width,
						(abs(pos) / 2) * 12 + 95);
				else
					/* print in left column */
					print_str(tmp, 157 - width,
						(abs(pos) / 2) * 12 + 95);
			}

			for (i = 45; i <= 46; i++) {
				pos = i - 45;
				/* originally it was itoa() */
				sprintf(tmp, "%d",
					(signed char)ds_readb(0x1469 + i));
				width = get_str_width(tmp);

				if (pos & 1)
					/* print in right column */
					print_str(tmp, 302 - width,
						(abs(pos) / 2) * 12 + 160);
				else
					/* print in left column */
					print_str(tmp, 157 - width,
						(abs(pos) / 2) * 12 + 160);
			}

			/* print spell attempts */
			sprintf(tmp, "%d", (signed char)ds_readb(0x14bf));
			print_str(tmp, 217, 184);

			break;
		}
		case 8: {
			/* Spells Page 4/6 */
			restore_picbuf(Real2Phys(ds_readd(0x47c7)));

			for (i = 47; i <= 48; i++) {
				pos = i - 47;
				/* originally it was itoa() */
				sprintf(tmp, "%d",
					(signed char)ds_readb(0x1469 + i));
				width = get_str_width(tmp);

				if (pos & 1)
					/* print in right column */
					print_str(tmp, 302 - width,
						(abs(pos) / 2) * 12 + 42);
				else
					/* print in left column */
					print_str(tmp, 157 - width,
						(abs(pos) / 2) * 12 + 42);
			}

			for (i = 49; i < 58; i++) {
				pos = i - 49;
				/* originally it was itoa() */
				sprintf(tmp, "%d",
					(signed char)ds_readb(0x1469 + i));
				width = get_str_width(tmp);

				if (pos & 1)
					/* print in right column */
					print_str(tmp, 302 - width,
						(abs(pos) / 2) * 12 + 71);
				else
					/* print in left column */
					print_str(tmp, 157 - width,
						(abs(pos) / 2) * 12 + 71);
			}

			for (i = 58; i < 60; i++) {
				pos = i - 58;
				/* originally it was itoa() */
				sprintf(tmp, "%d",
					(signed char)ds_readb(0x1469 + i));
				width = get_str_width(tmp);

				if (pos & 1)
					/* print in right column */
					print_str(tmp, 302 - width,
						(abs(pos) / 2) * 12 + 148);
				else
					/* print in left column */
					print_str(tmp, 157 - width,
						(abs(pos) / 2) * 12 + 148);
			}

			/* print spell attempts */
			sprintf(tmp, "%d", (signed char)ds_readb(0x14bf));
			print_str(tmp, 217, 184);

			break;
		}
		case 9: {
			/* Spells Page 5/6 */
			restore_picbuf(Real2Phys(ds_readd(0x47c7)));

			for (i = 60; i < 76; i++) {
				pos = i - 60;
				/* originally it was itoa() */
				sprintf(tmp, "%d",
					(signed char)ds_readb(0x1469 + i));
				width = get_str_width(tmp);

				if (pos & 1)
					/* print in right column */
					print_str(tmp, 302 - width,
						(abs(pos) / 2) * 12 + 42);
				else
					/* print in left column */
					print_str(tmp, 157 - width,
						(abs(pos) / 2) * 12 + 42);
			}

			/* print spell attempts */
			sprintf(tmp, "%d", (signed char)ds_readb(0x14bf));
			print_str(tmp, 217, 184);

			break;
		}
		case 10: {
			/* Spells Page 6/6 */
			restore_picbuf(Real2Phys(ds_readd(0x47c7)));

			for (i = 76; i < 86; i++) {
				pos = i - 76;
				/* originally it was itoa() */
				sprintf(tmp, "%d",
					(signed char)ds_readb(0x1469 + i));
				width = get_str_width(tmp);

				if (pos & 1)
					/* print in right column */
					print_str(tmp, 302 - width,
						(abs(pos) / 2) * 12 + 42);
				else
					/* print in left column */
					print_str(tmp, 157 - width,
						(abs(pos) / 2) * 12 + 42);
			}

			/* print spell attempts */
			sprintf(tmp, "%d", (signed char)ds_readb(0x14bf));
			print_str(tmp, 217, 184);

			break;
		}

	}
}

/**
 *	make_valuta_str	-	makes a valuta string
 *	@dst:	the destination
 *	@money:	the money in Heller
 *
 *	This funcion is buggy.
 */
void make_valuta_str(char *dst, unsigned int money)
{
	/* Orig-BUG: d can overflow  on D > 65536*/
	unsigned short d = 0;
	unsigned short s = 0;

	/*	These loops are not very performant.
		They take longer the more money you have.
		Here is a much better solution.
	*/

	/*
	d = money / 100;
	money -= d * 100;

	s = money / 10;
	money -= s * 10;
	*/
	while (money / 100) {
		d++;
		money -= 100;
	}

	while (money / 10) {
		s++;
		money -= 10;
	}

	sprintf(dst, texts[0x114 / 4], d, s, money);
}

void inc_skill(Bit16u skill, Bit16u max, Bit8u *msg)
{
	/* no more increments than the maximum */
	if (skill_incs[skill].incs >= max) {
		infobox(msg, 0);
		return;
	}
	/* we just have 3 tries to increment */
	if (skill_incs[skill].tries == 3) {
		infobox((Bit8u*)texts[151], 0);
		return;
	}

	/* decrement total number of skill inc tries */
	ds_writeb(0x1468, ds_readb(0x1468) - 1);
	if (random_interval_gen(2, 12) > (signed char)ds_readb(0x1434 + skill)) {
		/* print sucess message */
		infobox((Bit8u*)texts[152], 0);
		/* increment skill */
		ds_writeb(0x1434 + skill, ds_readb(0x1434 + skill) + 1);
		/* reset tries */
		skill_incs[skill].tries = 0;
		/* increment skill increments */
		skill_incs[skill].incs++;

		/* check if we have a melee attack skill */
		if (skill <= 6) {
			/* check if AT > PA */
			if ((signed char)ds_readb(0x1394 + skill) > (signed char)ds_readb(0x139b + skill)) {
				/* inc PA */
				ds_writeb(0x139b + skill, ds_readb(0x139b + skill) + 1);
			} else {
				/* inc AT */
				ds_writeb(0x1394 + skill, ds_readb(0x1394 + skill) + 1);
			}
		}
	} else {
		/* print failure message */
		infobox((Bit8u*)texts[153], 0);
		/* increment try */
		skill_incs[skill].tries++;
	}

	refresh_screen();
}

void select_skill()
{
	Bit16s skill, group;

	do {

		/* check skill attempts */
		if (ds_readb(0x1468) == 0) {
			infobox((Bit8u*)texts[94], 0);
			return;
		}

		ds_writew(0x1327, 0xffb0);

		switch (gen_page) {
			case 1: {
				group = gui_radio((Bit8u*)texts[93], 2,
						texts[86], texts[87]);
				if (group == -1)
					break;

				switch (group) {
					case 1: {
						/* Fight */
						skill = gui_radio((Bit8u*)texts[147],
								9,
								texts[95],
								texts[96],
								texts[97],
								texts[98],
								texts[99],
								texts[100],
								texts[101],
								texts[102],
								texts[103]);
						skill--;

						if (skill == -2)
							break;

						inc_skill(skill, 1,
							(Bit8u*)texts[148]);

						break;
					}
					case 2: {
						/* body */
						skill = gui_radio((Bit8u*)texts[147],
							10,
							texts[104], texts[105],
							texts[106], texts[107],
							texts[108], texts[109],
							texts[110], texts[112],
							texts[112], texts[113]);
						skill--;

						if (skill == -2)
							break;

						skill += 9;
						inc_skill(skill, 2,
							(Bit8u*)texts[149]);
						break;
					}
				}
				break;
			}
			case 2: {
				group = gui_radio((Bit8u*)texts[93], 2,
						texts[88], texts[89]);
				if (group == -1)
					break;
				switch (group) {
					case 1: {
						skill = gui_radio((Bit8u*)texts[147],
								7,
								texts[114],
								texts[115],
								texts[116],
								texts[117],
								texts[118],
								texts[119],
								texts[120]);
						skill--;

						if (skill == -2)
							break;

						skill += 19;
						inc_skill(skill, 2,
							(Bit8u*)texts[149]);
						break;
					}
					case 2: {
						skill = gui_radio((Bit8u*)texts[147],
								9,
								texts[127],
								texts[128],
								texts[129],
								texts[130],
								texts[131],
								texts[132],
								texts[133],
								texts[134],
								texts[135]);
						skill--;

						if (skill == -2)
							break;

						skill += 32;
						inc_skill(skill, 3,
							(Bit8u*)texts[150]);
						break;
					}
				}
				break;
			}
			case 3: {
				group = gui_radio((Bit8u*)texts[93], 3,
						texts[90], texts[91], texts[92]);
				if (group == -1)
					break;

				switch (group) {
					case 1: {
						skill = gui_radio((Bit8u*)texts[147],
								9,
								texts[136],
								texts[137],
								texts[138],
								texts[139],
								texts[140],
								texts[141],
								texts[142],
								texts[143],
								texts[144]);

						skill--;

						if (skill == -2)
							break;

						skill += 41;
						inc_skill(skill, 2,
							(Bit8u*)texts[149]);
						break;
					}
					case 2: {
						skill = gui_radio((Bit8u*)texts[147],
								6,
								texts[121],
								texts[122],
								texts[123],
								texts[124],
								texts[125],
								texts[126]);

						skill--;

						if (skill == -2)
							break;

						skill += 26;
						inc_skill(skill, 2,
							(Bit8u*)texts[149]);
						break;
					}
					case 3: {
						skill = gui_radio((Bit8u*)texts[147],
								2,
								texts[145],
								texts[146]);

						skill--;

						if (skill == -2)
							break;

						skill += 50;
						inc_skill(skill, 1,
							(Bit8u*)texts[148]);
						break;
					}
				}
				break;
			}
		}
		ds_writew(0x1327, 0);

	} while (group != -1);
}

void inc_spell(Bit16u spell)
{
	Bit16u max_incs = 1;

	/* if typus == warlock and the origin of the spell is warlock */
	if (ds_readb(0x134d) == 7 && ds_readb(0x158 + spell * 5) == 3)
		max_incs = 2;
	/* if typus == elf and the origin of the spell is elven */
	if (ds_readb(0x134d) >= 10 && ds_readb(0x158 + spell * 5) == 2)
		max_incs = 2;
	/* if typus == druid and the origin of the spell is druid */
	if (ds_readb(0x134d) == 8 && ds_readb(0x158 + spell * 5) == 0)
		max_incs = 2;
	/* if typus == mage */
	if (ds_readb(0x134d) == 9) {
		/* and the origin of the spell is mage */
		if (ds_readb(0x158 + spell * 5) == 1)
			max_incs = 2;

		Bit8u *array = Real2Host(ds_readd(0x387 + ds_readb(0x14c0) * 4));
		/* and is a school spell */
		if (is_in_word_array(spell, array))
			max_incs = 3;
	}

	/* all spell increments used for that spell */
	if (spell_incs[spell].incs >= max_incs) {
		infobox((Bit8u*)texts[0x404 / 4], 0);
		return;
	}
	/* all tries used for that spell */
	if (spell_incs[spell].tries == 3) {
		infobox((Bit8u*)texts[0x25c / 4], 0);
		return;
	}

	/* decrement spell attempts */
	ds_writeb(0x14bf, ds_readb(0x14bf) - 1);

	if (random_interval_gen(2, 12) > (signed char)ds_readb(0x1469 + spell)) {
		/* show success */
		infobox((Bit8u*)texts[0x260 / 4], 0);
		/* increment spell value */
		ds_writeb(0x1469 + spell, ds_readb(0x1469 + spell) + 1);
		/* reset tries */
		spell_incs[spell].tries = 0;
		/* increment incs */
		spell_incs[spell].incs++;
	} else {
		/* show failure */
		infobox((Bit8u*)texts[0x264 / 4], 0);
		/* increment tries */
		spell_incs[spell].tries++;
	}

	refresh_screen();
}

void select_spell()
{
	Bit16s group, spell;

	do {

		/* check if we have spell attempts */
		if (ds_readb(0x14bf) == 0) {
			infobox((Bit8u*)texts[94], 0);
			ds_writew(0x1327, 0);
			return;
		}

		ds_writew(0x1327, 0xffa6);

		switch (gen_page) {
			case 5: {
				group = gui_radio((Bit8u*)texts[155], 3,
						texts[157], texts[162],
						texts[158]);
				if (group == -1)
					break;

				switch (group) {
					case 1: {
						spell = gui_radio((Bit8u*)texts[156], 5,
								texts[169],
								texts[170],
								texts[171],
								texts[172],
								texts[173]);
						spell--;
						if (spell == -2)
							break;
						spell++;
						inc_spell(spell);
						break;
					}
					case 2: {
						spell = gui_radio((Bit8u*)texts[156], 5,
								texts[201],
								texts[202],
								texts[203],
								texts[204],
								texts[205]);
						spell--;
						if (spell == -2)
							break;
						spell += 33;
						inc_spell(spell);
						break;
					}
					case 3: {
						spell = gui_radio((Bit8u*)texts[156], 6,
								texts[174],
								texts[175],
								texts[176],
								texts[177],
								texts[178],
								texts[179]);
						spell--;
						if (spell == -2)
							break;
						spell += 6;
						inc_spell(spell);
						break;
					}
				}
				break;
			}
			case 6: {
				group = gui_radio((Bit8u*)texts[155], 3,
						texts[158], texts[159],
						texts[160]);
				if (group == -1)
					break;

				switch (group) {
					case 1: {
						spell = gui_radio((Bit8u*)texts[156], 6,
								texts[180],
								texts[181],
								texts[182],
								texts[183],
								texts[184],
								texts[185]);

						spell--;

						if (spell == -2)
							break;

						spell += 12;
						inc_spell(spell);
						break;
					}
					case 2: {
						spell = gui_radio((Bit8u*)texts[156], 6,
								texts[186],
								texts[187],
								texts[188],
								texts[189],
								texts[190],
								texts[191]);

						spell--;

						if (spell == -2)
							break;

						spell += 18;
						inc_spell(spell);
						break;
					}
					case 3: {
						spell = gui_radio((Bit8u*)texts[156], 3,
								texts[192],
								texts[193],
								texts[194]);

						spell--;

						if (spell == -2)
							break;

						spell += 24;
						inc_spell(spell);
						break;
					}
				}

				break;
			}
			case 7: {
				group = gui_radio((Bit8u*)texts[155], 3,
						texts[161], texts[163],
						texts[164]);
				if (group == -1)
					break;

				switch (group) {
					case 1: {
						spell = gui_radio((Bit8u*)texts[156], 6,
								texts[195],
								texts[196],
								texts[197],
								texts[198],
								texts[199],
								texts[200]);

						spell--;

						if (spell == -2)
							break;

						spell += 27;
						inc_spell(spell);
						break;
					}
					case 2: {
						spell = gui_radio((Bit8u*)texts[156], 7,
								texts[206],
								texts[207],
								texts[208],
								texts[209],
								texts[210],
								texts[211],
								texts[212]);

						spell--;

						if (spell == -2)
							break;

						spell += 38;
						inc_spell(spell);
						break;
					}
					case 3: {
						spell = gui_radio((Bit8u*)texts[156], 2,
								texts[213],
								texts[214]);

						spell--;

						if (spell == -2)
							break;

						spell += 45;
						inc_spell(spell);
						break;
					}
				}

				break;
			}
			case 8: {
				group = gui_radio((Bit8u*)texts[155], 3,
						texts[164], texts[86],
						texts[166]);
				if (group == -1)
					break;


				switch (group) {
					case 1: {
						spell = gui_radio((Bit8u*)texts[156], 2,
								texts[215],
								texts[216]);

						spell--;

						if (spell == -2)
							break;

						spell += 47;
						inc_spell(spell);
						break;
					}
					case 2: {
						spell = gui_radio((Bit8u*)texts[156], 9,
								texts[217],
								texts[218],
								texts[219],
								texts[220],
								texts[221],
								texts[222],
								texts[223],
								texts[224],
								texts[225]);

						spell--;

						if (spell == -2)
							break;

						spell += 49;
						inc_spell(spell);
						break;
					}
					case 3: {
						spell = gui_radio((Bit8u*)texts[156], 2,
								texts[226],
								texts[227]);

						spell--;

						if (spell == -2)
							break;

						spell += 58;
						inc_spell(spell);
						break;
					}
				}
				break;
				/* TODO */
			}
			case 9: {
				spell = gui_radio((Bit8u*)texts[156], 16,
						texts[228], texts[229],
						texts[230], texts[231],
						texts[232], texts[233],
						texts[234], texts[235],
						texts[236], texts[237],
						texts[238], texts[239],
						texts[240], texts[241],
						texts[242], texts[243]);
				spell--;

				if (spell == -2) {
					group = -1;
					break;
				}

				spell += 60;
				inc_spell(spell);
				break;
			}
			case 10: {
				spell = gui_radio((Bit8u*)texts[156], 10,
						texts[244], texts[245],
						texts[246], texts[247],
						texts[248], texts[249],
						texts[250], texts[251],
						texts[252], texts[253]);
				spell--;

				if (spell == -2) {
					group = -1;
					break;
				}

				spell += 76;
				inc_spell(spell);
				break;
			}
		}
		ds_writew(0x1327, 0);
	} while (group != -1);
}

void choose_atpa()
{
	Bit16u skill, increase;

	ds_writew(0x1327, 0xffb0);

	do {
		/* print menu with all melee weapons skills */
		skill = gui_radio((Bit8u*)texts[78], 7,
			texts[95], texts[96], texts[97], texts[98],
			texts[99], texts[100], texts[101]) - 1;

		if (skill != 0xfffe) {
			if ((signed char)ds_readb(0x1434 + skill) > 0) {
				increase = gui_radio((Bit8u*)texts[254], 2,
					texts[75], texts[76]);
				if (increase != 0xffff) {
					if (increase == 1) {
						/* increase attack */
						if ((signed char)ds_readb(0x1434 > 0) ||
							ds_readb(0x139b + skill) > ds_readb(0x1393)) {
							/* inc AT */
							ds_writeb(0x1394 + skill, ds_readb(0x1394 + skill) + 1);
							/* dec PA */
							ds_writeb(0x139b + skill, ds_readb(0x139b + skill) - 1);
							refresh_screen();
						} else {
							infobox((Bit8u*)texts[255], 0);
						}
					} else {
						if ((signed char)ds_readb(0x1434 > 0) ||
							ds_readb(0x1394 + skill) > ds_readb(0x1393)) {
							/* dec AT */
							ds_writeb(0x1394 + skill, ds_readb(0x1394 + skill) - 1);
							/* inc PA */
							ds_writeb(0x139b + skill, ds_readb(0x139b + skill) + 1);
							refresh_screen();
						} else {
							infobox((Bit8u*)texts[256], 0);
						}
					}
				}
			} else {
				infobox((Bit8u*)texts[260], 0);
			}
		}

	} while (skill != 0xfffe);

	ds_writew(0x1327, 0);
}

/**
 * choose_typus() - choose a typus manually
 *
 */
void choose_typus()
{
	Bit8u *ptr;
	char name_bak[20];
	Bit16u randval, i, typus_names;
	Bit16s choosen_typus;
	char sex_bak;

	if (!gui_bool((Bit8u*)texts[264]))
		return;

	if (ds_readb(0x134e))
		/* famale typus names */
		typus_names = 271;
	else
		/* male tyuse names */
		typus_names = 17;
	choosen_typus = gui_radio((Bit8u*)texts[30], 12,
				texts[typus_names + 1], texts[typus_names + 2],
				texts[typus_names + 3], texts[typus_names + 4],
				texts[typus_names + 5], texts[typus_names + 6],
				texts[typus_names + 7], texts[typus_names + 8],
				texts[typus_names + 9], texts[typus_names + 10],
				texts[typus_names + 11], texts[typus_names + 12]);

	if (choosen_typus == -1)
		return;

	/* clear the hero area with saved name and sex */
	strcpy(name_bak, (char*)MemBase + PhysMake(datseg, 0x132c));
	sex_bak = ds_readb(0x134e);
	memset(MemBase + PhysMake(datseg, 0x132c), 0, 0x6da);
	clear_hero();
	ds_writeb(0x134e, sex_bak);
	strcpy((char*)MemBase + PhysMake(datseg, 0x132c), name_bak);

	/* set typus */
	ds_writeb(0x134d, choosen_typus);

	/* roll out good attribute values */
	ptr = MemBase + PhysMake(datseg, 0x1360);
	for (i = 0; i < 7; i ++) {

		randval = random_interval_gen(8, 13);

		if (randval > 8)
			randval--;

		host_writeb(ptr + i * 3 + 1, randval);
		host_writeb(ptr + i * 3,  randval);
	}

	/* roll out bad attribute values */
	ptr = MemBase + PhysMake(datseg, 0x1375);
	for (i = 0; i < 7; i ++) {

		randval = random_interval_gen(2, 7);

		if (randval < 7)
			randval++;

		host_writeb(ptr + i * 3 + 1, randval);
		host_writeb(ptr + i * 3,  randval);
	}

	/* adjust typus attribute requirements */
	for (i = 0; i < 4; i++) {
		/* calc pointer to attribute */
		ptr = MemBase + PhysMake(datseg, 0x1360 +
			ds_readb(0x3cf + choosen_typus * 8 + i * 2) * 3);

		/* get the required value */
		randval = ds_readb(0x3cf + 1 + choosen_typus * 8 + i * 2);

		if (randval == 1)
			continue;

		if (randval & 0x80) {
			/* attribute upper bound */
			if ((signed short)host_readb(ptr) <= (randval & 0x7f))
				continue;

			host_writeb(ptr + 1, randval & 0x7f);
			host_writeb(ptr, randval & 0x7f);
		} else {
			/* attribute lower bound */
			if ((signed short)host_readb(ptr) >= randval)
				continue;

			host_writeb(ptr + 1, randval);
			host_writeb(ptr, randval);
		}
	}

	load_typus(ds_readb(0x134d));
	draw_mouse_ptr_wrapper();
	call_fill_rect_gen(Real2Phys(ds_readd(0x47cb)), 16, 8, 143, 191, 0);
	wait_for_vsync();
	set_palette(Real2Host(ds_readd(0x47b3)) + 0x5c02, 0, 32);
	call_mouse();

	if (ds_readb(0x134d) > 10)
		head_typus = 10;
	else
		head_typus = ds_readb(0x134d);

	if (ds_readb(0x134e)) {
		head_current = head_first_female[head_typus];
		head_first = head_first_female[head_typus];
		head_last = head_first_male[head_typus + 1] - 1;
	} else {
		head_current = head_first_male[head_typus];
		head_first = head_first_male[head_typus];
		head_last = head_first_female[head_typus] - 1;
	}
	fill_values();
	ds_writew(0x11fe, 1);
}

void pal_fade_out(Bit8u *dst, Bit8u *src, Bit16u n)
{
	Bit16u i;

	for (i = 0; i < n; i++) {
		if (host_readb(src + 3 * i) < host_readb(dst + 3 * i)) {
			host_writeb(dst + 3 * i, host_readb(dst + 3 * i) - 1);
		} else {
			if (host_readb(src + i * 3) > host_readb(dst + i * 3))
				host_writeb(dst + 3 * i,
					host_readb(dst + 3 * i) + 1);
		}

		if (host_readb(src + 3 * i + 1) < host_readb(dst + 3 * i + 1)) {
			host_writeb(dst + 3 * i + 1,
				host_readb(dst + 3 * i + 1) - 1);
		} else {
			if (host_readb(src + i * 3 + 1) > host_readb(dst + i * 3 + 1))
				host_writeb(dst + 3 * i + 1,
					host_readb(dst + 3 * i + 1) + 1);
		}

		if (host_readb(src + 3 * i + 2) < host_readb(dst + 3 * i + 2)) {
			host_writeb(dst + 3 * i + 2,
				host_readb(dst + 3 * i + 2) - 1);
		} else {
			if (host_readb(src + i * 3 + 2) > host_readb(dst + i * 3 + 2))
				host_writeb(dst + 3 * i + 2,
					host_readb(dst + 3 * i + 2) + 1);
		}
	}
}

void pal_fade_in(Bit8u *dst, Bit8u *src, Bit16u col, Bit16u n)
{
	Bit16u i;
	Bit16u si;

	si = 0x40 - col;

	for (i = 0; i < n; i++) {
		if (host_readb(src + 3 * i) >= si) {
			if (host_readb(src + i * 3) > host_readb(dst + i * 3))
				host_writeb(dst + 3 * i,
					host_readb(dst + 3 * i) + 1);
		}

		if (host_readb(src + 3 * i + 1) >= si) {
			if (host_readb(src + i * 3 + 1) > host_readb(dst + i * 3 + 1))
				host_writeb(dst + 3 * i + 1,
					host_readb(dst + 3 * i + 1) + 1);
		}

		if (host_readb(src + 3 * i + 2) >= si) {
			if (host_readb(src + i * 3 + 2) > host_readb(dst + i * 3 + 2))
				host_writeb(dst + 3 * i + 2,
					host_readb(dst + 3 * i + 2) + 1);
		}
	}
}

/**
 *	intro() - play the intro
 */
void intro()
{
	char nvf[19];
	Bit8u *n =  (Bit8u*)nvf;

	FILE *fd;
	Bit8u *pal_dst, *pal_src;
	Bit16u flen;
	Bit16s i;
	Bit8u cnt1;
	Bit8s cnt2;

	ds_writeb(0x40b8, 1);

	/* load ATTIC */
	fd = fd_open_datfile(18);
	if (fd == NULL) {
		D1_ERR("Failed to open\n");
		exit(0);
	}
	fd_read_datfile(fd, Real2Host(ds_readd(0x4771)), 20000);
	fclose(fd);

	/* set src */
	host_writed(n + 4, ds_readd(0x4771));
	/* set type */
	host_writew(n + 10, 0);
	/* place somewhere on unused DOS stack */
	host_writed(n + 11, RealMake(SegValue(ss), reg_sp - 8));
	host_writed(n + 15, RealMake(SegValue(ss), reg_sp - 10));

	for (i = 7; i >= 0; i--) {
		/* set dst */
		host_writed(n + 0, ds_readd(0x47d3) + i * 960 + 9600);
		/* set nr */
		host_writew(n + 8, i + 1);
		process_nvf(n);

	}
	/* set dst */
	host_writed(n + 0, ds_readd(0x47d3));
	/* set nr */
	host_writew(n + 8, 0);
	process_nvf(n);

	wait_for_vsync();

	set_palette(MemBase + PhysMake(datseg, 0x1cb9), 0, 16);

	cnt1 = 1;
	cnt2 = 99;

	/* glowing at the bottom */
	for (i = 0; i < 4; i++) {
		ds_writew(0x40c5, 112);
		ds_writew(0x40c7, 140);
		ds_writew(0x40c9, 207);
		ds_writew(0x40cb, 149);
		ds_writed(0x40cd, ds_readd(0x47d3) + i * 960 + 9600);
		do_draw_pic(0);
		vsync_or_key(20);
	}

	/* elevate the attic logo */
	i = 4;
	ds_writew(0x459f, 0);
	while (cnt1 <= 100 && ds_readw(0x459f) == 0) {
		ds_writew(0x40c5, 0);
		ds_writew(0x40c7, cnt2 + 60);
		ds_writew(0x40c9, 95);
		ds_writew(0x40cb, cnt1 + cnt2 + 59);
		ds_writed(0x40c1, ds_readd(0x47d3));
		ds_writed(0x40cd, ds_readd(0x47d3));
		do_draw_pic(0);

		if (cnt1 != 100) {

			ds_writed(0x40cd, ds_readd(0x47d3) + i * 960 + 9600);
			if (cnt1 % 4 == 1)
				i++;

			if (i == 8)
				i = 4;

			ds_writew(0x40c5, 0);
			ds_writew(0x40c7, 150);
			ds_writew(0x40c9, 95);
			ds_writew(0x40cb, 159);
			ds_writed(0x40c1, ds_readd(0x47d3));
			do_draw_pic(2);
		}

		ds_writew(0x40c5, 112);
		ds_writew(0x40c7, 50);
		ds_writew(0x40c9, 207);
		ds_writew(0x40cb, 149);
		ds_writed(0x40cd, ds_readd(0x47d3));

		unkn1 = 0;
		unkn2 = 60;
		unkn3 = 95;
		unkn4 = 159;
		ds_writed(0x40c1, ds_readd(0x47cb));
		do_draw_pic(3);
		cnt1++;
		cnt2--;
		if (cnt1 < 37)
			vsync_or_key(2);
		else
			vsync_or_key(1);
	}

	if (ds_readw(0x459f) == 0)
		vsync_or_key(200);

	/* load FANPRO.NVF */
	fd = fd_open_datfile(34);
	if (fd == NULL) {
		D1_ERR("Failed to open\n");
		exit(0);
	}
	flen = fd_read_datfile(fd, Real2Host(ds_readd(0x4771)), 20000);
	fclose(fd);

	/* set dst */
	host_writed(n + 0, ds_readd(0x47d3));
	/* set src */
	host_writed(n + 4, ds_readd(0x4771));
	/* set nr */
	host_writew(n + 8, 0);
	/* set type */
	host_writew(n + 10, 0);
	/* place somewhere on unused DOS stack */
	host_writed(n + 11, RealMake(SegValue(ss), reg_sp - 8));
	host_writed(n + 15, RealMake(SegValue(ss), reg_sp - 10));

	process_nvf(n);

	/* clear screen */
	call_fill_rect_gen(Real2Phys(ds_readd(0x47cb)), 0, 0, 319, 199, 0);
	wait_for_vsync();

	/* set palette of FANPRO.NVF */
	set_palette(Real2Host(ds_readd(0x4771)) + flen - 32*3, 0, 32);

	/* draw the picture */
	ds_writew(0x40c5, 60);
	ds_writew(0x40c7, 50);
	ds_writew(0x40c9, 259);
	ds_writew(0x40cb, 149);
	ds_writed(0x40cd, ds_readd(0x47d3));
	do_draw_pic(0);
	vsync_or_key(200);

	/* load DSALOGO.DAT */
	fd = fd_open_datfile(16);
	if (fd == NULL) {
		D1_ERR("Failed to open\n");
		exit(0);
	}
	fd_read_datfile(fd, Real2Host(ds_readd(0x4771)), 20000);
	fclose(fd);

	/* set dst */
	host_writed(n + 0, ds_readd(0x47d3));
	/* set src */
	host_writed(n + 4, ds_readd(0x4771));
	/* set nr */
	host_writew(n + 8, 0);
	/* set type */
	host_writew(n + 10, 0);
	/* place somewhere on unused DOS stack */
	host_writed(n + 11, RealMake(SegValue(ss), reg_sp - 8));
	host_writed(n + 15, RealMake(SegValue(ss), reg_sp - 10));

	process_nvf(n);

	/* clear screen */
	call_fill_rect_gen(Real2Phys(ds_readd(0x47cb)), 0, 0, 319, 199, 0);
	wait_for_vsync();


	set_palette(MemBase + PhysMake(datseg, 0x113b), 0, 32);

	/* draw DSALOGO.DAT */
	ds_writew(0x40c5, 0);
	ds_writew(0x40c7, 0);
	ds_writew(0x40c9, 319);
	ds_writew(0x40cb, 99);
	ds_writed(0x40cd, ds_readd(0x47d3));
	do_draw_pic(0);

	/* load GENTIT.DAT */
	fd = fd_open_datfile(17);
	if (fd == NULL) {
		D1_ERR("Failed to open\n");
		exit(0);
	}
	fd_read_datfile(fd, Real2Host(ds_readd(0x4771)), 20000);
	fclose(fd);

	/* set dst */
	host_writed(n + 0, ds_readd(0x47d3));
	/* set src */
	host_writed(n + 4, ds_readd(0x4771));
	/* set nr */
	host_writew(n + 8, 0);
	/* set type */
	host_writew(n + 10, 0);
	/* place somewhere on unused DOS stack */
	host_writed(n + 11, RealMake(SegValue(ss), reg_sp - 8));
	host_writed(n + 15, RealMake(SegValue(ss), reg_sp - 10));

	process_nvf(n);

	/* draw DSALOGO.DAT */
	ds_writew(0x40c5, 10);
	ds_writew(0x40c7, 110);
	ds_writew(0x40c9, 329);
	ds_writew(0x40cb, 159);
	ds_writed(0x40cd, ds_readd(0x47d3));
	do_draw_pic(0);

	memcpy(Real2Host(ds_readd(0x47d3)) + 500,
		MemBase + PhysMake(datseg, 0x1ce9), 96);

	pal_src = Real2Host(ds_readd(0x47d3)) + 500;
	pal_dst = Real2Host(ds_readd(0x47d3));
	memset(pal_dst, 0, 96);

	for (i = 0; i < 64; i++) {
		pal_fade_in(pal_dst, pal_src, i, 32);
		wait_for_vsync();
		set_palette(pal_dst, 0, 32);
	}

	set_vals(0xff, 0);
	print_str(version, 290, 190);
	vsync_or_key(400);

	memcpy(Real2Host(ds_readd(0x47d3)),
		MemBase + PhysMake(datseg, 0x1ce9), 96);

	pal_src = Real2Host(ds_readd(0x47d3)) + 500;
	pal_dst = Real2Host(ds_readd(0x47d3));
	memset(pal_src, 0, 96);

	for (i = 0; i < 64; i++) {
		pal_fade_out(pal_dst, pal_src, 32);
		wait_for_vsync();
		set_palette(pal_dst, 0, 32);
	}

	/* clear screen */
	call_fill_rect_gen(Real2Phys(ds_readd(0x47cb)), 0, 0, 319, 199, 0);

	ds_writeb(0x40b8, 0);
	return;
}

void set_mouse_isr()
{
	/* save adress of the old ISR */
	ds_writed(0x247c, RealGetVec(0x1c));
	/* set a the new one */
	RealSetVec(0x1c, RealMake(relocation + 0x3c6, 0x72b3));
}

void restore_mouse_isr()
{
	RealSetVec(0x1c, ds_readd(0x247c));
}

int main_gen(int argc, Bit8u *argv)
{
	Bit16u sound_off = 0;

	if (argc > 1)
		ds_writew(0x3f60, 1);

	if (argc > 2)
		ds_writew(0x3f3e, mem_readb(Real2Phys(host_readd(argv + 8))));

	if ((argc > 3) && mem_readb(Real2Phys(host_readd(argv + 0xc)) == '0')) {
		ds_writew(0x1a07, 1);
		sound_off = 1;
	};

	ds_writeb(0x40b8, 1);

	if (sound_off == 0)
		init_music(13000);

	ds_writew(0x47d7, ret_zero1());

	set_mouse_isr();

	bc_randomize();

	save_display_stat(RealMake(datseg, 0x47db));

	alloc_buffers();
	alloc_buffers_emu();

	ds_writew(0x47d9, 2);

	init_video();

	ds_writew(0x4591, 2);

	mouse_enable();

	if (ds_readw(0x4591) == 0)
		ds_writew(0x124a, 0xfffe);

	init_stuff();

	read_common_files();

	if (sound_off == 0)
		read_soundcfg();

	start_music(33);

	if (ds_readw(0x3f60) == 0) {
		intro();
		read_common_files();
	}

	init_colors();
	wait_for_keypress();
	call_mouse();
	do_gen();
	stop_music();
	draw_mouse_ptr_wrapper();
	mouse_disable();
	restore_mouse_isr();

	if (ds_readw(0x3f60) != 0) {
		call_fill_rect_gen(Real2Phys(ds_readd(0x47cb)), 0, 0, 319, 199, 0);
	} else {
		exit_video();
		bc_clrscr();
	}

	BE_cleanup();

	/* to make MSVC happy */
	return 0;
}

void alloc_buffers_emu()
{
	CALLBACK_RunRealFar(reloc_gen + 0x3c6, 0x7446);
}

void alloc_buffers()
{
	ds_writed(0x47cb, RealMake(0xa000, 0x0));
	ds_writed(0x47c7, RealMake(0xa000, 0x0));

	gen_ptr1 = (Bit8u*)gen_alloc(64108);
	gen_ptr1_dis = gen_ptr1 + 8;

	page_buffer = (Bit8u*)gen_alloc(50000);

	gen_ptr2 = (char*)gen_alloc(1524);
	gen_ptr3 = gen_ptr2 + 1500;

	gen_ptr4 = (Bit8u*)gen_alloc(200);

	buffer_text = (Bit8u*)gen_alloc(6000);

	buffer_font6 = (Bit8u*)gen_alloc(592);

	load_font_and_text();

	buffer_heads_dat = (Bit8u*)gen_alloc(39000);

	buffer_popup_nvf = (Bit8u*)gen_alloc(1673);
	buffer_popup_dis = buffer_popup_nvf + 8;

	buffer_sex_dat = (Bit8u*)gen_alloc(812);

	gen_ptr5 = (Bit8u*)gen_alloc(23660);

	buffer_dmenge_dat = (Bit8u*)gen_alloc(23660);

	picbuf1 = (Bit8u*)gen_alloc(800);

	picbuf2 = (Bit8u*)gen_alloc(2800);

	picbuf3 = (Bit8u*)gen_alloc(2800);

	gen_ptr6 = (Bit8u*)gen_alloc(1100);
	gen_ptr6_dis = gen_ptr6 + 8;

	if (gen_ptr6_dis == NULL)
		printf("\nMEMORY MALLOCATION ERROR!");
}

void init_colors()
{
	set_palette((Bit8u*)&col_black, 0x00, 1);
	set_palette((Bit8u*)&col_white, 0xff, 1);
	set_palette((Bit8u*)col_popup, 0xd8, 8);
	set_palette((Bit8u*)col_misc, 0xc8, 3);
	set_palette(MemBase + PhysMake(datseg, 0x119b), 0x40, 0x20);
	set_palette(MemBase + PhysMake(datseg, 0x1d70), 0x20, 0x20);
	set_vals(0xff, 0x0);
}

void init_stuff()
{
	init_colors();

	/* these 3 variables are bogus */
	fg_color[1] = 0xc8;
	fg_color[2] = 0xc9;
	fg_color[3] = 0xca;

	/* number of menu tiles width */
	menu_tiles = 3;

	ds_writed(0x40c1, ds_readd(0x47cb));
}

void *gen_alloc(unsigned long size)
{
	D1_INFO("HOST gen_alloc(%d);\n", size);
	return calloc(size, sizeof(char));
}

RealPt emu_gen_alloc(Bit32u nelem)
{
	/* prepare stack */
	CPU_Push32(1);
	CPU_Push32(nelem);

	/* call Borland C-Lib calloc() */
	CALLBACK_RunRealFar(reloc_gen + 0x0, 0x16c7);

	/* cleanup stack */
	CPU_Pop32();
	CPU_Pop32();

	/* return the pointer */
	return RealMake(reg_dx, reg_ax);
}

}
