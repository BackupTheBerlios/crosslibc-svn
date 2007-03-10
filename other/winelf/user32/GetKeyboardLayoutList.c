#include "user32.h"
void _elfimplib_GetKeyboardLayoutList() asm("GetKeyboardLayoutList");
void *_imp__GetKeyboardLayoutList = NULL;
__attribute__((constructor)) void _elfimplib_init_GetKeyboardLayoutList() {
load_dll_user32();
_imp__GetKeyboardLayoutList = (void *) _elf_GetProcAddress(_dll_user32, "GetKeyboardLayoutList");
}
void _elfimplib_GetKeyboardLayoutList() {
asm("leave\njmp *%0" : : "r"(_imp__GetKeyboardLayoutList));
}

