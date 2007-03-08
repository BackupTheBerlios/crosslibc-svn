#include "kernel32.h"
void _elfimplib_Process32Next() asm("Process32Next");
void *_imp__Process32Next = NULL;
__attribute__((constructor)) void _elfimplib_init_Process32Next() {
load_dll_kernel32();
_imp__Process32Next = (void *) _elf_GetProcAddress(_dll_kernel32, "Process32Next");
}
void _elfimplib_Process32Next() {
asm("leave\njmp *%0" : : "r"(_imp__Process32Next));
}

