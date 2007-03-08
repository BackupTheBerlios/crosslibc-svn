#include "msvcrt.h"
void _elfimplib__lseeki64() asm("lseeki64");
void *_imp___lseeki64 = NULL;
__attribute__((constructor)) void _elfimplib_init__lseeki64() {
load_dll_msvcrt();
_imp___lseeki64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_lseeki64");
}
void _elfimplib__lseeki64() {
asm("leave\njmp *%0" : : "r"(_imp___lseeki64));
}

