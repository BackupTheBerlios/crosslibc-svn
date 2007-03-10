#include "user32.h"
void _elfimplib_LoadAcceleratorsA() asm("LoadAcceleratorsA");
void *_imp__LoadAcceleratorsA = NULL;
__attribute__((constructor)) void _elfimplib_init_LoadAcceleratorsA() {
load_dll_user32();
_imp__LoadAcceleratorsA = (void *) _elf_GetProcAddress(_dll_user32, "LoadAcceleratorsA");
}
void _elfimplib_LoadAcceleratorsA() {
asm("leave\njmp *%0" : : "r"(_imp__LoadAcceleratorsA));
}

