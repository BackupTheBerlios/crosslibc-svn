#include "kernel32.h"
void _elfimplib_GlobalWire() asm("GlobalWire");
void *_imp__GlobalWire = NULL;
__attribute__((constructor)) void _elfimplib_init_GlobalWire() {
load_dll_kernel32();
_imp__GlobalWire = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalWire");
}
void _elfimplib_GlobalWire() {
asm("leave\njmp *%0" : : "r"(_imp__GlobalWire));
}

