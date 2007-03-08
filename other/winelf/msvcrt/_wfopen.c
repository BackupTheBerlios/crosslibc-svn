#include "msvcrt.h"
void _elfimplib__wfopen() asm("wfopen");
void *_imp___wfopen = NULL;
__attribute__((constructor)) void _elfimplib_init__wfopen() {
load_dll_msvcrt();
_imp___wfopen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wfopen");
}
void _elfimplib__wfopen() {
asm("leave\njmp *%0" : : "r"(_imp___wfopen));
}

