#include "kernel32.h"
void _elfimplib_Toolhelp32ReadProcessMemory() asm("Toolhelp32ReadProcessMemory");
void *_imp__Toolhelp32ReadProcessMemory = NULL;
__attribute__((constructor)) void _elfimplib_init_Toolhelp32ReadProcessMemory() {
load_dll_kernel32();
_imp__Toolhelp32ReadProcessMemory = (void *) _elf_GetProcAddress(_dll_kernel32, "Toolhelp32ReadProcessMemory");
}
void _elfimplib_Toolhelp32ReadProcessMemory() {
asm("leave\njmp *%0" : : "r"(_imp__Toolhelp32ReadProcessMemory));
}

