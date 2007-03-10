#include "msvcrt.h"
void _elfimplib__wperror() asm("wperror");
void *_imp___wperror = NULL;
__attribute__((constructor)) void _elfimplib_init__wperror() {
load_dll_msvcrt();
_imp___wperror = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wperror");
}
void _elfimplib__wperror() {
asm("leave\njmp *%0" : : "r"(_imp___wperror));
}

void _elfimplibmang__wperror() asm("_wperror");
void _elfimplibmang__wperror() {
asm("leave\njmp *%0" : : "r"(_imp___wperror));
}

