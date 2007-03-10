#include "user32.h"
void _elfimplib_GetWindowTextW() asm("GetWindowTextW");
void *_imp__GetWindowTextW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetWindowTextW() {
load_dll_user32();
_imp__GetWindowTextW = (void *) _elf_GetProcAddress(_dll_user32, "GetWindowTextW");
}
void _elfimplib_GetWindowTextW() {
asm("leave\njmp *%0" : : "r"(_imp__GetWindowTextW));
}

