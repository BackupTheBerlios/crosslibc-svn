#include "msvcrt.h"
void _elfimplib__daylight() asm("daylight");
void *_imp___daylight = NULL;
__attribute__((constructor)) void _elfimplib_init__daylight() {
load_dll_msvcrt();
_imp___daylight = (void *) _elf_GetProcAddress(_dll_msvcrt, "_daylight");
}
void _elfimplib__daylight() {
asm("leave\njmp *%0" : : "r"(_imp___daylight));
}

