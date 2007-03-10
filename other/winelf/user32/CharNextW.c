#include "user32.h"
void _elfimplib_CharNextW() asm("CharNextW");
void *_imp__CharNextW = NULL;
__attribute__((constructor)) void _elfimplib_init_CharNextW() {
load_dll_user32();
_imp__CharNextW = (void *) _elf_GetProcAddress(_dll_user32, "CharNextW");
}
void _elfimplib_CharNextW() {
asm("leave\njmp *%0" : : "r"(_imp__CharNextW));
}

