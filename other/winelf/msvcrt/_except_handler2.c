#include "msvcrt.h"
void _elfimplib__except_handler2() asm("except_handler2");
void *_imp___except_handler2 = NULL;
__attribute__((constructor)) void _elfimplib_init__except_handler2() {
load_dll_msvcrt();
_imp___except_handler2 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_except_handler2");
}
void _elfimplib__except_handler2() {
asm("leave\njmp *%0" : : "r"(_imp___except_handler2));
}

void _elfimplibmang__except_handler2() asm("_except_handler2");
void _elfimplibmang__except_handler2() {
asm("leave\njmp *%0" : : "r"(_imp___except_handler2));
}

