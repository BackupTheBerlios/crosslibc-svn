#include "kernel32.h"
void _elfimplib_CreateTapePartition() asm("CreateTapePartition");
void *_imp__CreateTapePartition = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateTapePartition() {
load_dll_kernel32();
_imp__CreateTapePartition = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateTapePartition");
}
void _elfimplib_CreateTapePartition() {
asm("leave\njmp *%0" : : "r"(_imp__CreateTapePartition));
}

