#include "kernel32.h"
void _elfimplib_CopyLZFile() asm("CopyLZFile");
void *_imp__CopyLZFile = NULL;
__attribute__((constructor)) void _elfimplib_init_CopyLZFile() {
load_dll_kernel32();
_imp__CopyLZFile = (void *) _elf_GetProcAddress(_dll_kernel32, "CopyLZFile");
}
void _elfimplib_CopyLZFile() {
asm("leave\njmp *%0" : : "r"(_imp__CopyLZFile));
}

