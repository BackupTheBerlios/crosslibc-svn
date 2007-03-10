#include "msvcrt.h"
void _elfimplib__environ() asm("environ");
void *_imp___environ = NULL;
__attribute__((constructor)) void _elfimplib_init__environ() {
load_dll_msvcrt();
_imp___environ = (void *) _elf_GetProcAddress(_dll_msvcrt, "_environ");
}
void _elfimplib__environ() {
asm("leave\njmp *%0" : : "r"(_imp___environ));
}

void _elfimplibmang__environ() asm("_environ");
void _elfimplibmang__environ() {
asm("leave\njmp *%0" : : "r"(_imp___environ));
}

