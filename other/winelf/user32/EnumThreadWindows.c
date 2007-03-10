#include "user32.h"
void _elfimplib_EnumThreadWindows() asm("EnumThreadWindows");
void *_imp__EnumThreadWindows = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumThreadWindows() {
load_dll_user32();
_imp__EnumThreadWindows = (void *) _elf_GetProcAddress(_dll_user32, "EnumThreadWindows");
}
void _elfimplib_EnumThreadWindows() {
asm("leave\njmp *%0" : : "r"(_imp__EnumThreadWindows));
}

