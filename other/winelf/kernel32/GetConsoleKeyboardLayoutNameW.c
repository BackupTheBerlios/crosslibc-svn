#include "kernel32.h"
void _elfimplib_GetConsoleKeyboardLayoutNameW() asm("GetConsoleKeyboardLayoutNameW");
void *_imp__GetConsoleKeyboardLayoutNameW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleKeyboardLayoutNameW() {
load_dll_kernel32();
_imp__GetConsoleKeyboardLayoutNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleKeyboardLayoutNameW");
}
void _elfimplib_GetConsoleKeyboardLayoutNameW() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleKeyboardLayoutNameW));
}

