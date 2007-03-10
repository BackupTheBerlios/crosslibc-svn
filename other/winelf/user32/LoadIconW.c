#include "user32.h"
void _elfimplib_LoadIconW() asm("LoadIconW");
void *_imp__LoadIconW = NULL;
__attribute__((constructor)) void _elfimplib_init_LoadIconW() {
load_dll_user32();
_imp__LoadIconW = (void *) _elf_GetProcAddress(_dll_user32, "LoadIconW");
}
void _elfimplib_LoadIconW() {
asm("leave\njmp *%0" : : "r"(_imp__LoadIconW));
}

