#include "msvcrt.h"
void _elfimplib_strcmp() asm("strcmp");
void *_imp__strcmp = NULL;
__attribute__((constructor)) void _elfimplib_init_strcmp() {
load_dll_msvcrt();
_imp__strcmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "strcmp");
}
void _elfimplib_strcmp() {
asm("leave\njmp *%0" : : "r"(_imp__strcmp));
}

