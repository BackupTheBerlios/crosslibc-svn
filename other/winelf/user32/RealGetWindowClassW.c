#include "user32.h"
void _elfimplib_RealGetWindowClassW() asm("RealGetWindowClassW");
void *_imp__RealGetWindowClassW = NULL;
__attribute__((constructor)) void _elfimplib_init_RealGetWindowClassW() {
load_dll_user32();
_imp__RealGetWindowClassW = (void *) _elf_GetProcAddress(_dll_user32, "RealGetWindowClassW");
}
void _elfimplib_RealGetWindowClassW() {
asm("leave\njmp *%0" : : "r"(_imp__RealGetWindowClassW));
}

