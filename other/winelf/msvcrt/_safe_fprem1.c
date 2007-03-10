#include "msvcrt.h"
void _elfimplib__safe_fprem1() asm("safe_fprem1");
void *_imp___safe_fprem1 = NULL;
__attribute__((constructor)) void _elfimplib_init__safe_fprem1() {
load_dll_msvcrt();
_imp___safe_fprem1 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_safe_fprem1");
}
void _elfimplib__safe_fprem1() {
asm("leave\njmp *%0" : : "r"(_imp___safe_fprem1));
}

void _elfimplibmang__safe_fprem1() asm("_safe_fprem1");
void _elfimplibmang__safe_fprem1() {
asm("leave\njmp *%0" : : "r"(_imp___safe_fprem1));
}

