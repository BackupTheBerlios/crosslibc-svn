#include "msvcrt.h"
void _elfimplib__ismbcspace() asm("ismbcspace");
void *_imp___ismbcspace = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbcspace() {
load_dll_msvcrt();
_imp___ismbcspace = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbcspace");
}
void _elfimplib__ismbcspace() {
asm("leave\njmp *%0" : : "r"(_imp___ismbcspace));
}

void _elfimplibmang__ismbcspace() asm("_ismbcspace");
void _elfimplibmang__ismbcspace() {
asm("leave\njmp *%0" : : "r"(_imp___ismbcspace));
}

