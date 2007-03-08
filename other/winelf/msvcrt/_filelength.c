#include "msvcrt.h"
void _elfimplib__filelength() asm("filelength");
void *_imp___filelength = NULL;
__attribute__((constructor)) void _elfimplib_init__filelength() {
load_dll_msvcrt();
_imp___filelength = (void *) _elf_GetProcAddress(_dll_msvcrt, "_filelength");
}
void _elfimplib__filelength() {
asm("leave\njmp *%0" : : "r"(_imp___filelength));
}

