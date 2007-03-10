#include "user32.h"
void _elfimplib_ChildWindowFromPointEx() asm("ChildWindowFromPointEx");
void *_imp__ChildWindowFromPointEx = NULL;
__attribute__((constructor)) void _elfimplib_init_ChildWindowFromPointEx() {
load_dll_user32();
_imp__ChildWindowFromPointEx = (void *) _elf_GetProcAddress(_dll_user32, "ChildWindowFromPointEx");
}
void _elfimplib_ChildWindowFromPointEx() {
asm("leave\njmp *%0" : : "r"(_imp__ChildWindowFromPointEx));
}

