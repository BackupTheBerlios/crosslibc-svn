#include "msvcrt.h"
void _elfimplib__chgsign() asm("chgsign");
void *_imp___chgsign = NULL;
__attribute__((constructor)) void _elfimplib_init__chgsign() {
load_dll_msvcrt();
_imp___chgsign = (void *) _elf_GetProcAddress(_dll_msvcrt, "_chgsign");
}
void _elfimplib__chgsign() {
asm("leave\njmp *%0" : : "r"(_imp___chgsign));
}

void _elfimplibmang__chgsign() asm("_chgsign");
void _elfimplibmang__chgsign() {
asm("leave\njmp *%0" : : "r"(_imp___chgsign));
}

