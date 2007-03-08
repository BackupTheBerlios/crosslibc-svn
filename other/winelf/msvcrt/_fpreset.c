#include "msvcrt.h"
void _elfimplib__fpreset() asm("fpreset");
void *_imp___fpreset = NULL;
__attribute__((constructor)) void _elfimplib_init__fpreset() {
load_dll_msvcrt();
_imp___fpreset = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fpreset");
}
void _elfimplib__fpreset() {
asm("leave\njmp *%0" : : "r"(_imp___fpreset));
}

