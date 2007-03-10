#include "msvcrt.h"
void _elfimplib__longjmpex() asm("longjmpex");
void *_imp___longjmpex = NULL;
__attribute__((constructor)) void _elfimplib_init__longjmpex() {
load_dll_msvcrt();
_imp___longjmpex = (void *) _elf_GetProcAddress(_dll_msvcrt, "_longjmpex");
}
void _elfimplib__longjmpex() {
asm("leave\njmp *%0" : : "r"(_imp___longjmpex));
}

void _elfimplibmang__longjmpex() asm("_longjmpex");
void _elfimplibmang__longjmpex() {
asm("leave\njmp *%0" : : "r"(_imp___longjmpex));
}

