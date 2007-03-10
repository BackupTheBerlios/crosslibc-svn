#include "user32.h"
void _elfimplib_LoadAcceleratorsW() asm("LoadAcceleratorsW");
void *_imp__LoadAcceleratorsW = NULL;
__attribute__((constructor)) void _elfimplib_init_LoadAcceleratorsW() {
load_dll_user32();
_imp__LoadAcceleratorsW = (void *) _elf_GetProcAddress(_dll_user32, "LoadAcceleratorsW");
}
void _elfimplib_LoadAcceleratorsW() {
asm("leave\njmp *%0" : : "r"(_imp__LoadAcceleratorsW));
}

