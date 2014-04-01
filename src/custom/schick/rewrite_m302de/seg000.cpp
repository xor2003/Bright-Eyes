#include "dosbox.h"
#include "regs.h"
#include "callback.h"
#include "dos_inc.h"
#include "paging.h"

#include "schick.h"

#include "seg000.h"

namespace M302de {

RealPt F_PADD(RealPt p, Bit32s off)
{
	reg_dx = RealSeg(p);
	reg_ax = RealOff(p);
	reg_cx = off >> 16;
	reg_bx = off & 0xffff;
	CALLBACK_RunRealFar(reloc_game, 0x9b0);
	return RealMake(reg_dx, reg_ax);
}

void bc_exit(Bit16s status)
{
	CPU_Push16(status);
	CALLBACK_RunRealFar(reloc_game, 0x6df);
	CPU_Pop16();
}

RealPt bc__dos_getvect(Bit8u __interruptno)
{
	CPU_Push16(__interruptno);
	CALLBACK_RunRealFar(reloc_game + 0, 0x816);
	CPU_Pop16();
	return RealMake(reg_dx, reg_ax);
}

void bc__dos_setvect(Bit8u __interruptno, RealPt handler)
{
	CPU_Push32(handler);
	CPU_Push16(__interruptno);
	CALLBACK_RunRealFar(reloc_game + 0, 0x825);
	CPU_Pop16();
	CPU_Pop32();
}

Bit32s bc_lseek(Bit16u handle, Bit32u offset, Bit16s whence) {

	ds_writew(0xb788 + handle * 2, ds_readw(0xb788 + handle * 2) & 0xfdff);

	if (!DOS_SeekFile(handle, &offset, whence))
		return -1;

	return offset;

}

Bit16s bc__read(Bit16u handle, Bit8u *buf, Bit16u count) {

	if ((ds_readw(0xb788 + handle * 2) & 2))
		return -1;

	if (!DOS_ReadFile(handle, buf, &count))
		return -1;

	if (count == 5952)
		schick_status_update(buf, count);

	return (Bit16s)count;
}

signed short bc_unlink(RealPt fname)
{
	CPU_Push32(fname);
	CALLBACK_RunRealFar(reloc_game + 0, 0x11a7);
	CPU_Pop32();
	return reg_ax;
}

signed short bc_bioskey(signed short cmd)
{
	CPU_Push16(cmd);
	CALLBACK_RunRealFar(reloc_game + 0, 0x176d);
	CPU_Pop16();
	return reg_ax;
}

void bc_clrscr(void)
{
	CALLBACK_RunRealFar(reloc_game + 0, 0x1792);
}

void bc_farfree(RealPt ptr)
{
	CPU_Push32(ptr);
	CALLBACK_RunRealFar(reloc_game + 0, 0x1e55);
	CPU_Pop32();
}

RealPt bc_farcalloc(Bit32u nmemb, Bit32u size)
{
	CPU_Push32(size);
	CPU_Push32(nmemb);
	CALLBACK_RunRealFar(reloc_game + 0, 0x2287);
	CPU_Pop32();
	CPU_Pop32();

	return RealMake(reg_dx, reg_ax);
}

signed short bc_findfirst_dosbox(RealPt path, RealPt __ffblk, signed short __attrib)
{
	CPU_Push16(__attrib);
	CPU_Push32(__ffblk);
	CPU_Push32(path);
	CALLBACK_RunRealFar(reloc_game + 0, 0x3040);
	CPU_Pop32();
	CPU_Pop32();
	CPU_Pop16();
	return reg_ax;
}

signed short bc_findfirst(RealPt path, struct ffblk *__ffblk, signed short __attrib)
{
	Bit16u reg_esp_bak = reg_esp;
	reg_esp -= 0x50;

	Bit16s retval = bc_findfirst_dosbox(path, RealMake(SegValue(ss), reg_esp), __attrib);
	memcpy(__ffblk, Real2Host(RealMake(SegValue(ss), reg_esp)), 43);

	reg_esp = reg_esp_bak;
	return retval;
}

signed short bc_findnext_dosbox(RealPt __ffblk)
{
	CPU_Push32(__ffblk);
	CALLBACK_RunRealFar(reloc_game + 0, 0x3073);
	CPU_Pop32();
	return reg_ax;
}

signed short bc_findnext(struct ffblk *__ffblk)
{
	Bit16u reg_esp_bak = reg_esp;
	reg_esp -= 0x50;

	Bit16s retval = bc_findnext_dosbox(RealMake(SegValue(ss), reg_esp));
	memcpy(__ffblk, Real2Host(RealMake(SegValue(ss), reg_esp)), 43);

	reg_esp = reg_esp_bak;
	return retval;
}

Bit16s bc_close(Bit16u handle) {

	if (handle >= ds_readw(0xb786))
		return -1;

	ds_writew(0xb788 + handle * 2, 0);

	return bc__close(handle);

}

Bit16s bc__close(Bit16u handle) {

	if (!DOS_CloseFile(handle))
		return -1;

	ds_writew(0xb788 + handle * 2, 0);

	return 0;
}

RealPt bc_memmove(RealPt dst, RealPt src, Bit16u len)
{
	PhysPt s, d;

	s = Real2Phys(src);
	d = Real2Phys(dst);

	while (len--) {
		mem_writeb_inline(d++, mem_readb_inline(s++));
	}

	return dst;
}

Bit16s bc__creat(RealPt name, Bit16u attrib)
{
	CPU_Push16(attrib);
	CPU_Push32(name);
	CALLBACK_RunRealFar(reloc_game + 0, 0x2f25);
	CPU_Pop32();
	CPU_Pop16();

	return reg_ax;
}

Bit16s bc__open(RealPt fname, Bit16u attrib)
{
	CPU_Push16(attrib);
	CPU_Push32(fname);
	CALLBACK_RunRealFar(reloc_game + 0, 0x34c7);
	CPU_Pop32();
	CPU_Pop16();

	return reg_ax;
}

Bit32s bc__write(Bit16u fd, RealPt buf, Bit16u len)
{
	CPU_Push16(len);
	CPU_Push32(buf);
	CPU_Push16(fd);
	CALLBACK_RunRealFar(reloc_game + 0, 0x4a85);
	CPU_Pop16();
	CPU_Pop32();
	CPU_Pop16();

	return reg_ax;
}

}
