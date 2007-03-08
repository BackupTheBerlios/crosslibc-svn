#include "msvcrt.h"
void _elfimplib__winminor() asm("winminor");
void *_imp___winminor = NULL;
__attribute__((constructor)) void _elfimplib_init__winminor() {
load_dll_msvcrt();
_imp___winminor = (void *) _elf_GetProcAddress(_dll_msvcrt, "_winminor");
}
void _elfimplib__winminor() {
asm("leave\njmp *%0" : : "r"(_imp___winminor));
}

