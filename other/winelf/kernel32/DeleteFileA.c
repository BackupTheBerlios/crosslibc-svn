#include "kernel32.h"
void _elfimplib_DeleteFileA() asm("DeleteFileA");
void *_imp__DeleteFileA = NULL;
__attribute__((constructor)) void _elfimplib_init_DeleteFileA() {
load_dll_kernel32();
_imp__DeleteFileA = (void *) _elf_GetProcAddress(_dll_kernel32, "DeleteFileA");
}
void _elfimplib_DeleteFileA() {
asm("leave\njmp *%0" : : "r"(_imp__DeleteFileA));
}

