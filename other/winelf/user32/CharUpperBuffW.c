#include "user32.h"
void _elfimplib_CharUpperBuffW() asm("CharUpperBuffW");
void *_imp__CharUpperBuffW = NULL;
__attribute__((constructor)) void _elfimplib_init_CharUpperBuffW() {
load_dll_user32();
_imp__CharUpperBuffW = (void *) _elf_GetProcAddress(_dll_user32, "CharUpperBuffW");
}
void _elfimplib_CharUpperBuffW() {
asm("leave\njmp *%0" : : "r"(_imp__CharUpperBuffW));
}

