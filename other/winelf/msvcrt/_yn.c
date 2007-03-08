#include "msvcrt.h"
void _elfimplib__yn() asm("yn");
void *_imp___yn = NULL;
__attribute__((constructor)) void _elfimplib_init__yn() {
load_dll_msvcrt();
_imp___yn = (void *) _elf_GetProcAddress(_dll_msvcrt, "_yn");
}
void _elfimplib__yn() {
asm("leave\njmp *%0" : : "r"(_imp___yn));
}

