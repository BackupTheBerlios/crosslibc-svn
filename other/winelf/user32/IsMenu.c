#include "user32.h"
void _elfimplib_IsMenu() asm("IsMenu");
void *_imp__IsMenu = NULL;
__attribute__((constructor)) void _elfimplib_init_IsMenu() {
load_dll_user32();
_imp__IsMenu = (void *) _elf_GetProcAddress(_dll_user32, "IsMenu");
}
void _elfimplib_IsMenu() {
asm("leave\njmp *%0" : : "r"(_imp__IsMenu));
}

