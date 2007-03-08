#include "msvcrt.h"
void _elfimplib__unloaddll() asm("unloaddll");
void *_imp___unloaddll = NULL;
__attribute__((constructor)) void _elfimplib_init__unloaddll() {
load_dll_msvcrt();
_imp___unloaddll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_unloaddll");
}
void _elfimplib__unloaddll() {
asm("leave\njmp *%0" : : "r"(_imp___unloaddll));
}

