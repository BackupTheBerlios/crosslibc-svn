#include "kernel32.h"
void _elfimplib_GetCommandLineA() asm("GetCommandLineA");
void *_imp__GetCommandLineA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCommandLineA() {
load_dll_kernel32();
_imp__GetCommandLineA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCommandLineA");
}
void _elfimplib_GetCommandLineA() {
asm("leave\njmp *%0" : : "r"(_imp__GetCommandLineA));
}

