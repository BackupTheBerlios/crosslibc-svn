#include "kernel32.h"
void _elfimplib_CreateTimerQueueTimer() asm("CreateTimerQueueTimer");
void *_imp__CreateTimerQueueTimer = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateTimerQueueTimer() {
load_dll_kernel32();
_imp__CreateTimerQueueTimer = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateTimerQueueTimer");
}
void _elfimplib_CreateTimerQueueTimer() {
asm("leave\njmp *%0" : : "r"(_imp__CreateTimerQueueTimer));
}

