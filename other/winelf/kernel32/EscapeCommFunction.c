#include "kernel32.h"
void _elfimplib_EscapeCommFunction() asm("EscapeCommFunction");
void *_imp__EscapeCommFunction = NULL;
__attribute__((constructor)) void _elfimplib_init_EscapeCommFunction() {
load_dll_kernel32();
_imp__EscapeCommFunction = (void *) _elf_GetProcAddress(_dll_kernel32, "EscapeCommFunction");
}
void _elfimplib_EscapeCommFunction() {
asm("leave\njmp *%0" : : "r"(_imp__EscapeCommFunction));
}

