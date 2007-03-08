#include "msvcrt.h"
void _elfimplib_fmod() asm("fmod");
void *_imp__fmod = NULL;
__attribute__((constructor)) void _elfimplib_init_fmod() {
load_dll_msvcrt();
_imp__fmod = (void *) _elf_GetProcAddress(_dll_msvcrt, "fmod");
}
void _elfimplib_fmod() {
asm("leave\njmp *%0" : : "r"(_imp__fmod));
}

