#include "msvcrt.h"
void _elfimplib__winmajor() asm("winmajor");
void *_imp___winmajor = NULL;
__attribute__((constructor)) void _elfimplib_init__winmajor() {
load_dll_msvcrt();
_imp___winmajor = (void *) _elf_GetProcAddress(_dll_msvcrt, "_winmajor");
}
void _elfimplib__winmajor() {
asm("leave\njmp *%0" : : "r"(_imp___winmajor));
}

void _elfimplibmang__winmajor() asm("_winmajor");
void _elfimplibmang__winmajor() {
asm("leave\njmp *%0" : : "r"(_imp___winmajor));
}

