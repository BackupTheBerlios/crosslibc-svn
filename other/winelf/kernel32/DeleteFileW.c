#include "kernel32.h"
void _elfimplib_DeleteFileW() asm("DeleteFileW");
void *_imp__DeleteFileW = NULL;
__attribute__((constructor)) void _elfimplib_init_DeleteFileW() {
load_dll_kernel32();
_imp__DeleteFileW = (void *) _elf_GetProcAddress(_dll_kernel32, "DeleteFileW");
}
void _elfimplib_DeleteFileW() {
asm("leave\njmp *%0" : : "r"(_imp__DeleteFileW));
}

