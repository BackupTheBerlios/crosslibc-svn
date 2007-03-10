#include "msvcrt.h"
void _elfimplib__ismbbalnum() asm("ismbbalnum");
void *_imp___ismbbalnum = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbbalnum() {
load_dll_msvcrt();
_imp___ismbbalnum = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbbalnum");
}
void _elfimplib__ismbbalnum() {
asm("leave\njmp *%0" : : "r"(_imp___ismbbalnum));
}

void _elfimplibmang__ismbbalnum() asm("_ismbbalnum");
void _elfimplibmang__ismbbalnum() {
asm("leave\njmp *%0" : : "r"(_imp___ismbbalnum));
}

