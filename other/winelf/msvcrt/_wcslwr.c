#include "msvcrt.h"
void _elfimplib__wcslwr() asm("wcslwr");
void *_imp___wcslwr = NULL;
__attribute__((constructor)) void _elfimplib_init__wcslwr() {
load_dll_msvcrt();
_imp___wcslwr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcslwr");
}
void _elfimplib__wcslwr() {
asm("leave\njmp *%0" : : "r"(_imp___wcslwr));
}

