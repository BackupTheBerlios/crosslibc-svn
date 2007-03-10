#include "msvcrt.h"
void _elfimplib__scalb() asm("scalb");
void *_imp___scalb = NULL;
__attribute__((constructor)) void _elfimplib_init__scalb() {
load_dll_msvcrt();
_imp___scalb = (void *) _elf_GetProcAddress(_dll_msvcrt, "_scalb");
}
void _elfimplib__scalb() {
asm("leave\njmp *%0" : : "r"(_imp___scalb));
}

void _elfimplibmang__scalb() asm("_scalb");
void _elfimplibmang__scalb() {
asm("leave\njmp *%0" : : "r"(_imp___scalb));
}

