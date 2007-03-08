#include "kernel32.h"
void _elfimplib_GetUserDefaultLCID() asm("GetUserDefaultLCID");
void *_imp__GetUserDefaultLCID = NULL;
__attribute__((constructor)) void _elfimplib_init_GetUserDefaultLCID() {
load_dll_kernel32();
_imp__GetUserDefaultLCID = (void *) _elf_GetProcAddress(_dll_kernel32, "GetUserDefaultLCID");
}
void _elfimplib_GetUserDefaultLCID() {
asm("leave\njmp *%0" : : "r"(_imp__GetUserDefaultLCID));
}

