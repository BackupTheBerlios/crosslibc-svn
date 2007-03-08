#include "msvcrt.h"
void _elfimplib__open_osfhandle() asm("open_osfhandle");
void *_imp___open_osfhandle = NULL;
__attribute__((constructor)) void _elfimplib_init__open_osfhandle() {
load_dll_msvcrt();
_imp___open_osfhandle = (void *) _elf_GetProcAddress(_dll_msvcrt, "_open_osfhandle");
}
void _elfimplib__open_osfhandle() {
asm("leave\njmp *%0" : : "r"(_imp___open_osfhandle));
}

