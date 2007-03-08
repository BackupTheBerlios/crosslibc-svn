#include "msvcrt.h"
void _elfimplib__wspawnle() asm("wspawnle");
void *_imp___wspawnle = NULL;
__attribute__((constructor)) void _elfimplib_init__wspawnle() {
load_dll_msvcrt();
_imp___wspawnle = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wspawnle");
}
void _elfimplib__wspawnle() {
asm("leave\njmp *%0" : : "r"(_imp___wspawnle));
}

