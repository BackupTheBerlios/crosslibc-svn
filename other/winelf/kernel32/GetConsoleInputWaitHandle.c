#include "kernel32.h"
void _elfimplib_GetConsoleInputWaitHandle() asm("GetConsoleInputWaitHandle");
void *_imp__GetConsoleInputWaitHandle = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleInputWaitHandle() {
load_dll_kernel32();
_imp__GetConsoleInputWaitHandle = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleInputWaitHandle");
}
void _elfimplib_GetConsoleInputWaitHandle() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleInputWaitHandle));
}

