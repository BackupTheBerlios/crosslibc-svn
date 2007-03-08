#include "kernel32.h"
void _elfimplib_ReadDirectoryChangesW() asm("ReadDirectoryChangesW");
void *_imp__ReadDirectoryChangesW = NULL;
__attribute__((constructor)) void _elfimplib_init_ReadDirectoryChangesW() {
load_dll_kernel32();
_imp__ReadDirectoryChangesW = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadDirectoryChangesW");
}
void _elfimplib_ReadDirectoryChangesW() {
asm("leave\njmp *%0" : : "r"(_imp__ReadDirectoryChangesW));
}

