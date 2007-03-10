#include "msvcrt.h"
void _elfimplib__wcsnicoll() asm("wcsnicoll");
void *_imp___wcsnicoll = NULL;
__attribute__((constructor)) void _elfimplib_init__wcsnicoll() {
load_dll_msvcrt();
_imp___wcsnicoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcsnicoll");
}
void _elfimplib__wcsnicoll() {
asm("leave\njmp *%0" : : "r"(_imp___wcsnicoll));
}

void _elfimplibmang__wcsnicoll() asm("_wcsnicoll");
void _elfimplibmang__wcsnicoll() {
asm("leave\njmp *%0" : : "r"(_imp___wcsnicoll));
}

