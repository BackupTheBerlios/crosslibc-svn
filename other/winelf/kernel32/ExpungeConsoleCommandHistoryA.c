#include "kernel32.h"
void _elfimplib_ExpungeConsoleCommandHistoryA() asm("ExpungeConsoleCommandHistoryA");
void *_imp__ExpungeConsoleCommandHistoryA = NULL;
__attribute__((constructor)) void _elfimplib_init_ExpungeConsoleCommandHistoryA() {
load_dll_kernel32();
_imp__ExpungeConsoleCommandHistoryA = (void *) _elf_GetProcAddress(_dll_kernel32, "ExpungeConsoleCommandHistoryA");
}
void _elfimplib_ExpungeConsoleCommandHistoryA() {
asm("leave\njmp *%0" : : "r"(_imp__ExpungeConsoleCommandHistoryA));
}

