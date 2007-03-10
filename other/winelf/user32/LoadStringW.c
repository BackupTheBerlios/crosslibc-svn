#include "user32.h"
void _elfimplib_LoadStringW() asm("LoadStringW");
void *_imp__LoadStringW = NULL;
__attribute__((constructor)) void _elfimplib_init_LoadStringW() {
load_dll_user32();
_imp__LoadStringW = (void *) _elf_GetProcAddress(_dll_user32, "LoadStringW");
}
void _elfimplib_LoadStringW() {
asm("leave\njmp *%0" : : "r"(_imp__LoadStringW));
}

