#include "kernel32.h"
void _elfimplib_SetTapePosition() asm("SetTapePosition");
void *_imp__SetTapePosition = NULL;
__attribute__((constructor)) void _elfimplib_init_SetTapePosition() {
load_dll_kernel32();
_imp__SetTapePosition = (void *) _elf_GetProcAddress(_dll_kernel32, "SetTapePosition");
}
void _elfimplib_SetTapePosition() {
asm("leave\njmp *%0" : : "r"(_imp__SetTapePosition));
}

