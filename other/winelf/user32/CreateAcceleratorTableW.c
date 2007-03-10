#include "user32.h"
void _elfimplib_CreateAcceleratorTableW() asm("CreateAcceleratorTableW");
void *_imp__CreateAcceleratorTableW = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateAcceleratorTableW() {
load_dll_user32();
_imp__CreateAcceleratorTableW = (void *) _elf_GetProcAddress(_dll_user32, "CreateAcceleratorTableW");
}
void _elfimplib_CreateAcceleratorTableW() {
asm("leave\njmp *%0" : : "r"(_imp__CreateAcceleratorTableW));
}

