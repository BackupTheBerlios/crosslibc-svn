#include "msvcrt.h"
void _elfimplib__lock() asm("lock");
void *_imp___lock = NULL;
__attribute__((constructor)) void _elfimplib_init__lock() {
load_dll_msvcrt();
_imp___lock = (void *) _elf_GetProcAddress(_dll_msvcrt, "_lock");
}
void _elfimplib__lock() {
asm("leave\njmp *%0" : : "r"(_imp___lock));
}

void _elfimplibmang__lock() asm("_lock");
void _elfimplibmang__lock() {
asm("leave\njmp *%0" : : "r"(_imp___lock));
}

