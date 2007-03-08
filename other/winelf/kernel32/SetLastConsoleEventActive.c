#include "kernel32.h"
void _elfimplib_SetLastConsoleEventActive() asm("SetLastConsoleEventActive");
void *_imp__SetLastConsoleEventActive = NULL;
__attribute__((constructor)) void _elfimplib_init_SetLastConsoleEventActive() {
load_dll_kernel32();
_imp__SetLastConsoleEventActive = (void *) _elf_GetProcAddress(_dll_kernel32, "SetLastConsoleEventActive");
}
void _elfimplib_SetLastConsoleEventActive() {
asm("leave\njmp *%0" : : "r"(_imp__SetLastConsoleEventActive));
}

