#include "user32.h"
void _elfimplib_EnumPropsExA() asm("EnumPropsExA");
void *_imp__EnumPropsExA = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumPropsExA() {
load_dll_user32();
_imp__EnumPropsExA = (void *) _elf_GetProcAddress(_dll_user32, "EnumPropsExA");
}
void _elfimplib_EnumPropsExA() {
asm("leave\njmp *%0" : : "r"(_imp__EnumPropsExA));
}

