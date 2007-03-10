#include "user32.h"
void _elfimplib_ChangeMenuA() asm("ChangeMenuA");
void *_imp__ChangeMenuA = NULL;
__attribute__((constructor)) void _elfimplib_init_ChangeMenuA() {
load_dll_user32();
_imp__ChangeMenuA = (void *) _elf_GetProcAddress(_dll_user32, "ChangeMenuA");
}
void _elfimplib_ChangeMenuA() {
asm("leave\njmp *%0" : : "r"(_imp__ChangeMenuA));
}

