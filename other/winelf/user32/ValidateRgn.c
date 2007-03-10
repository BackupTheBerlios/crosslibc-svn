#include "user32.h"
void _elfimplib_ValidateRgn() asm("ValidateRgn");
void *_imp__ValidateRgn = NULL;
__attribute__((constructor)) void _elfimplib_init_ValidateRgn() {
load_dll_user32();
_imp__ValidateRgn = (void *) _elf_GetProcAddress(_dll_user32, "ValidateRgn");
}
void _elfimplib_ValidateRgn() {
asm("leave\njmp *%0" : : "r"(_imp__ValidateRgn));
}

