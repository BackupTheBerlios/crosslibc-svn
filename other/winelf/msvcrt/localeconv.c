#include "msvcrt.h"
void _elfimplib_localeconv() asm("localeconv");
void *_imp__localeconv = NULL;
__attribute__((constructor)) void _elfimplib_init_localeconv() {
load_dll_msvcrt();
_imp__localeconv = (void *) _elf_GetProcAddress(_dll_msvcrt, "localeconv");
}
void _elfimplib_localeconv() {
asm("leave\njmp *%0" : : "r"(_imp__localeconv));
}

