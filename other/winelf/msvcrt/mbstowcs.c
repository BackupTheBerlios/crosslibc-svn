#include "msvcrt.h"
void _elfimplib_mbstowcs() asm("mbstowcs");
void *_imp__mbstowcs = NULL;
__attribute__((constructor)) void _elfimplib_init_mbstowcs() {
load_dll_msvcrt();
_imp__mbstowcs = (void *) _elf_GetProcAddress(_dll_msvcrt, "mbstowcs");
}
void _elfimplib_mbstowcs() {
asm("leave\njmp *%0" : : "r"(_imp__mbstowcs));
}

