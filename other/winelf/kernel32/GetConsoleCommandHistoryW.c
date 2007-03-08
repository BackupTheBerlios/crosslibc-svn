#include "kernel32.h"
void _elfimplib_GetConsoleCommandHistoryW() asm("GetConsoleCommandHistoryW");
void *_imp__GetConsoleCommandHistoryW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleCommandHistoryW() {
load_dll_kernel32();
_imp__GetConsoleCommandHistoryW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleCommandHistoryW");
}
void _elfimplib_GetConsoleCommandHistoryW() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleCommandHistoryW));
}

