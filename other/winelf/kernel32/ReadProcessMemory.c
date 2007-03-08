#include "kernel32.h"
void _elfimplib_ReadProcessMemory() asm("ReadProcessMemory");
void *_imp__ReadProcessMemory = NULL;
__attribute__((constructor)) void _elfimplib_init_ReadProcessMemory() {
load_dll_kernel32();
_imp__ReadProcessMemory = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadProcessMemory");
}
void _elfimplib_ReadProcessMemory() {
asm("leave\njmp *%0" : : "r"(_imp__ReadProcessMemory));
}

