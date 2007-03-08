#include "kernel32.h"
void _elfimplib_DeleteTimerQueue() asm("DeleteTimerQueue");
void *_imp__DeleteTimerQueue = NULL;
__attribute__((constructor)) void _elfimplib_init_DeleteTimerQueue() {
load_dll_kernel32();
_imp__DeleteTimerQueue = (void *) _elf_GetProcAddress(_dll_kernel32, "DeleteTimerQueue");
}
void _elfimplib_DeleteTimerQueue() {
asm("leave\njmp *%0" : : "r"(_imp__DeleteTimerQueue));
}

