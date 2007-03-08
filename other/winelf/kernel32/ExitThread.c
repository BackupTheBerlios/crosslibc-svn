#include "kernel32.h"
void _elfimplib_ExitThread() asm("ExitThread");
void *_imp__ExitThread = NULL;
__attribute__((constructor)) void _elfimplib_init_ExitThread() {
load_dll_kernel32();
_imp__ExitThread = (void *) _elf_GetProcAddress(_dll_kernel32, "ExitThread");
}
void _elfimplib_ExitThread() {
asm("leave\njmp *%0" : : "r"(_imp__ExitThread));
}

