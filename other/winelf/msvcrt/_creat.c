#include "msvcrt.h"
void _elfimplib__creat() asm("creat");
void *_imp___creat = NULL;
__attribute__((constructor)) void _elfimplib_init__creat() {
load_dll_msvcrt();
_imp___creat = (void *) _elf_GetProcAddress(_dll_msvcrt, "_creat");
}
void _elfimplib__creat() {
asm("leave\njmp *%0" : : "r"(_imp___creat));
}

void _elfimplibmang__creat() asm("_creat");
void _elfimplibmang__creat() {
asm("leave\njmp *%0" : : "r"(_imp___creat));
}

