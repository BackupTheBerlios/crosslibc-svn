#include "kernel32.h"
void _elfimplib_DeleteTimerQueueTimer() asm("DeleteTimerQueueTimer");
void *_imp__DeleteTimerQueueTimer = NULL;
__attribute__((constructor)) void _elfimplib_init_DeleteTimerQueueTimer() {
load_dll_kernel32();
_imp__DeleteTimerQueueTimer = (void *) _elf_GetProcAddress(_dll_kernel32, "DeleteTimerQueueTimer");
}
void _elfimplib_DeleteTimerQueueTimer() {
asm("leave\njmp *%0" : : "r"(_imp__DeleteTimerQueueTimer));
}

