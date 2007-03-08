#include "kernel32.h"
void _elfimplib_SetTimerQueueTimer() asm("SetTimerQueueTimer");
void *_imp__SetTimerQueueTimer = NULL;
__attribute__((constructor)) void _elfimplib_init_SetTimerQueueTimer() {
load_dll_kernel32();
_imp__SetTimerQueueTimer = (void *) _elf_GetProcAddress(_dll_kernel32, "SetTimerQueueTimer");
}
void _elfimplib_SetTimerQueueTimer() {
asm("leave\njmp *%0" : : "r"(_imp__SetTimerQueueTimer));
}

