#include "kernel32.h"
void _elfimplib_GetTapeParameters() asm("GetTapeParameters");
void *_imp__GetTapeParameters = NULL;
__attribute__((constructor)) void _elfimplib_init_GetTapeParameters() {
load_dll_kernel32();
_imp__GetTapeParameters = (void *) _elf_GetProcAddress(_dll_kernel32, "GetTapeParameters");
}
void _elfimplib_GetTapeParameters() {
asm("leave\njmp *%0" : : "r"(_imp__GetTapeParameters));
}

