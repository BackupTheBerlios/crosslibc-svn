#include "msvcrt.h"
void _elfimplib_fgetc() asm("fgetc");
void *_imp__fgetc = NULL;
__attribute__((constructor)) void _elfimplib_init_fgetc() {
load_dll_msvcrt();
_imp__fgetc = (void *) _elf_GetProcAddress(_dll_msvcrt, "fgetc");
}
void _elfimplib_fgetc() {
asm("leave\njmp *%0" : : "r"(_imp__fgetc));
}

