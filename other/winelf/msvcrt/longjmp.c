#include "msvcrt.h"
void _elfimplib_longjmp() asm("longjmp");
void *_imp__longjmp = NULL;
__attribute__((constructor)) void _elfimplib_init_longjmp() {
load_dll_msvcrt();
_imp__longjmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "longjmp");
}
void _elfimplib_longjmp() {
asm("leave\njmp *%0" : : "r"(_imp__longjmp));
}

