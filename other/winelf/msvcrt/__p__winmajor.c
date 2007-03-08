#include "msvcrt.h"
void _elfimplib___p__winmajor() asm("_p__winmajor");
void *_imp____p__winmajor = NULL;
__attribute__((constructor)) void _elfimplib_init___p__winmajor() {
load_dll_msvcrt();
_imp____p__winmajor = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__winmajor");
}
void _elfimplib___p__winmajor() {
asm("leave\njmp *%0" : : "r"(_imp____p__winmajor));
}

