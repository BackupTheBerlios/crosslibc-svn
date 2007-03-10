#include "user32.h"
void _elfimplib_GetWindowRect() asm("GetWindowRect");
void *_imp__GetWindowRect = NULL;
__attribute__((constructor)) void _elfimplib_init_GetWindowRect() {
load_dll_user32();
_imp__GetWindowRect = (void *) _elf_GetProcAddress(_dll_user32, "GetWindowRect");
}
void _elfimplib_GetWindowRect() {
asm("leave\njmp *%0" : : "r"(_imp__GetWindowRect));
}

