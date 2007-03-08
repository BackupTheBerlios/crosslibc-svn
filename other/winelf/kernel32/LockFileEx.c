#include "kernel32.h"
void _elfimplib_LockFileEx() asm("LockFileEx");
void *_imp__LockFileEx = NULL;
__attribute__((constructor)) void _elfimplib_init_LockFileEx() {
load_dll_kernel32();
_imp__LockFileEx = (void *) _elf_GetProcAddress(_dll_kernel32, "LockFileEx");
}
void _elfimplib_LockFileEx() {
asm("leave\njmp *%0" : : "r"(_imp__LockFileEx));
}

