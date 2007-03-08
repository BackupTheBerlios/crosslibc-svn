#include "kernel32.h"
void _elfimplib__llseek() asm("llseek");
void *_imp___llseek = NULL;
__attribute__((constructor)) void _elfimplib_init__llseek() {
load_dll_kernel32();
_imp___llseek = (void *) _elf_GetProcAddress(_dll_kernel32, "_llseek");
}
void _elfimplib__llseek() {
asm("leave\njmp *%0" : : "r"(_imp___llseek));
}

