#include "kernel32.h"
void _elfimplib_OpenFile() asm("OpenFile");
void *_imp__OpenFile = NULL;
__attribute__((constructor)) void _elfimplib_init_OpenFile() {
load_dll_kernel32();
_imp__OpenFile = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenFile");
}
void _elfimplib_OpenFile() {
asm("leave\njmp *%0" : : "r"(_imp__OpenFile));
}

