#include "kernel32.h"
void _elfimplib_GetConsoleProcessList() asm("GetConsoleProcessList");
void *_imp__GetConsoleProcessList = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleProcessList() {
load_dll_kernel32();
_imp__GetConsoleProcessList = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleProcessList");
}
void _elfimplib_GetConsoleProcessList() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleProcessList));
}

