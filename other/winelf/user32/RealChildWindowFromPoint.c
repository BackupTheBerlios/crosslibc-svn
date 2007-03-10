#include "user32.h"
void _elfimplib_RealChildWindowFromPoint() asm("RealChildWindowFromPoint");
void *_imp__RealChildWindowFromPoint = NULL;
__attribute__((constructor)) void _elfimplib_init_RealChildWindowFromPoint() {
load_dll_user32();
_imp__RealChildWindowFromPoint = (void *) _elf_GetProcAddress(_dll_user32, "RealChildWindowFromPoint");
}
void _elfimplib_RealChildWindowFromPoint() {
asm("leave\njmp *%0" : : "r"(_imp__RealChildWindowFromPoint));
}

