#include "msvcrt.h"
void _elfimplib__isnan() asm("isnan");
void *_imp___isnan = NULL;
__attribute__((constructor)) void _elfimplib_init__isnan() {
load_dll_msvcrt();
_imp___isnan = (void *) _elf_GetProcAddress(_dll_msvcrt, "_isnan");
}
void _elfimplib__isnan() {
asm("leave\njmp *%0" : : "r"(_imp___isnan));
}

void _elfimplibmang__isnan() asm("_isnan");
void _elfimplibmang__isnan() {
asm("leave\njmp *%0" : : "r"(_imp___isnan));
}

