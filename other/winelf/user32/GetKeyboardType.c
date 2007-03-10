#include "user32.h"
void _elfimplib_GetKeyboardType() asm("GetKeyboardType");
void *_imp__GetKeyboardType = NULL;
__attribute__((constructor)) void _elfimplib_init_GetKeyboardType() {
load_dll_user32();
_imp__GetKeyboardType = (void *) _elf_GetProcAddress(_dll_user32, "GetKeyboardType");
}
void _elfimplib_GetKeyboardType() {
asm("leave\njmp *%0" : : "r"(_imp__GetKeyboardType));
}

