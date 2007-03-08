#include "kernel32.h"
void _elfimplib_ScrollConsoleScreenBufferW() asm("ScrollConsoleScreenBufferW");
void *_imp__ScrollConsoleScreenBufferW = NULL;
__attribute__((constructor)) void _elfimplib_init_ScrollConsoleScreenBufferW() {
load_dll_kernel32();
_imp__ScrollConsoleScreenBufferW = (void *) _elf_GetProcAddress(_dll_kernel32, "ScrollConsoleScreenBufferW");
}
void _elfimplib_ScrollConsoleScreenBufferW() {
asm("leave\njmp *%0" : : "r"(_imp__ScrollConsoleScreenBufferW));
}

