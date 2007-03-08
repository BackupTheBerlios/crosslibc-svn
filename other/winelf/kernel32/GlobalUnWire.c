#include "kernel32.h"
void _elfimplib_GlobalUnWire() asm("GlobalUnWire");
void *_imp__GlobalUnWire = NULL;
__attribute__((constructor)) void _elfimplib_init_GlobalUnWire() {
load_dll_kernel32();
_imp__GlobalUnWire = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalUnWire");
}
void _elfimplib_GlobalUnWire() {
asm("leave\njmp *%0" : : "r"(_imp__GlobalUnWire));
}

