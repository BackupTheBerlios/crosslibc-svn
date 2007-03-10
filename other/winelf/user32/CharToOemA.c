#include "user32.h"
void _elfimplib_CharToOemA() asm("CharToOemA");
void *_imp__CharToOemA = NULL;
__attribute__((constructor)) void _elfimplib_init_CharToOemA() {
load_dll_user32();
_imp__CharToOemA = (void *) _elf_GetProcAddress(_dll_user32, "CharToOemA");
}
void _elfimplib_CharToOemA() {
asm("leave\njmp *%0" : : "r"(_imp__CharToOemA));
}

