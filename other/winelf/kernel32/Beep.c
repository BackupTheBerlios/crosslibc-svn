#include "kernel32.h"
void _elfimplib_Beep() asm("Beep");
void *_imp__Beep = NULL;
__attribute__((constructor)) void _elfimplib_init_Beep() {
load_dll_kernel32();
_imp__Beep = (void *) _elf_GetProcAddress(_dll_kernel32, "Beep");
}
void _elfimplib_Beep() {
asm("leave\njmp *%0" : : "r"(_imp__Beep));
}

