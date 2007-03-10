#include "user32.h"
void _elfimplib_IsCharLowerW() asm("IsCharLowerW");
void *_imp__IsCharLowerW = NULL;
__attribute__((constructor)) void _elfimplib_init_IsCharLowerW() {
load_dll_user32();
_imp__IsCharLowerW = (void *) _elf_GetProcAddress(_dll_user32, "IsCharLowerW");
}
void _elfimplib_IsCharLowerW() {
asm("leave\njmp *%0" : : "r"(_imp__IsCharLowerW));
}

