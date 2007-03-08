#include "kernel32.h"
void _elfimplib_SetConsoleCommandHistoryMode() asm("SetConsoleCommandHistoryMode");
void *_imp__SetConsoleCommandHistoryMode = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleCommandHistoryMode() {
load_dll_kernel32();
_imp__SetConsoleCommandHistoryMode = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleCommandHistoryMode");
}
void _elfimplib_SetConsoleCommandHistoryMode() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleCommandHistoryMode));
}

