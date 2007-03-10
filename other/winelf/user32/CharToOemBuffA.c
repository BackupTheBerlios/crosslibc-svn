#include "user32.h"
void _elfimplib_CharToOemBuffA() asm("CharToOemBuffA");
void *_imp__CharToOemBuffA = NULL;
__attribute__((constructor)) void _elfimplib_init_CharToOemBuffA() {
load_dll_user32();
_imp__CharToOemBuffA = (void *) _elf_GetProcAddress(_dll_user32, "CharToOemBuffA");
}
void _elfimplib_CharToOemBuffA() {
asm("leave\njmp *%0" : : "r"(_imp__CharToOemBuffA));
}

