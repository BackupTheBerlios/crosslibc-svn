#include "user32.h"
void _elfimplib_GetWindowInfo() asm("GetWindowInfo");
void *_imp__GetWindowInfo = NULL;
__attribute__((constructor)) void _elfimplib_init_GetWindowInfo() {
load_dll_user32();
_imp__GetWindowInfo = (void *) _elf_GetProcAddress(_dll_user32, "GetWindowInfo");
}
void _elfimplib_GetWindowInfo() {
asm("leave\njmp *%0" : : "r"(_imp__GetWindowInfo));
}

