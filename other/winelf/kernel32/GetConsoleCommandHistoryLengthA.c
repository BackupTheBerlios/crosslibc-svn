#include "kernel32.h"
void _elfimplib_GetConsoleCommandHistoryLengthA() asm("GetConsoleCommandHistoryLengthA");
void *_imp__GetConsoleCommandHistoryLengthA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleCommandHistoryLengthA() {
load_dll_kernel32();
_imp__GetConsoleCommandHistoryLengthA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleCommandHistoryLengthA");
}
void _elfimplib_GetConsoleCommandHistoryLengthA() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleCommandHistoryLengthA));
}

