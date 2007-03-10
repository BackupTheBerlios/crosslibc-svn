#include "user32.h"
void _elfimplib_CharPrevA() asm("CharPrevA");
void *_imp__CharPrevA = NULL;
__attribute__((constructor)) void _elfimplib_init_CharPrevA() {
load_dll_user32();
_imp__CharPrevA = (void *) _elf_GetProcAddress(_dll_user32, "CharPrevA");
}
void _elfimplib_CharPrevA() {
asm("leave\njmp *%0" : : "r"(_imp__CharPrevA));
}

