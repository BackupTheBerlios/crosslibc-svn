#include "user32.h"
void _elfimplib_CharUpperA() asm("CharUpperA");
void *_imp__CharUpperA = NULL;
__attribute__((constructor)) void _elfimplib_init_CharUpperA() {
load_dll_user32();
_imp__CharUpperA = (void *) _elf_GetProcAddress(_dll_user32, "CharUpperA");
}
void _elfimplib_CharUpperA() {
asm("leave\njmp *%0" : : "r"(_imp__CharUpperA));
}

