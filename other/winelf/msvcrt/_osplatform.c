#include "msvcrt.h"
void _elfimplib__osplatform() asm("osplatform");
void *_imp___osplatform = NULL;
__attribute__((constructor)) void _elfimplib_init__osplatform() {
load_dll_msvcrt();
_imp___osplatform = (void *) _elf_GetProcAddress(_dll_msvcrt, "_osplatform");
}
void _elfimplib__osplatform() {
asm("leave\njmp *%0" : : "r"(_imp___osplatform));
}

void _elfimplibmang__osplatform() asm("_osplatform");
void _elfimplibmang__osplatform() {
asm("leave\njmp *%0" : : "r"(_imp___osplatform));
}

