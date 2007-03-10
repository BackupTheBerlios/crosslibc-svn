#include "user32.h"
void _elfimplib_CreateAcceleratorTableA() asm("CreateAcceleratorTableA");
void *_imp__CreateAcceleratorTableA = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateAcceleratorTableA() {
load_dll_user32();
_imp__CreateAcceleratorTableA = (void *) _elf_GetProcAddress(_dll_user32, "CreateAcceleratorTableA");
}
void _elfimplib_CreateAcceleratorTableA() {
asm("leave\njmp *%0" : : "r"(_imp__CreateAcceleratorTableA));
}

