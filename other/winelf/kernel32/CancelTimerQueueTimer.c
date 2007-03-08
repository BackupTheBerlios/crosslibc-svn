#include "kernel32.h"
void _elfimplib_CancelTimerQueueTimer() asm("CancelTimerQueueTimer");
void *_imp__CancelTimerQueueTimer = NULL;
__attribute__((constructor)) void _elfimplib_init_CancelTimerQueueTimer() {
load_dll_kernel32();
_imp__CancelTimerQueueTimer = (void *) _elf_GetProcAddress(_dll_kernel32, "CancelTimerQueueTimer");
}
void _elfimplib_CancelTimerQueueTimer() {
asm("leave\njmp *%0" : : "r"(_imp__CancelTimerQueueTimer));
}

