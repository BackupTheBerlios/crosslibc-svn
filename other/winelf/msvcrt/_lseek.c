#include "msvcrt.h"
void _elfimplib__lseek() asm("lseek");
void *_imp___lseek = NULL;
__attribute__((constructor)) void _elfimplib_init__lseek() {
load_dll_msvcrt();
_imp___lseek = (void *) _elf_GetProcAddress(_dll_msvcrt, "_lseek");
}
void _elfimplib__lseek() {
asm("leave\njmp *%0" : : "r"(_imp___lseek));
}

void _elfimplibmang__lseek() asm("_lseek");
void _elfimplibmang__lseek() {
asm("leave\njmp *%0" : : "r"(_imp___lseek));
}

