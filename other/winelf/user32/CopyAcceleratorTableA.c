#include "user32.h"
void _elfimplib_CopyAcceleratorTableA() asm("CopyAcceleratorTableA");
void *_imp__CopyAcceleratorTableA = NULL;
__attribute__((constructor)) void _elfimplib_init_CopyAcceleratorTableA() {
load_dll_user32();
_imp__CopyAcceleratorTableA = (void *) _elf_GetProcAddress(_dll_user32, "CopyAcceleratorTableA");
}
void _elfimplib_CopyAcceleratorTableA() {
asm("leave\njmp *%0" : : "r"(_imp__CopyAcceleratorTableA));
}

