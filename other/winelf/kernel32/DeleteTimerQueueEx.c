#include "kernel32.h"
void _elfimplib_DeleteTimerQueueEx() asm("DeleteTimerQueueEx");
void *_imp__DeleteTimerQueueEx = NULL;
__attribute__((constructor)) void _elfimplib_init_DeleteTimerQueueEx() {
load_dll_kernel32();
_imp__DeleteTimerQueueEx = (void *) _elf_GetProcAddress(_dll_kernel32, "DeleteTimerQueueEx");
}
void _elfimplib_DeleteTimerQueueEx() {
asm("leave\njmp *%0" : : "r"(_imp__DeleteTimerQueueEx));
}

