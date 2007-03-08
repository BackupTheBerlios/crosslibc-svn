#include "kernel32.h"
void _elfimplib_ScrollConsoleScreenBufferA() asm("ScrollConsoleScreenBufferA");
void *_imp__ScrollConsoleScreenBufferA = NULL;
__attribute__((constructor)) void _elfimplib_init_ScrollConsoleScreenBufferA() {
load_dll_kernel32();
_imp__ScrollConsoleScreenBufferA = (void *) _elf_GetProcAddress(_dll_kernel32, "ScrollConsoleScreenBufferA");
}
void _elfimplib_ScrollConsoleScreenBufferA() {
asm("leave\njmp *%0" : : "r"(_imp__ScrollConsoleScreenBufferA));
}

