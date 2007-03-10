#include "msvcrt.h"
void _elfimplib__control87() asm("control87");
void *_imp___control87 = NULL;
__attribute__((constructor)) void _elfimplib_init__control87() {
load_dll_msvcrt();
_imp___control87 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_control87");
}
void _elfimplib__control87() {
asm("leave\njmp *%0" : : "r"(_imp___control87));
}

void _elfimplibmang__control87() asm("_control87");
void _elfimplibmang__control87() {
asm("leave\njmp *%0" : : "r"(_imp___control87));
}

