#include "msvcrt.h"
void _elfimplib_putwc() asm("putwc");
void *_imp__putwc = NULL;
__attribute__((constructor)) void _elfimplib_init_putwc() {
load_dll_msvcrt();
_imp__putwc = (void *) _elf_GetProcAddress(_dll_msvcrt, "putwc");
}
void _elfimplib_putwc() {
asm("leave\njmp *%0" : : "r"(_imp__putwc));
}

