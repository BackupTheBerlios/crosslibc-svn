#include "kernel32.h"
void _elfimplib_LocalFileTimeToFileTime() asm("LocalFileTimeToFileTime");
void *_imp__LocalFileTimeToFileTime = NULL;
__attribute__((constructor)) void _elfimplib_init_LocalFileTimeToFileTime() {
load_dll_kernel32();
_imp__LocalFileTimeToFileTime = (void *) _elf_GetProcAddress(_dll_kernel32, "LocalFileTimeToFileTime");
}
void _elfimplib_LocalFileTimeToFileTime() {
asm("leave\njmp *%0" : : "r"(_imp__LocalFileTimeToFileTime));
}

