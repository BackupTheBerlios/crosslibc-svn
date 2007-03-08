#include "kernel32.h"
void _elfimplib_GetDefaultSortkeySize() asm("GetDefaultSortkeySize");
void *_imp__GetDefaultSortkeySize = NULL;
__attribute__((constructor)) void _elfimplib_init_GetDefaultSortkeySize() {
load_dll_kernel32();
_imp__GetDefaultSortkeySize = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDefaultSortkeySize");
}
void _elfimplib_GetDefaultSortkeySize() {
asm("leave\njmp *%0" : : "r"(_imp__GetDefaultSortkeySize));
}

