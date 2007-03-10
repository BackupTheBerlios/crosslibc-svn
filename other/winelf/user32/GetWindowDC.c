#include "user32.h"
void _elfimplib_GetWindowDC() asm("GetWindowDC");
void *_imp__GetWindowDC = NULL;
__attribute__((constructor)) void _elfimplib_init_GetWindowDC() {
load_dll_user32();
_imp__GetWindowDC = (void *) _elf_GetProcAddress(_dll_user32, "GetWindowDC");
}
void _elfimplib_GetWindowDC() {
asm("leave\njmp *%0" : : "r"(_imp__GetWindowDC));
}

