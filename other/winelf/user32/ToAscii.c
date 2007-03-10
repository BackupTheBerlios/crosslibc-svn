#include "user32.h"
void _elfimplib_ToAscii() asm("ToAscii");
void *_imp__ToAscii = NULL;
__attribute__((constructor)) void _elfimplib_init_ToAscii() {
load_dll_user32();
_imp__ToAscii = (void *) _elf_GetProcAddress(_dll_user32, "ToAscii");
}
void _elfimplib_ToAscii() {
asm("leave\njmp *%0" : : "r"(_imp__ToAscii));
}

