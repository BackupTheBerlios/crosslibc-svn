#include "user32.h"
void _elfimplib_CharNextExA() asm("CharNextExA");
void *_imp__CharNextExA = NULL;
__attribute__((constructor)) void _elfimplib_init_CharNextExA() {
load_dll_user32();
_imp__CharNextExA = (void *) _elf_GetProcAddress(_dll_user32, "CharNextExA");
}
void _elfimplib_CharNextExA() {
asm("leave\njmp *%0" : : "r"(_imp__CharNextExA));
}

