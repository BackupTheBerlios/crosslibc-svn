#include "user32.h"
void _elfimplib_CharUpperBuffA() asm("CharUpperBuffA");
void *_imp__CharUpperBuffA = NULL;
__attribute__((constructor)) void _elfimplib_init_CharUpperBuffA() {
load_dll_user32();
_imp__CharUpperBuffA = (void *) _elf_GetProcAddress(_dll_user32, "CharUpperBuffA");
}
void _elfimplib_CharUpperBuffA() {
asm("leave\njmp *%0" : : "r"(_imp__CharUpperBuffA));
}

