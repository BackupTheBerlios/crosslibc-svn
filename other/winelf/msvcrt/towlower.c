#include "msvcrt.h"
void _elfimplib_towlower() asm("towlower");
void *_imp__towlower = NULL;
__attribute__((constructor)) void _elfimplib_init_towlower() {
load_dll_msvcrt();
_imp__towlower = (void *) _elf_GetProcAddress(_dll_msvcrt, "towlower");
}
void _elfimplib_towlower() {
asm("leave\njmp *%0" : : "r"(_imp__towlower));
}

