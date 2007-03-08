#include "kernel32.h"
void _elfimplib_PurgeComm() asm("PurgeComm");
void *_imp__PurgeComm = NULL;
__attribute__((constructor)) void _elfimplib_init_PurgeComm() {
load_dll_kernel32();
_imp__PurgeComm = (void *) _elf_GetProcAddress(_dll_kernel32, "PurgeComm");
}
void _elfimplib_PurgeComm() {
asm("leave\njmp *%0" : : "r"(_imp__PurgeComm));
}

