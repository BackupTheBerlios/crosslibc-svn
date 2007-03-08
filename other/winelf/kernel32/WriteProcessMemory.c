#include "kernel32.h"
void _elfimplib_WriteProcessMemory() asm("WriteProcessMemory");
void *_imp__WriteProcessMemory = NULL;
__attribute__((constructor)) void _elfimplib_init_WriteProcessMemory() {
load_dll_kernel32();
_imp__WriteProcessMemory = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteProcessMemory");
}
void _elfimplib_WriteProcessMemory() {
asm("leave\njmp *%0" : : "r"(_imp__WriteProcessMemory));
}

