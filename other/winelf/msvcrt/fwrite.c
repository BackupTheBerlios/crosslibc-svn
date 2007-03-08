#include "msvcrt.h"
void _elfimplib_fwrite() asm("fwrite");
void *_imp__fwrite = NULL;
__attribute__((constructor)) void _elfimplib_init_fwrite() {
load_dll_msvcrt();
_imp__fwrite = (void *) _elf_GetProcAddress(_dll_msvcrt, "fwrite");
}
void _elfimplib_fwrite() {
asm("leave\njmp *%0" : : "r"(_imp__fwrite));
}

