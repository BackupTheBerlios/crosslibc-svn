#include "kernel32.h"
void _elfimplib_LockFile() asm("LockFile");
void *_imp__LockFile = NULL;
__attribute__((constructor)) void _elfimplib_init_LockFile() {
load_dll_kernel32();
_imp__LockFile = (void *) _elf_GetProcAddress(_dll_kernel32, "LockFile");
}
void _elfimplib_LockFile() {
asm("leave\njmp *%0" : : "r"(_imp__LockFile));
}

