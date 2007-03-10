#include "user32.h"
void _elfimplib_GetMenuStringW() asm("GetMenuStringW");
void *_imp__GetMenuStringW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetMenuStringW() {
load_dll_user32();
_imp__GetMenuStringW = (void *) _elf_GetProcAddress(_dll_user32, "GetMenuStringW");
}
void _elfimplib_GetMenuStringW() {
asm("leave\njmp *%0" : : "r"(_imp__GetMenuStringW));
}

