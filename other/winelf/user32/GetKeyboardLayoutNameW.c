#include "user32.h"
void _elfimplib_GetKeyboardLayoutNameW() asm("GetKeyboardLayoutNameW");
void *_imp__GetKeyboardLayoutNameW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetKeyboardLayoutNameW() {
load_dll_user32();
_imp__GetKeyboardLayoutNameW = (void *) _elf_GetProcAddress(_dll_user32, "GetKeyboardLayoutNameW");
}
void _elfimplib_GetKeyboardLayoutNameW() {
asm("leave\njmp *%0" : : "r"(_imp__GetKeyboardLayoutNameW));
}

