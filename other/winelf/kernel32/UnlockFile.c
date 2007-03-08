#include "kernel32.h"
void _elfimplib_UnlockFile() asm("UnlockFile");
void *_imp__UnlockFile = NULL;
__attribute__((constructor)) void _elfimplib_init_UnlockFile() {
load_dll_kernel32();
_imp__UnlockFile = (void *) _elf_GetProcAddress(_dll_kernel32, "UnlockFile");
}
void _elfimplib_UnlockFile() {
asm("leave\njmp *%0" : : "r"(_imp__UnlockFile));
}

