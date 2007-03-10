#include "user32.h"
void _elfimplib_EnumPropsExW() asm("EnumPropsExW");
void *_imp__EnumPropsExW = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumPropsExW() {
load_dll_user32();
_imp__EnumPropsExW = (void *) _elf_GetProcAddress(_dll_user32, "EnumPropsExW");
}
void _elfimplib_EnumPropsExW() {
asm("leave\njmp *%0" : : "r"(_imp__EnumPropsExW));
}

