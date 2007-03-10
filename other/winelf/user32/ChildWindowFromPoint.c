#include "user32.h"
void _elfimplib_ChildWindowFromPoint() asm("ChildWindowFromPoint");
void *_imp__ChildWindowFromPoint = NULL;
__attribute__((constructor)) void _elfimplib_init_ChildWindowFromPoint() {
load_dll_user32();
_imp__ChildWindowFromPoint = (void *) _elf_GetProcAddress(_dll_user32, "ChildWindowFromPoint");
}
void _elfimplib_ChildWindowFromPoint() {
asm("leave\njmp *%0" : : "r"(_imp__ChildWindowFromPoint));
}

