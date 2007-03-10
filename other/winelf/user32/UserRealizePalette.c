#include "user32.h"
void _elfimplib_UserRealizePalette() asm("UserRealizePalette");
void *_imp__UserRealizePalette = NULL;
__attribute__((constructor)) void _elfimplib_init_UserRealizePalette() {
load_dll_user32();
_imp__UserRealizePalette = (void *) _elf_GetProcAddress(_dll_user32, "UserRealizePalette");
}
void _elfimplib_UserRealizePalette() {
asm("leave\njmp *%0" : : "r"(_imp__UserRealizePalette));
}

