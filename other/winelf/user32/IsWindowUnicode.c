#include "user32.h"
void _elfimplib_IsWindowUnicode() asm("IsWindowUnicode");
void *_imp__IsWindowUnicode = NULL;
__attribute__((constructor)) void _elfimplib_init_IsWindowUnicode() {
load_dll_user32();
_imp__IsWindowUnicode = (void *) _elf_GetProcAddress(_dll_user32, "IsWindowUnicode");
}
void _elfimplib_IsWindowUnicode() {
asm("leave\njmp *%0" : : "r"(_imp__IsWindowUnicode));
}

