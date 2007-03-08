#include "kernel32.h"
void _elfimplib_CreateWaitableTimerA() asm("CreateWaitableTimerA");
void *_imp__CreateWaitableTimerA = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateWaitableTimerA() {
load_dll_kernel32();
_imp__CreateWaitableTimerA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateWaitableTimerA");
}
void _elfimplib_CreateWaitableTimerA() {
asm("leave\njmp *%0" : : "r"(_imp__CreateWaitableTimerA));
}

