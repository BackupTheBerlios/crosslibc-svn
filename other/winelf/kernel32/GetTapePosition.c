#include "kernel32.h"
void _elfimplib_GetTapePosition() asm("GetTapePosition");
void *_imp__GetTapePosition = NULL;
__attribute__((constructor)) void _elfimplib_init_GetTapePosition() {
load_dll_kernel32();
_imp__GetTapePosition = (void *) _elf_GetProcAddress(_dll_kernel32, "GetTapePosition");
}
void _elfimplib_GetTapePosition() {
asm("leave\njmp *%0" : : "r"(_imp__GetTapePosition));
}

