AM_CPPFLAGS = -I$(top_srcdir)/include -Wall -pedantic -DDOSBOX -Og -mno-ms-bitfields -Wno-multichar -Wno-address-of-packed-member -I/include/ncurses  -I. -L.  -ggdb3 -lSDL -std=c++11 -DDEBUG=3

SUBDIRS = src # schick schweif

noinst_LIBRARIES = libcustom.a
libcustom_a_SOURCES = custom.cpp custom_hooks.h asm.cpp asm.h asm_16.h asm_32.h
