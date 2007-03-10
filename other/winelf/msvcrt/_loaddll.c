#include "msvcrt.h"
void _elfimplib__loaddll() asm("loaddll");
void *_imp___loaddll = NULL;
__attribute__((constructor)) void _elfimplib_init__loaddll() {
load_dll_msvcrt();
_imp___loaddll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_loaddll");
}
void _elfimplib__loaddll() {
asm("leave\njmp *%0" : : "r"(_imp___loaddll));
}

void _elfimplibmang__loaddll() asm("_loaddll");
void _elfimplibmang__loaddll() {
asm("leave\njmp *%0" : : "r"(_imp___loaddll));
}

