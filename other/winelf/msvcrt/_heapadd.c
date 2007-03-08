#include "msvcrt.h"
void _elfimplib__heapadd() asm("heapadd");
void *_imp___heapadd = NULL;
__attribute__((constructor)) void _elfimplib_init__heapadd() {
load_dll_msvcrt();
_imp___heapadd = (void *) _elf_GetProcAddress(_dll_msvcrt, "_heapadd");
}
void _elfimplib__heapadd() {
asm("leave\njmp *%0" : : "r"(_imp___heapadd));
}

