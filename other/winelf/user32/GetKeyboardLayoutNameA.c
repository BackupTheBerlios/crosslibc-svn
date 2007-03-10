#include "user32.h"
void _elfimplib_GetKeyboardLayoutNameA() asm("GetKeyboardLayoutNameA");
void *_imp__GetKeyboardLayoutNameA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetKeyboardLayoutNameA() {
load_dll_user32();
_imp__GetKeyboardLayoutNameA = (void *) _elf_GetProcAddress(_dll_user32, "GetKeyboardLayoutNameA");
}
void _elfimplib_GetKeyboardLayoutNameA() {
asm("leave\njmp *%0" : : "r"(_imp__GetKeyboardLayoutNameA));
}

