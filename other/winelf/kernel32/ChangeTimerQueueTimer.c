#include "kernel32.h"
void _elfimplib_ChangeTimerQueueTimer() asm("ChangeTimerQueueTimer");
void *_imp__ChangeTimerQueueTimer = NULL;
__attribute__((constructor)) void _elfimplib_init_ChangeTimerQueueTimer() {
load_dll_kernel32();
_imp__ChangeTimerQueueTimer = (void *) _elf_GetProcAddress(_dll_kernel32, "ChangeTimerQueueTimer");
}
void _elfimplib_ChangeTimerQueueTimer() {
asm("leave\njmp *%0" : : "r"(_imp__ChangeTimerQueueTimer));
}

