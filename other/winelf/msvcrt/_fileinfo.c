#include "msvcrt.h"
void _elfimplib__fileinfo() asm("fileinfo");
void *_imp___fileinfo = NULL;
__attribute__((constructor)) void _elfimplib_init__fileinfo() {
load_dll_msvcrt();
_imp___fileinfo = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fileinfo");
}
void _elfimplib__fileinfo() {
asm("leave\njmp *%0" : : "r"(_imp___fileinfo));
}

void _elfimplibmang__fileinfo() asm("_fileinfo");
void _elfimplibmang__fileinfo() {
asm("leave\njmp *%0" : : "r"(_imp___fileinfo));
}

