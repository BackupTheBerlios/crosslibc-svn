#include "kernel32.h"
void _elfimplib_InvalidateConsoleDIBits() asm("InvalidateConsoleDIBits");
void *_imp__InvalidateConsoleDIBits = NULL;
__attribute__((constructor)) void _elfimplib_init_InvalidateConsoleDIBits() {
load_dll_kernel32();
_imp__InvalidateConsoleDIBits = (void *) _elf_GetProcAddress(_dll_kernel32, "InvalidateConsoleDIBits");
}
void _elfimplib_InvalidateConsoleDIBits() {
asm("leave\njmp *%0" : : "r"(_imp__InvalidateConsoleDIBits));
}

