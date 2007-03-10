#include "msvcrt.h"
void _elfimplib__ismbbalpha() asm("ismbbalpha");
void *_imp___ismbbalpha = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbbalpha() {
load_dll_msvcrt();
_imp___ismbbalpha = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbbalpha");
}
void _elfimplib__ismbbalpha() {
asm("leave\njmp *%0" : : "r"(_imp___ismbbalpha));
}

void _elfimplibmang__ismbbalpha() asm("_ismbbalpha");
void _elfimplibmang__ismbbalpha() {
asm("leave\njmp *%0" : : "r"(_imp___ismbbalpha));
}

