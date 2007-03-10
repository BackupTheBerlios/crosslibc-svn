#include "user32.h"
void _elfimplib_GetSysColor() asm("GetSysColor");
void *_imp__GetSysColor = NULL;
__attribute__((constructor)) void _elfimplib_init_GetSysColor() {
load_dll_user32();
_imp__GetSysColor = (void *) _elf_GetProcAddress(_dll_user32, "GetSysColor");
}
void _elfimplib_GetSysColor() {
asm("leave\njmp *%0" : : "r"(_imp__GetSysColor));
}

