#include "msvcrt.h"
void _elfimplib_signal() asm("signal");
void *_imp__signal = NULL;
__attribute__((constructor)) void _elfimplib_init_signal() {
load_dll_msvcrt();
_imp__signal = (void *) _elf_GetProcAddress(_dll_msvcrt, "signal");
}
void _elfimplib_signal() {
asm("leave\njmp *%0" : : "r"(_imp__signal));
}

