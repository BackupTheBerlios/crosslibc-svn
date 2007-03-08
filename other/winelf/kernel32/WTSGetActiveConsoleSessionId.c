#include "kernel32.h"
void _elfimplib_WTSGetActiveConsoleSessionId() asm("WTSGetActiveConsoleSessionId");
void *_imp__WTSGetActiveConsoleSessionId = NULL;
__attribute__((constructor)) void _elfimplib_init_WTSGetActiveConsoleSessionId() {
load_dll_kernel32();
_imp__WTSGetActiveConsoleSessionId = (void *) _elf_GetProcAddress(_dll_kernel32, "WTSGetActiveConsoleSessionId");
}
void _elfimplib_WTSGetActiveConsoleSessionId() {
asm("leave\njmp *%0" : : "r"(_imp__WTSGetActiveConsoleSessionId));
}

