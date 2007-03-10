#include "user32.h"
void _elfimplib_LoadMenuW() asm("LoadMenuW");
void *_imp__LoadMenuW = NULL;
__attribute__((constructor)) void _elfimplib_init_LoadMenuW() {
load_dll_user32();
_imp__LoadMenuW = (void *) _elf_GetProcAddress(_dll_user32, "LoadMenuW");
}
void _elfimplib_LoadMenuW() {
asm("leave\njmp *%0" : : "r"(_imp__LoadMenuW));
}

