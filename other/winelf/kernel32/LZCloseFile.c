#include "kernel32.h"
void _elfimplib_LZCloseFile() asm("LZCloseFile");
void *_imp__LZCloseFile = NULL;
__attribute__((constructor)) void _elfimplib_init_LZCloseFile() {
load_dll_kernel32();
_imp__LZCloseFile = (void *) _elf_GetProcAddress(_dll_kernel32, "LZCloseFile");
}
void _elfimplib_LZCloseFile() {
asm("leave\njmp *%0" : : "r"(_imp__LZCloseFile));
}

