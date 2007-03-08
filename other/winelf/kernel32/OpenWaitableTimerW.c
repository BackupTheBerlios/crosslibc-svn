#include "kernel32.h"
void _elfimplib_OpenWaitableTimerW() asm("OpenWaitableTimerW");
void *_imp__OpenWaitableTimerW = NULL;
__attribute__((constructor)) void _elfimplib_init_OpenWaitableTimerW() {
load_dll_kernel32();
_imp__OpenWaitableTimerW = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenWaitableTimerW");
}
void _elfimplib_OpenWaitableTimerW() {
asm("leave\njmp *%0" : : "r"(_imp__OpenWaitableTimerW));
}

