#include "user32.h"
void _elfimplib_CharLowerW() asm("CharLowerW");
void *_imp__CharLowerW = NULL;
__attribute__((constructor)) void _elfimplib_init_CharLowerW() {
load_dll_user32();
_imp__CharLowerW = (void *) _elf_GetProcAddress(_dll_user32, "CharLowerW");
}
void _elfimplib_CharLowerW() {
asm("leave\njmp *%0" : : "r"(_imp__CharLowerW));
}

