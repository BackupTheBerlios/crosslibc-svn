#include "msvcrt.h"
void _elfimplib__fmode() asm("fmode");
void *_imp___fmode = NULL;
__attribute__((constructor)) void _elfimplib_init__fmode() {
load_dll_msvcrt();
_imp___fmode = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fmode");
}
void _elfimplib__fmode() {
asm("leave\njmp *%0" : : "r"(_imp___fmode));
}

void _elfimplibmang__fmode() asm("_fmode");
void _elfimplibmang__fmode() {
asm("leave\njmp *%0" : : "r"(_imp___fmode));
}

