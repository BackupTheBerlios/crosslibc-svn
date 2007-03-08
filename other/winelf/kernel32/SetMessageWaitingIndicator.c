#include "kernel32.h"
void _elfimplib_SetMessageWaitingIndicator() asm("SetMessageWaitingIndicator");
void *_imp__SetMessageWaitingIndicator = NULL;
__attribute__((constructor)) void _elfimplib_init_SetMessageWaitingIndicator() {
load_dll_kernel32();
_imp__SetMessageWaitingIndicator = (void *) _elf_GetProcAddress(_dll_kernel32, "SetMessageWaitingIndicator");
}
void _elfimplib_SetMessageWaitingIndicator() {
asm("leave\njmp *%0" : : "r"(_imp__SetMessageWaitingIndicator));
}

