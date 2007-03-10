#include "user32.h"
void _elfimplib_HiliteMenuItem() asm("HiliteMenuItem");
void *_imp__HiliteMenuItem = NULL;
__attribute__((constructor)) void _elfimplib_init_HiliteMenuItem() {
load_dll_user32();
_imp__HiliteMenuItem = (void *) _elf_GetProcAddress(_dll_user32, "HiliteMenuItem");
}
void _elfimplib_HiliteMenuItem() {
asm("leave\njmp *%0" : : "r"(_imp__HiliteMenuItem));
}

