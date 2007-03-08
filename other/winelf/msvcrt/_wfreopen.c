#include "msvcrt.h"
void _elfimplib__wfreopen() asm("wfreopen");
void *_imp___wfreopen = NULL;
__attribute__((constructor)) void _elfimplib_init__wfreopen() {
load_dll_msvcrt();
_imp___wfreopen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wfreopen");
}
void _elfimplib__wfreopen() {
asm("leave\njmp *%0" : : "r"(_imp___wfreopen));
}

