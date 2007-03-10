#include "user32.h"
void _elfimplib_EnumPropsA() asm("EnumPropsA");
void *_imp__EnumPropsA = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumPropsA() {
load_dll_user32();
_imp__EnumPropsA = (void *) _elf_GetProcAddress(_dll_user32, "EnumPropsA");
}
void _elfimplib_EnumPropsA() {
asm("leave\njmp *%0" : : "r"(_imp__EnumPropsA));
}

