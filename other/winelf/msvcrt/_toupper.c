#include "msvcrt.h"
void _elfimplib__toupper() asm("toupper");
void *_imp___toupper = NULL;
__attribute__((constructor)) void _elfimplib_init__toupper() {
load_dll_msvcrt();
_imp___toupper = (void *) _elf_GetProcAddress(_dll_msvcrt, "_toupper");
}
void _elfimplib__toupper() {
asm("leave\njmp *%0" : : "r"(_imp___toupper));
}

void _elfimplibmang__toupper() asm("_toupper");
void _elfimplibmang__toupper() {
asm("leave\njmp *%0" : : "r"(_imp___toupper));
}

