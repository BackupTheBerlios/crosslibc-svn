#include "msvcrt.h"
void _elfimplib__nextafter() asm("nextafter");
void *_imp___nextafter = NULL;
__attribute__((constructor)) void _elfimplib_init__nextafter() {
load_dll_msvcrt();
_imp___nextafter = (void *) _elf_GetProcAddress(_dll_msvcrt, "_nextafter");
}
void _elfimplib__nextafter() {
asm("leave\njmp *%0" : : "r"(_imp___nextafter));
}

void _elfimplibmang__nextafter() asm("_nextafter");
void _elfimplibmang__nextafter() {
asm("leave\njmp *%0" : : "r"(_imp___nextafter));
}

