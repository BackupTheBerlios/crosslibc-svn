#include "msvcrt.h"
void _elfimplib_towupper() asm("towupper");
void *_imp__towupper = NULL;
__attribute__((constructor)) void _elfimplib_init_towupper() {
load_dll_msvcrt();
_imp__towupper = (void *) _elf_GetProcAddress(_dll_msvcrt, "towupper");
}
void _elfimplib_towupper() {
asm("leave\njmp *%0" : : "r"(_imp__towupper));
}

