#include "msvcrt.h"
void _elfimplib__get_osfhandle() asm("get_osfhandle");
void *_imp___get_osfhandle = NULL;
__attribute__((constructor)) void _elfimplib_init__get_osfhandle() {
load_dll_msvcrt();
_imp___get_osfhandle = (void *) _elf_GetProcAddress(_dll_msvcrt, "_get_osfhandle");
}
void _elfimplib__get_osfhandle() {
asm("leave\njmp *%0" : : "r"(_imp___get_osfhandle));
}

