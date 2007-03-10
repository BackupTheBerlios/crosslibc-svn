#include "msvcrt.h"
void _elfimplib___unDNameEx() asm("_unDNameEx");
void *_imp____unDNameEx = NULL;
__attribute__((constructor)) void _elfimplib_init___unDNameEx() {
load_dll_msvcrt();
_imp____unDNameEx = (void *) _elf_GetProcAddress(_dll_msvcrt, "__unDNameEx");
}
void _elfimplib___unDNameEx() {
asm("leave\njmp *%0" : : "r"(_imp____unDNameEx));
}

void _elfimplibmang___unDNameEx() asm("__unDNameEx");
void _elfimplibmang___unDNameEx() {
asm("leave\njmp *%0" : : "r"(_imp____unDNameEx));
}

