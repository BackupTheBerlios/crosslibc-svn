#include "user32.h"
void _elfimplib_IsZoomed() asm("IsZoomed");
void *_imp__IsZoomed = NULL;
__attribute__((constructor)) void _elfimplib_init_IsZoomed() {
load_dll_user32();
_imp__IsZoomed = (void *) _elf_GetProcAddress(_dll_user32, "IsZoomed");
}
void _elfimplib_IsZoomed() {
asm("leave\njmp *%0" : : "r"(_imp__IsZoomed));
}

