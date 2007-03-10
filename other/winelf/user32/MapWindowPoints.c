#include "user32.h"
void _elfimplib_MapWindowPoints() asm("MapWindowPoints");
void *_imp__MapWindowPoints = NULL;
__attribute__((constructor)) void _elfimplib_init_MapWindowPoints() {
load_dll_user32();
_imp__MapWindowPoints = (void *) _elf_GetProcAddress(_dll_user32, "MapWindowPoints");
}
void _elfimplib_MapWindowPoints() {
asm("leave\njmp *%0" : : "r"(_imp__MapWindowPoints));
}

