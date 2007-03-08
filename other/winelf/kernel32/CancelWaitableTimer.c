#include "kernel32.h"
void _elfimplib_CancelWaitableTimer() asm("CancelWaitableTimer");
void *_imp__CancelWaitableTimer = NULL;
__attribute__((constructor)) void _elfimplib_init_CancelWaitableTimer() {
load_dll_kernel32();
_imp__CancelWaitableTimer = (void *) _elf_GetProcAddress(_dll_kernel32, "CancelWaitableTimer");
}
void _elfimplib_CancelWaitableTimer() {
asm("leave\njmp *%0" : : "r"(_imp__CancelWaitableTimer));
}

