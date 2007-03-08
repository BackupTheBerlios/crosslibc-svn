#include "kernel32.h"
void _elfimplib_GetConsoleNlsMode() asm("GetConsoleNlsMode");
void *_imp__GetConsoleNlsMode = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleNlsMode() {
load_dll_kernel32();
_imp__GetConsoleNlsMode = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleNlsMode");
}
void _elfimplib_GetConsoleNlsMode() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleNlsMode));
}

