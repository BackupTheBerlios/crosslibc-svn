#include "msvcrt.h"
void _elfimplib__wspawnlp() asm("wspawnlp");
void *_imp___wspawnlp = NULL;
__attribute__((constructor)) void _elfimplib_init__wspawnlp() {
load_dll_msvcrt();
_imp___wspawnlp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wspawnlp");
}
void _elfimplib__wspawnlp() {
asm("leave\njmp *%0" : : "r"(_imp___wspawnlp));
}

