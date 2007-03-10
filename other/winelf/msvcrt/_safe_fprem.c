#include "msvcrt.h"
void _elfimplib__safe_fprem() asm("safe_fprem");
void *_imp___safe_fprem = NULL;
__attribute__((constructor)) void _elfimplib_init__safe_fprem() {
load_dll_msvcrt();
_imp___safe_fprem = (void *) _elf_GetProcAddress(_dll_msvcrt, "_safe_fprem");
}
void _elfimplib__safe_fprem() {
asm("leave\njmp *%0" : : "r"(_imp___safe_fprem));
}

void _elfimplibmang__safe_fprem() asm("_safe_fprem");
void _elfimplibmang__safe_fprem() {
asm("leave\njmp *%0" : : "r"(_imp___safe_fprem));
}

