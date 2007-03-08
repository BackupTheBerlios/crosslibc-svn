#include "kernel32.h"
void _elfimplib_GetQueuedCompletionStatus() asm("GetQueuedCompletionStatus");
void *_imp__GetQueuedCompletionStatus = NULL;
__attribute__((constructor)) void _elfimplib_init_GetQueuedCompletionStatus() {
load_dll_kernel32();
_imp__GetQueuedCompletionStatus = (void *) _elf_GetProcAddress(_dll_kernel32, "GetQueuedCompletionStatus");
}
void _elfimplib_GetQueuedCompletionStatus() {
asm("leave\njmp *%0" : : "r"(_imp__GetQueuedCompletionStatus));
}

