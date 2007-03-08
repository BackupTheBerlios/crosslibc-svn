#include "kernel32.h"
void _elfimplib_PostQueuedCompletionStatus() asm("PostQueuedCompletionStatus");
void *_imp__PostQueuedCompletionStatus = NULL;
__attribute__((constructor)) void _elfimplib_init_PostQueuedCompletionStatus() {
load_dll_kernel32();
_imp__PostQueuedCompletionStatus = (void *) _elf_GetProcAddress(_dll_kernel32, "PostQueuedCompletionStatus");
}
void _elfimplib_PostQueuedCompletionStatus() {
asm("leave\njmp *%0" : : "r"(_imp__PostQueuedCompletionStatus));
}

