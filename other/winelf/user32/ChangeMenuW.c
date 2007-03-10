#include "user32.h"
void _elfimplib_ChangeMenuW() asm("ChangeMenuW");
void *_imp__ChangeMenuW = NULL;
__attribute__((constructor)) void _elfimplib_init_ChangeMenuW() {
load_dll_user32();
_imp__ChangeMenuW = (void *) _elf_GetProcAddress(_dll_user32, "ChangeMenuW");
}
void _elfimplib_ChangeMenuW() {
asm("leave\njmp *%0" : : "r"(_imp__ChangeMenuW));
}

