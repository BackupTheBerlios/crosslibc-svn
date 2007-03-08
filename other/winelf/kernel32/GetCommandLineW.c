#include "kernel32.h"
void _elfimplib_GetCommandLineW() asm("GetCommandLineW");
void *_imp__GetCommandLineW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCommandLineW() {
load_dll_kernel32();
_imp__GetCommandLineW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCommandLineW");
}
void _elfimplib_GetCommandLineW() {
asm("leave\njmp *%0" : : "r"(_imp__GetCommandLineW));
}

