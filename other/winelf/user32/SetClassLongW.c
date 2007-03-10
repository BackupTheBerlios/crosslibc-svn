#include "user32.h"
void _elfimplib_SetClassLongW() asm("SetClassLongW");
void *_imp__SetClassLongW = NULL;
__attribute__((constructor)) void _elfimplib_init_SetClassLongW() {
load_dll_user32();
_imp__SetClassLongW = (void *) _elf_GetProcAddress(_dll_user32, "SetClassLongW");
}
void _elfimplib_SetClassLongW() {
asm("leave\njmp *%0" : : "r"(_imp__SetClassLongW));
}

