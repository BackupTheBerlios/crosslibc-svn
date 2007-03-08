#include "kernel32.h"
void _elfimplib_WriteFile() asm("WriteFile");
void *_imp__WriteFile = NULL;
__attribute__((constructor)) void _elfimplib_init_WriteFile() {
load_dll_kernel32();
_imp__WriteFile = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteFile");
}
void _elfimplib_WriteFile() {
asm("leave\njmp *%0" : : "r"(_imp__WriteFile));
}

