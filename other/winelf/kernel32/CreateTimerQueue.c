#include "kernel32.h"
void _elfimplib_CreateTimerQueue() asm("CreateTimerQueue");
void *_imp__CreateTimerQueue = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateTimerQueue() {
load_dll_kernel32();
_imp__CreateTimerQueue = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateTimerQueue");
}
void _elfimplib_CreateTimerQueue() {
asm("leave\njmp *%0" : : "r"(_imp__CreateTimerQueue));
}

