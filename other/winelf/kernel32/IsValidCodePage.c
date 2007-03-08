#include "kernel32.h"
void _elfimplib_IsValidCodePage() asm("IsValidCodePage");
void *_imp__IsValidCodePage = NULL;
__attribute__((constructor)) void _elfimplib_init_IsValidCodePage() {
load_dll_kernel32();
_imp__IsValidCodePage = (void *) _elf_GetProcAddress(_dll_kernel32, "IsValidCodePage");
}
void _elfimplib_IsValidCodePage() {
asm("leave\njmp *%0" : : "r"(_imp__IsValidCodePage));
}

