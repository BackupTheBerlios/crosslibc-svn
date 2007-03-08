#include "msvcrt.h"
void _elfimplib__chsize() asm("chsize");
void *_imp___chsize = NULL;
__attribute__((constructor)) void _elfimplib_init__chsize() {
load_dll_msvcrt();
_imp___chsize = (void *) _elf_GetProcAddress(_dll_msvcrt, "_chsize");
}
void _elfimplib__chsize() {
asm("leave\njmp *%0" : : "r"(_imp___chsize));
}

