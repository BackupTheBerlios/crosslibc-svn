#include "kernel32.h"
void _elfimplib_SetTapeParameters() asm("SetTapeParameters");
void *_imp__SetTapeParameters = NULL;
__attribute__((constructor)) void _elfimplib_init_SetTapeParameters() {
load_dll_kernel32();
_imp__SetTapeParameters = (void *) _elf_GetProcAddress(_dll_kernel32, "SetTapeParameters");
}
void _elfimplib_SetTapeParameters() {
asm("leave\njmp *%0" : : "r"(_imp__SetTapeParameters));
}

