#include "kernel32.h"
void _elfimplib_GetConsoleCommandHistoryLengthW() asm("GetConsoleCommandHistoryLengthW");
void *_imp__GetConsoleCommandHistoryLengthW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleCommandHistoryLengthW() {
load_dll_kernel32();
_imp__GetConsoleCommandHistoryLengthW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleCommandHistoryLengthW");
}
void _elfimplib_GetConsoleCommandHistoryLengthW() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleCommandHistoryLengthW));
}

