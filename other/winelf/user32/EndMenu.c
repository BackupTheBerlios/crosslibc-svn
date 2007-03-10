#include "user32.h"
void _elfimplib_EndMenu() asm("EndMenu");
void *_imp__EndMenu = NULL;
__attribute__((constructor)) void _elfimplib_init_EndMenu() {
load_dll_user32();
_imp__EndMenu = (void *) _elf_GetProcAddress(_dll_user32, "EndMenu");
}
void _elfimplib_EndMenu() {
asm("leave\njmp *%0" : : "r"(_imp__EndMenu));
}

