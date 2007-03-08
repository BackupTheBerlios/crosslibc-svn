#include "msvcrt.h"
void _elfimplib__waccess() asm("waccess");
void *_imp___waccess = NULL;
__attribute__((constructor)) void _elfimplib_init__waccess() {
load_dll_msvcrt();
_imp___waccess = (void *) _elf_GetProcAddress(_dll_msvcrt, "_waccess");
}
void _elfimplib__waccess() {
asm("leave\njmp *%0" : : "r"(_imp___waccess));
}

