#include "kernel32.h"
void _elfimplib_SetHandleInformation() asm("SetHandleInformation");
void *_imp__SetHandleInformation = NULL;
__attribute__((constructor)) void _elfimplib_init_SetHandleInformation() {
load_dll_kernel32();
_imp__SetHandleInformation = (void *) _elf_GetProcAddress(_dll_kernel32, "SetHandleInformation");
}
void _elfimplib_SetHandleInformation() {
asm("leave\njmp *%0" : : "r"(_imp__SetHandleInformation));
}

