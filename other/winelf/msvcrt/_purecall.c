#include "msvcrt.h"
void _elfimplib__purecall() asm("purecall");
void *_imp___purecall = NULL;
__attribute__((constructor)) void _elfimplib_init__purecall() {
load_dll_msvcrt();
_imp___purecall = (void *) _elf_GetProcAddress(_dll_msvcrt, "_purecall");
}
void _elfimplib__purecall() {
asm("leave\njmp *%0" : : "r"(_imp___purecall));
}

void _elfimplibmang__purecall() asm("_purecall");
void _elfimplibmang__purecall() {
asm("leave\njmp *%0" : : "r"(_imp___purecall));
}

