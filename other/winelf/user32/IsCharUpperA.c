#include "user32.h"
void _elfimplib_IsCharUpperA() asm("IsCharUpperA");
void *_imp__IsCharUpperA = NULL;
__attribute__((constructor)) void _elfimplib_init_IsCharUpperA() {
load_dll_user32();
_imp__IsCharUpperA = (void *) _elf_GetProcAddress(_dll_user32, "IsCharUpperA");
}
void _elfimplib_IsCharUpperA() {
asm("leave\njmp *%0" : : "r"(_imp__IsCharUpperA));
}

