#include "kernel32.h"
void _elfimplib_DebugSetProcessKillOnExit() asm("DebugSetProcessKillOnExit");
void *_imp__DebugSetProcessKillOnExit = NULL;
__attribute__((constructor)) void _elfimplib_init_DebugSetProcessKillOnExit() {
load_dll_kernel32();
_imp__DebugSetProcessKillOnExit = (void *) _elf_GetProcAddress(_dll_kernel32, "DebugSetProcessKillOnExit");
}
void _elfimplib_DebugSetProcessKillOnExit() {
asm("leave\njmp *%0" : : "r"(_imp__DebugSetProcessKillOnExit));
}

