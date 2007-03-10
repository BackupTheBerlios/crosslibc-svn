#include "user32.h"
void _elfimplib_CharLowerBuffA() asm("CharLowerBuffA");
void *_imp__CharLowerBuffA = NULL;
__attribute__((constructor)) void _elfimplib_init_CharLowerBuffA() {
load_dll_user32();
_imp__CharLowerBuffA = (void *) _elf_GetProcAddress(_dll_user32, "CharLowerBuffA");
}
void _elfimplib_CharLowerBuffA() {
asm("leave\njmp *%0" : : "r"(_imp__CharLowerBuffA));
}

