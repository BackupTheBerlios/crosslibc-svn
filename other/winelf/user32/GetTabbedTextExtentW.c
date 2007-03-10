#include "user32.h"
void _elfimplib_GetTabbedTextExtentW() asm("GetTabbedTextExtentW");
void *_imp__GetTabbedTextExtentW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetTabbedTextExtentW() {
load_dll_user32();
_imp__GetTabbedTextExtentW = (void *) _elf_GetProcAddress(_dll_user32, "GetTabbedTextExtentW");
}
void _elfimplib_GetTabbedTextExtentW() {
asm("leave\njmp *%0" : : "r"(_imp__GetTabbedTextExtentW));
}

