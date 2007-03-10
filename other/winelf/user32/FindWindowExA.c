#include "user32.h"
void _elfimplib_FindWindowExA() asm("FindWindowExA");
void *_imp__FindWindowExA = NULL;
__attribute__((constructor)) void _elfimplib_init_FindWindowExA() {
load_dll_user32();
_imp__FindWindowExA = (void *) _elf_GetProcAddress(_dll_user32, "FindWindowExA");
}
void _elfimplib_FindWindowExA() {
asm("leave\njmp *%0" : : "r"(_imp__FindWindowExA));
}

