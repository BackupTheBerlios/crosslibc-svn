#include "user32.h"
void _elfimplib_CharLowerA() asm("CharLowerA");
void *_imp__CharLowerA = NULL;
__attribute__((constructor)) void _elfimplib_init_CharLowerA() {
load_dll_user32();
_imp__CharLowerA = (void *) _elf_GetProcAddress(_dll_user32, "CharLowerA");
}
void _elfimplib_CharLowerA() {
asm("leave\njmp *%0" : : "r"(_imp__CharLowerA));
}

