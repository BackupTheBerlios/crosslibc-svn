#include "kernel32.h"
void _elfimplib_OpenDataFile() asm("OpenDataFile");
void *_imp__OpenDataFile = NULL;
__attribute__((constructor)) void _elfimplib_init_OpenDataFile() {
load_dll_kernel32();
_imp__OpenDataFile = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenDataFile");
}
void _elfimplib_OpenDataFile() {
asm("leave\njmp *%0" : : "r"(_imp__OpenDataFile));
}

