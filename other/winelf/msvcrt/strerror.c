#include "msvcrt.h"
void _elfimplib_strerror() asm("strerror");
void *_imp__strerror = NULL;
__attribute__((constructor)) void _elfimplib_init_strerror() {
load_dll_msvcrt();
_imp__strerror = (void *) _elf_GetProcAddress(_dll_msvcrt, "strerror");
}
void _elfimplib_strerror() {
asm("leave\njmp *%0" : : "r"(_imp__strerror));
}

