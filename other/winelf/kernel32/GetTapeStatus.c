#include "kernel32.h"
void _elfimplib_GetTapeStatus() asm("GetTapeStatus");
void *_imp__GetTapeStatus = NULL;
__attribute__((constructor)) void _elfimplib_init_GetTapeStatus() {
load_dll_kernel32();
_imp__GetTapeStatus = (void *) _elf_GetProcAddress(_dll_kernel32, "GetTapeStatus");
}
void _elfimplib_GetTapeStatus() {
asm("leave\njmp *%0" : : "r"(_imp__GetTapeStatus));
}

