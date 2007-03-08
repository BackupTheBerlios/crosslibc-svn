#include "kernel32.h"
void _elfimplib_CreateToolhelp32Snapshot() asm("CreateToolhelp32Snapshot");
void *_imp__CreateToolhelp32Snapshot = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateToolhelp32Snapshot() {
load_dll_kernel32();
_imp__CreateToolhelp32Snapshot = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateToolhelp32Snapshot");
}
void _elfimplib_CreateToolhelp32Snapshot() {
asm("leave\njmp *%0" : : "r"(_imp__CreateToolhelp32Snapshot));
}

