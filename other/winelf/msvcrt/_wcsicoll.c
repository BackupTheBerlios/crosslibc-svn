#include "msvcrt.h"
void _elfimplib__wcsicoll() asm("wcsicoll");
void *_imp___wcsicoll = NULL;
__attribute__((constructor)) void _elfimplib_init__wcsicoll() {
load_dll_msvcrt();
_imp___wcsicoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcsicoll");
}
void _elfimplib__wcsicoll() {
asm("leave\njmp *%0" : : "r"(_imp___wcsicoll));
}

void _elfimplibmang__wcsicoll() asm("_wcsicoll");
void _elfimplibmang__wcsicoll() {
asm("leave\njmp *%0" : : "r"(_imp___wcsicoll));
}

