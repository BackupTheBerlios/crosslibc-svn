#include "kernel32.h"
void _elfimplib_ProcessIdToSessionId() asm("ProcessIdToSessionId");
void *_imp__ProcessIdToSessionId = NULL;
__attribute__((constructor)) void _elfimplib_init_ProcessIdToSessionId() {
load_dll_kernel32();
_imp__ProcessIdToSessionId = (void *) _elf_GetProcAddress(_dll_kernel32, "ProcessIdToSessionId");
}
void _elfimplib_ProcessIdToSessionId() {
asm("leave\njmp *%0" : : "r"(_imp__ProcessIdToSessionId));
}

