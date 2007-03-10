#include "user32.h"
void _elfimplib_PrivateSetRipFlags() asm("PrivateSetRipFlags");
void *_imp__PrivateSetRipFlags = NULL;
__attribute__((constructor)) void _elfimplib_init_PrivateSetRipFlags() {
load_dll_user32();
_imp__PrivateSetRipFlags = (void *) _elf_GetProcAddress(_dll_user32, "PrivateSetRipFlags");
}
void _elfimplib_PrivateSetRipFlags() {
asm("leave\njmp *%0" : : "r"(_imp__PrivateSetRipFlags));
}

