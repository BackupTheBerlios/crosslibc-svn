#include "msvcrt.h"
void _elfimplib__exit() asm("UWIN__exit");
void *_imp___exit = NULL;
__attribute__((constructor)) void _elfimplib_init__exit() {
if (OSCALL_which != 3) return;
load_dll_msvcrt();
_imp___exit = (void *) _elf_GetProcAddress(_dll_msvcrt, "_exit");
}
void _elfimplib__exit() {
asm("leave\njmp *%0" : : "r"(_imp___exit));
}

