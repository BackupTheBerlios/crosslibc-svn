#include "user32.h"
void _elfimplib_CharToOemBuffW() asm("CharToOemBuffW");
void *_imp__CharToOemBuffW = NULL;
__attribute__((constructor)) void _elfimplib_init_CharToOemBuffW() {
load_dll_user32();
_imp__CharToOemBuffW = (void *) _elf_GetProcAddress(_dll_user32, "CharToOemBuffW");
}
void _elfimplib_CharToOemBuffW() {
asm("leave\njmp *%0" : : "r"(_imp__CharToOemBuffW));
}

