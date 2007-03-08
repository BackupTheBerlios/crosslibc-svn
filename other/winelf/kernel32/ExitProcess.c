#include "kernel32.h"
void _elfimplib_ExitProcess() asm("ExitProcess");
void *_imp__ExitProcess = NULL;
__attribute__((constructor)) void _elfimplib_init_ExitProcess() {
load_dll_kernel32();
_imp__ExitProcess = (void *) _elf_GetProcAddress(_dll_kernel32, "ExitProcess");
}
void _elfimplib_ExitProcess() {
asm("leave\njmp *%0" : : "r"(_imp__ExitProcess));
}

