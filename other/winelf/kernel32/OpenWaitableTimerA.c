#include "kernel32.h"
void _elfimplib_OpenWaitableTimerA() asm("OpenWaitableTimerA");
void *_imp__OpenWaitableTimerA = NULL;
__attribute__((constructor)) void _elfimplib_init_OpenWaitableTimerA() {
load_dll_kernel32();
_imp__OpenWaitableTimerA = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenWaitableTimerA");
}
void _elfimplib_OpenWaitableTimerA() {
asm("leave\njmp *%0" : : "r"(_imp__OpenWaitableTimerA));
}

