#include "msvcrt.h"
void _elfimplib__flushall() asm("flushall");
void *_imp___flushall = NULL;
__attribute__((constructor)) void _elfimplib_init__flushall() {
load_dll_msvcrt();
_imp___flushall = (void *) _elf_GetProcAddress(_dll_msvcrt, "_flushall");
}
void _elfimplib__flushall() {
asm("leave\njmp *%0" : : "r"(_imp___flushall));
}

void _elfimplibmang__flushall() asm("_flushall");
void _elfimplibmang__flushall() {
asm("leave\njmp *%0" : : "r"(_imp___flushall));
}

