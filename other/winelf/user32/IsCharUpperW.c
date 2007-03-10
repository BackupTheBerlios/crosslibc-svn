#include "user32.h"
void _elfimplib_IsCharUpperW() asm("IsCharUpperW");
void *_imp__IsCharUpperW = NULL;
__attribute__((constructor)) void _elfimplib_init_IsCharUpperW() {
load_dll_user32();
_imp__IsCharUpperW = (void *) _elf_GetProcAddress(_dll_user32, "IsCharUpperW");
}
void _elfimplib_IsCharUpperW() {
asm("leave\njmp *%0" : : "r"(_imp__IsCharUpperW));
}

