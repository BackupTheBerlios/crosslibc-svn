#include "kernel32.h"
void _elfimplib_GetConsoleKeyboardLayoutNameA() asm("GetConsoleKeyboardLayoutNameA");
void *_imp__GetConsoleKeyboardLayoutNameA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleKeyboardLayoutNameA() {
load_dll_kernel32();
_imp__GetConsoleKeyboardLayoutNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleKeyboardLayoutNameA");
}
void _elfimplib_GetConsoleKeyboardLayoutNameA() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleKeyboardLayoutNameA));
}

