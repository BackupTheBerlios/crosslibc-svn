#include "user32.h"
void _elfimplib_CharNextA() asm("CharNextA");
void *_imp__CharNextA = NULL;
__attribute__((constructor)) void _elfimplib_init_CharNextA() {
load_dll_user32();
_imp__CharNextA = (void *) _elf_GetProcAddress(_dll_user32, "CharNextA");
}
void _elfimplib_CharNextA() {
asm("leave\njmp *%0" : : "r"(_imp__CharNextA));
}

