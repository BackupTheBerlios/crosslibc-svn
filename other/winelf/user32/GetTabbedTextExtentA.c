#include "user32.h"
void _elfimplib_GetTabbedTextExtentA() asm("GetTabbedTextExtentA");
void *_imp__GetTabbedTextExtentA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetTabbedTextExtentA() {
load_dll_user32();
_imp__GetTabbedTextExtentA = (void *) _elf_GetProcAddress(_dll_user32, "GetTabbedTextExtentA");
}
void _elfimplib_GetTabbedTextExtentA() {
asm("leave\njmp *%0" : : "r"(_imp__GetTabbedTextExtentA));
}

