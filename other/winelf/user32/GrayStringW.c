#include "user32.h"
void _elfimplib_GrayStringW() asm("GrayStringW");
void *_imp__GrayStringW = NULL;
__attribute__((constructor)) void _elfimplib_init_GrayStringW() {
load_dll_user32();
_imp__GrayStringW = (void *) _elf_GetProcAddress(_dll_user32, "GrayStringW");
}
void _elfimplib_GrayStringW() {
asm("leave\njmp *%0" : : "r"(_imp__GrayStringW));
}

