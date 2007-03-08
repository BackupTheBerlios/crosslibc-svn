#include "kernel32.h"
void _elfimplib_CreateWaitableTimerW() asm("CreateWaitableTimerW");
void *_imp__CreateWaitableTimerW = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateWaitableTimerW() {
load_dll_kernel32();
_imp__CreateWaitableTimerW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateWaitableTimerW");
}
void _elfimplib_CreateWaitableTimerW() {
asm("leave\njmp *%0" : : "r"(_imp__CreateWaitableTimerW));
}

