#include "msvcrt.h"
void _elfimplib__rotr() asm("rotr");
void *_imp___rotr = NULL;
__attribute__((constructor)) void _elfimplib_init__rotr() {
load_dll_msvcrt();
_imp___rotr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_rotr");
}
void _elfimplib__rotr() {
asm("leave\njmp *%0" : : "r"(_imp___rotr));
}

void _elfimplibmang__rotr() asm("_rotr");
void _elfimplibmang__rotr() {
asm("leave\njmp *%0" : : "r"(_imp___rotr));
}

