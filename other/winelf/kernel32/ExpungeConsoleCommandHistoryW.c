#include "kernel32.h"
void _elfimplib_ExpungeConsoleCommandHistoryW() asm("ExpungeConsoleCommandHistoryW");
void *_imp__ExpungeConsoleCommandHistoryW = NULL;
__attribute__((constructor)) void _elfimplib_init_ExpungeConsoleCommandHistoryW() {
load_dll_kernel32();
_imp__ExpungeConsoleCommandHistoryW = (void *) _elf_GetProcAddress(_dll_kernel32, "ExpungeConsoleCommandHistoryW");
}
void _elfimplib_ExpungeConsoleCommandHistoryW() {
asm("leave\njmp *%0" : : "r"(_imp__ExpungeConsoleCommandHistoryW));
}

