#include "user32.h"
void _elfimplib_CharLowerBuffW() asm("CharLowerBuffW");
void *_imp__CharLowerBuffW = NULL;
__attribute__((constructor)) void _elfimplib_init_CharLowerBuffW() {
load_dll_user32();
_imp__CharLowerBuffW = (void *) _elf_GetProcAddress(_dll_user32, "CharLowerBuffW");
}
void _elfimplib_CharLowerBuffW() {
asm("leave\njmp *%0" : : "r"(_imp__CharLowerBuffW));
}

