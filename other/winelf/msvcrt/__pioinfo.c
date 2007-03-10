#include "msvcrt.h"
void _elfimplib___pioinfo() asm("_pioinfo");
void *_imp____pioinfo = NULL;
__attribute__((constructor)) void _elfimplib_init___pioinfo() {
load_dll_msvcrt();
_imp____pioinfo = (void *) _elf_GetProcAddress(_dll_msvcrt, "__pioinfo");
}
void _elfimplib___pioinfo() {
asm("leave\njmp *%0" : : "r"(_imp____pioinfo));
}

void _elfimplibmang___pioinfo() asm("__pioinfo");
void _elfimplibmang___pioinfo() {
asm("leave\njmp *%0" : : "r"(_imp____pioinfo));
}

