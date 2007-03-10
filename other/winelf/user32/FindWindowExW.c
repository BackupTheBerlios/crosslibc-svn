#include "user32.h"
void _elfimplib_FindWindowExW() asm("FindWindowExW");
void *_imp__FindWindowExW = NULL;
__attribute__((constructor)) void _elfimplib_init_FindWindowExW() {
load_dll_user32();
_imp__FindWindowExW = (void *) _elf_GetProcAddress(_dll_user32, "FindWindowExW");
}
void _elfimplib_FindWindowExW() {
asm("leave\njmp *%0" : : "r"(_imp__FindWindowExW));
}

