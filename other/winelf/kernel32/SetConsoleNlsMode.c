#include "kernel32.h"
void _elfimplib_SetConsoleNlsMode() asm("SetConsoleNlsMode");
void *_imp__SetConsoleNlsMode = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleNlsMode() {
load_dll_kernel32();
_imp__SetConsoleNlsMode = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleNlsMode");
}
void _elfimplib_SetConsoleNlsMode() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleNlsMode));
}

