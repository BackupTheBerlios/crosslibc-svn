#include "msvcrt.h"
void _elfimplib__beginthread() asm("beginthread");
void *_imp___beginthread = NULL;
__attribute__((constructor)) void _elfimplib_init__beginthread() {
load_dll_msvcrt();
_imp___beginthread = (void *) _elf_GetProcAddress(_dll_msvcrt, "_beginthread");
}
void _elfimplib__beginthread() {
asm("leave\njmp *%0" : : "r"(_imp___beginthread));
}

void _elfimplibmang__beginthread() asm("_beginthread");
void _elfimplibmang__beginthread() {
asm("leave\njmp *%0" : : "r"(_imp___beginthread));
}

