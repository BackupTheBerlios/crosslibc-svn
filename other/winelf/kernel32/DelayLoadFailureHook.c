#include "kernel32.h"
void _elfimplib_DelayLoadFailureHook() asm("DelayLoadFailureHook");
void *_imp__DelayLoadFailureHook = NULL;
__attribute__((constructor)) void _elfimplib_init_DelayLoadFailureHook() {
load_dll_kernel32();
_imp__DelayLoadFailureHook = (void *) _elf_GetProcAddress(_dll_kernel32, "DelayLoadFailureHook");
}
void _elfimplib_DelayLoadFailureHook() {
asm("leave\njmp *%0" : : "r"(_imp__DelayLoadFailureHook));
}

