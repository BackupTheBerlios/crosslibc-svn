#include "user32.h"
void _elfimplib_RealGetWindowClassA() asm("RealGetWindowClassA");
void *_imp__RealGetWindowClassA = NULL;
__attribute__((constructor)) void _elfimplib_init_RealGetWindowClassA() {
load_dll_user32();
_imp__RealGetWindowClassA = (void *) _elf_GetProcAddress(_dll_user32, "RealGetWindowClassA");
}
void _elfimplib_RealGetWindowClassA() {
asm("leave\njmp *%0" : : "r"(_imp__RealGetWindowClassA));
}

