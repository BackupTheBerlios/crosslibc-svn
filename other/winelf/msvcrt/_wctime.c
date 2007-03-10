#include "msvcrt.h"
void _elfimplib__wctime() asm("wctime");
void *_imp___wctime = NULL;
__attribute__((constructor)) void _elfimplib_init__wctime() {
load_dll_msvcrt();
_imp___wctime = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wctime");
}
void _elfimplib__wctime() {
asm("leave\njmp *%0" : : "r"(_imp___wctime));
}

void _elfimplibmang__wctime() asm("_wctime");
void _elfimplibmang__wctime() {
asm("leave\njmp *%0" : : "r"(_imp___wctime));
}

