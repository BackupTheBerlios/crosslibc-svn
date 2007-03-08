#include "kernel32.h"
void _elfimplib_GetSystemDefaultLCID() asm("GetSystemDefaultLCID");
void *_imp__GetSystemDefaultLCID = NULL;
__attribute__((constructor)) void _elfimplib_init_GetSystemDefaultLCID() {
load_dll_kernel32();
_imp__GetSystemDefaultLCID = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemDefaultLCID");
}
void _elfimplib_GetSystemDefaultLCID() {
asm("leave\njmp *%0" : : "r"(_imp__GetSystemDefaultLCID));
}

