#include "msvcrt.h"
void _elfimplib___p__environ() asm("_p__environ");
void *_imp____p__environ = NULL;
__attribute__((constructor)) void _elfimplib_init___p__environ() {
load_dll_msvcrt();
_imp____p__environ = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__environ");
}
void _elfimplib___p__environ() {
asm("leave\njmp *%0" : : "r"(_imp____p__environ));
}

