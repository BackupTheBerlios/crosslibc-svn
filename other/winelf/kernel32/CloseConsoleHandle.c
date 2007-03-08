#include "kernel32.h"
void _elfimplib_CloseConsoleHandle() asm("CloseConsoleHandle");
void *_imp__CloseConsoleHandle = NULL;
__attribute__((constructor)) void _elfimplib_init_CloseConsoleHandle() {
load_dll_kernel32();
_imp__CloseConsoleHandle = (void *) _elf_GetProcAddress(_dll_kernel32, "CloseConsoleHandle");
}
void _elfimplib_CloseConsoleHandle() {
asm("leave\njmp *%0" : : "r"(_imp__CloseConsoleHandle));
}

