#include "msvcrt.h"
void _elfimplib___wcserror() asm("_wcserror");
void *_imp____wcserror = NULL;
__attribute__((constructor)) void _elfimplib_init___wcserror() {
load_dll_msvcrt();
_imp____wcserror = (void *) _elf_GetProcAddress(_dll_msvcrt, "__wcserror");
}
void _elfimplib___wcserror() {
asm("leave\njmp *%0" : : "r"(_imp____wcserror));
}

void _elfimplibmang___wcserror() asm("__wcserror");
void _elfimplibmang___wcserror() {
asm("leave\njmp *%0" : : "r"(_imp____wcserror));
}

