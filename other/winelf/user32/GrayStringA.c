#include "user32.h"
void _elfimplib_GrayStringA() asm("GrayStringA");
void *_imp__GrayStringA = NULL;
__attribute__((constructor)) void _elfimplib_init_GrayStringA() {
load_dll_user32();
_imp__GrayStringA = (void *) _elf_GetProcAddress(_dll_user32, "GrayStringA");
}
void _elfimplib_GrayStringA() {
asm("leave\njmp *%0" : : "r"(_imp__GrayStringA));
}

