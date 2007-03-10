#include "user32.h"
void _elfimplib_DdeCmpStringHandles() asm("DdeCmpStringHandles");
void *_imp__DdeCmpStringHandles = NULL;
__attribute__((constructor)) void _elfimplib_init_DdeCmpStringHandles() {
load_dll_user32();
_imp__DdeCmpStringHandles = (void *) _elf_GetProcAddress(_dll_user32, "DdeCmpStringHandles");
}
void _elfimplib_DdeCmpStringHandles() {
asm("leave\njmp *%0" : : "r"(_imp__DdeCmpStringHandles));
}

