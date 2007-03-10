#include "msvcrt.h"
void _elfimplib__wcserror() asm("wcserror");
void *_imp___wcserror = NULL;
__attribute__((constructor)) void _elfimplib_init__wcserror() {
load_dll_msvcrt();
_imp___wcserror = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcserror");
}
void _elfimplib__wcserror() {
asm("leave\njmp *%0" : : "r"(_imp___wcserror));
}

void _elfimplibmang__wcserror() asm("_wcserror");
void _elfimplibmang__wcserror() {
asm("leave\njmp *%0" : : "r"(_imp___wcserror));
}

