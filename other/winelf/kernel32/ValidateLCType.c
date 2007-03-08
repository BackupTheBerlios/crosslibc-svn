#include "kernel32.h"
void _elfimplib_ValidateLCType() asm("ValidateLCType");
void *_imp__ValidateLCType = NULL;
__attribute__((constructor)) void _elfimplib_init_ValidateLCType() {
load_dll_kernel32();
_imp__ValidateLCType = (void *) _elf_GetProcAddress(_dll_kernel32, "ValidateLCType");
}
void _elfimplib_ValidateLCType() {
asm("leave\njmp *%0" : : "r"(_imp__ValidateLCType));
}

