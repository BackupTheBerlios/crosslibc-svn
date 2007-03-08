#include "msvcrt.h"
void _elfimplib_atexit() asm("atexit");
void *_imp__atexit = NULL;
__attribute__((constructor)) void _elfimplib_init_atexit() {
load_dll_msvcrt();
_imp__atexit = (void *) _elf_GetProcAddress(_dll_msvcrt, "atexit");
}
void _elfimplib_atexit() {
asm("leave\njmp *%0" : : "r"(_imp__atexit));
}

