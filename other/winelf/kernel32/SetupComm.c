#include "kernel32.h"
void _elfimplib_SetupComm() asm("SetupComm");
void *_imp__SetupComm = NULL;
__attribute__((constructor)) void _elfimplib_init_SetupComm() {
load_dll_kernel32();
_imp__SetupComm = (void *) _elf_GetProcAddress(_dll_kernel32, "SetupComm");
}
void _elfimplib_SetupComm() {
asm("leave\njmp *%0" : : "r"(_imp__SetupComm));
}

