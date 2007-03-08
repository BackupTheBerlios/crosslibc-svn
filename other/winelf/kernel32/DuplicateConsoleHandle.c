#include "kernel32.h"
void _elfimplib_DuplicateConsoleHandle() asm("DuplicateConsoleHandle");
void *_imp__DuplicateConsoleHandle = NULL;
__attribute__((constructor)) void _elfimplib_init_DuplicateConsoleHandle() {
load_dll_kernel32();
_imp__DuplicateConsoleHandle = (void *) _elf_GetProcAddress(_dll_kernel32, "DuplicateConsoleHandle");
}
void _elfimplib_DuplicateConsoleHandle() {
asm("leave\njmp *%0" : : "r"(_imp__DuplicateConsoleHandle));
}

