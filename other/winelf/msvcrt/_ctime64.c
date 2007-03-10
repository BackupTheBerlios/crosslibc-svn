#include "msvcrt.h"
void _elfimplib__ctime64() asm("ctime64");
void *_imp___ctime64 = NULL;
__attribute__((constructor)) void _elfimplib_init__ctime64() {
load_dll_msvcrt();
_imp___ctime64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ctime64");
}
void _elfimplib__ctime64() {
asm("leave\njmp *%0" : : "r"(_imp___ctime64));
}

void _elfimplibmang__ctime64() asm("_ctime64");
void _elfimplibmang__ctime64() {
asm("leave\njmp *%0" : : "r"(_imp___ctime64));
}

