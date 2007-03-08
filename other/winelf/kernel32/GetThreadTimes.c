#include "kernel32.h"
void _elfimplib_GetThreadTimes() asm("GetThreadTimes");
void *_imp__GetThreadTimes = NULL;
__attribute__((constructor)) void _elfimplib_init_GetThreadTimes() {
load_dll_kernel32();
_imp__GetThreadTimes = (void *) _elf_GetProcAddress(_dll_kernel32, "GetThreadTimes");
}
void _elfimplib_GetThreadTimes() {
asm("leave\njmp *%0" : : "r"(_imp__GetThreadTimes));
}

