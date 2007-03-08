#include "kernel32.h"
void _elfimplib_CommConfigDialogA() asm("CommConfigDialogA");
void *_imp__CommConfigDialogA = NULL;
__attribute__((constructor)) void _elfimplib_init_CommConfigDialogA() {
load_dll_kernel32();
_imp__CommConfigDialogA = (void *) _elf_GetProcAddress(_dll_kernel32, "CommConfigDialogA");
}
void _elfimplib_CommConfigDialogA() {
asm("leave\njmp *%0" : : "r"(_imp__CommConfigDialogA));
}

