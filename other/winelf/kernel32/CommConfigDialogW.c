#include "kernel32.h"
void _elfimplib_CommConfigDialogW() asm("CommConfigDialogW");
void *_imp__CommConfigDialogW = NULL;
__attribute__((constructor)) void _elfimplib_init_CommConfigDialogW() {
load_dll_kernel32();
_imp__CommConfigDialogW = (void *) _elf_GetProcAddress(_dll_kernel32, "CommConfigDialogW");
}
void _elfimplib_CommConfigDialogW() {
asm("leave\njmp *%0" : : "r"(_imp__CommConfigDialogW));
}

