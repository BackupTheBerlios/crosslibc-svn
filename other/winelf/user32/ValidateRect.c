#include "user32.h"
void _elfimplib_ValidateRect() asm("ValidateRect");
void *_imp__ValidateRect = NULL;
__attribute__((constructor)) void _elfimplib_init_ValidateRect() {
load_dll_user32();
_imp__ValidateRect = (void *) _elf_GetProcAddress(_dll_user32, "ValidateRect");
}
void _elfimplib_ValidateRect() {
asm("leave\njmp *%0" : : "r"(_imp__ValidateRect));
}

