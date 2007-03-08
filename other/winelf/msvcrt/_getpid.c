#include "msvcrt.h"
void _elfimplib__getpid() asm("getpid");
void *_imp___getpid = NULL;
__attribute__((constructor)) void _elfimplib_init__getpid() {
load_dll_msvcrt();
_imp___getpid = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getpid");
}
void _elfimplib__getpid() {
asm("leave\njmp *%0" : : "r"(_imp___getpid));
}

