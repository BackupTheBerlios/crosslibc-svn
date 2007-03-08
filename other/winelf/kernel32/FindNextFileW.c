#include "kernel32.h"
void _elfimplib_FindNextFileW() asm("FindNextFileW");
void *_imp__FindNextFileW = NULL;
__attribute__((constructor)) void _elfimplib_init_FindNextFileW() {
load_dll_kernel32();
_imp__FindNextFileW = (void *) _elf_GetProcAddress(_dll_kernel32, "FindNextFileW");
}
void _elfimplib_FindNextFileW() {
asm("leave\njmp *%0" : : "r"(_imp__FindNextFileW));
}

