#include "user32.h"
void _elfimplib_GetWindowLongW() asm("GetWindowLongW");
void *_imp__GetWindowLongW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetWindowLongW() {
load_dll_user32();
_imp__GetWindowLongW = (void *) _elf_GetProcAddress(_dll_user32, "GetWindowLongW");
}
void _elfimplib_GetWindowLongW() {
asm("leave\njmp *%0" : : "r"(_imp__GetWindowLongW));
}

