#include "user32.h"
void _elfimplib_CharToOemW() asm("CharToOemW");
void *_imp__CharToOemW = NULL;
__attribute__((constructor)) void _elfimplib_init_CharToOemW() {
load_dll_user32();
_imp__CharToOemW = (void *) _elf_GetProcAddress(_dll_user32, "CharToOemW");
}
void _elfimplib_CharToOemW() {
asm("leave\njmp *%0" : : "r"(_imp__CharToOemW));
}

