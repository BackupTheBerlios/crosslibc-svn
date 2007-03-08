#include "kernel32.h"
void _elfimplib_VerifyConsoleIoHandle() asm("VerifyConsoleIoHandle");
void *_imp__VerifyConsoleIoHandle = NULL;
__attribute__((constructor)) void _elfimplib_init_VerifyConsoleIoHandle() {
load_dll_kernel32();
_imp__VerifyConsoleIoHandle = (void *) _elf_GetProcAddress(_dll_kernel32, "VerifyConsoleIoHandle");
}
void _elfimplib_VerifyConsoleIoHandle() {
asm("leave\njmp *%0" : : "r"(_imp__VerifyConsoleIoHandle));
}

