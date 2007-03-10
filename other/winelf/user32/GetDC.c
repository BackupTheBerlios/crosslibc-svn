#include "user32.h"
void _elfimplib_GetDC() asm("GetDC");
void *_imp__GetDC = NULL;
__attribute__((constructor)) void _elfimplib_init_GetDC() {
load_dll_user32();
_imp__GetDC = (void *) _elf_GetProcAddress(_dll_user32, "GetDC");
}
void _elfimplib_GetDC() {
asm("leave\njmp *%0" : : "r"(_imp__GetDC));
}

