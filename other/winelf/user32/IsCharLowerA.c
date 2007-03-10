#include "user32.h"
void _elfimplib_IsCharLowerA() asm("IsCharLowerA");
void *_imp__IsCharLowerA = NULL;
__attribute__((constructor)) void _elfimplib_init_IsCharLowerA() {
load_dll_user32();
_imp__IsCharLowerA = (void *) _elf_GetProcAddress(_dll_user32, "IsCharLowerA");
}
void _elfimplib_IsCharLowerA() {
asm("leave\njmp *%0" : : "r"(_imp__IsCharLowerA));
}

