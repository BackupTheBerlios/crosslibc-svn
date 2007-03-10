#include "msvcrt.h"
void _elfimplib__strerror() asm("strerror");
void *_imp___strerror = NULL;
__attribute__((constructor)) void _elfimplib_init__strerror() {
load_dll_msvcrt();
_imp___strerror = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strerror");
}
void _elfimplib__strerror() {
asm("leave\njmp *%0" : : "r"(_imp___strerror));
}

void _elfimplibmang__strerror() asm("_strerror");
void _elfimplibmang__strerror() {
asm("leave\njmp *%0" : : "r"(_imp___strerror));
}

