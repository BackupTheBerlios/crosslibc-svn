#include "msvcrt.h"
void _elfimplib___badioinfo() asm("_badioinfo");
void *_imp____badioinfo = NULL;
__attribute__((constructor)) void _elfimplib_init___badioinfo() {
load_dll_msvcrt();
_imp____badioinfo = (void *) _elf_GetProcAddress(_dll_msvcrt, "__badioinfo");
}
void _elfimplib___badioinfo() {
asm("leave\njmp *%0" : : "r"(_imp____badioinfo));
}

void _elfimplibmang___badioinfo() asm("__badioinfo");
void _elfimplibmang___badioinfo() {
asm("leave\njmp *%0" : : "r"(_imp____badioinfo));
}

