#include "user32.h"
void _elfimplib_CharUpperW() asm("CharUpperW");
void *_imp__CharUpperW = NULL;
__attribute__((constructor)) void _elfimplib_init_CharUpperW() {
load_dll_user32();
_imp__CharUpperW = (void *) _elf_GetProcAddress(_dll_user32, "CharUpperW");
}
void _elfimplib_CharUpperW() {
asm("leave\njmp *%0" : : "r"(_imp__CharUpperW));
}

