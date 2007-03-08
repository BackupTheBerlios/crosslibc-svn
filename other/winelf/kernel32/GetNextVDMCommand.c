#include "kernel32.h"
void _elfimplib_GetNextVDMCommand() asm("GetNextVDMCommand");
void *_imp__GetNextVDMCommand = NULL;
__attribute__((constructor)) void _elfimplib_init_GetNextVDMCommand() {
load_dll_kernel32();
_imp__GetNextVDMCommand = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNextVDMCommand");
}
void _elfimplib_GetNextVDMCommand() {
asm("leave\njmp *%0" : : "r"(_imp__GetNextVDMCommand));
}

