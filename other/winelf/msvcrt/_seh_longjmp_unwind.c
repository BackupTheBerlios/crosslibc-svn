#include "msvcrt.h"
void _elfimplib__seh_longjmp_unwind() asm("seh_longjmp_unwind");
void *_imp___seh_longjmp_unwind = NULL;
__attribute__((constructor)) void _elfimplib_init__seh_longjmp_unwind() {
load_dll_msvcrt();
_imp___seh_longjmp_unwind = (void *) _elf_GetProcAddress(_dll_msvcrt, "_seh_longjmp_unwind");
}
void _elfimplib__seh_longjmp_unwind() {
asm("leave\njmp *%0" : : "r"(_imp___seh_longjmp_unwind));
}

