#include "user32.h"
void _elfimplib_CopyAcceleratorTableW() asm("CopyAcceleratorTableW");
void *_imp__CopyAcceleratorTableW = NULL;
__attribute__((constructor)) void _elfimplib_init_CopyAcceleratorTableW() {
load_dll_user32();
_imp__CopyAcceleratorTableW = (void *) _elf_GetProcAddress(_dll_user32, "CopyAcceleratorTableW");
}
void _elfimplib_CopyAcceleratorTableW() {
asm("leave\njmp *%0" : : "r"(_imp__CopyAcceleratorTableW));
}

