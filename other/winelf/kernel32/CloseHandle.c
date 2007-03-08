#include "kernel32.h"
void _elfimplib_CloseHandle() asm("CloseHandle");
void *_imp__CloseHandle = NULL;
__attribute__((constructor)) void _elfimplib_init_CloseHandle() {
load_dll_kernel32();
_imp__CloseHandle = (void *) _elf_GetProcAddress(_dll_kernel32, "CloseHandle");
}
void _elfimplib_CloseHandle() {
asm("leave\njmp *%0" : : "r"(_imp__CloseHandle));
}

