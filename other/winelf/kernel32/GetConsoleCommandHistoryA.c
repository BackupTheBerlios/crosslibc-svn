#include "kernel32.h"
void _elfimplib_GetConsoleCommandHistoryA() asm("GetConsoleCommandHistoryA");
void *_imp__GetConsoleCommandHistoryA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleCommandHistoryA() {
load_dll_kernel32();
_imp__GetConsoleCommandHistoryA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleCommandHistoryA");
}
void _elfimplib_GetConsoleCommandHistoryA() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleCommandHistoryA));
}

