#include "user32.h"
void _elfimplib_RealGetWindowClass() asm("RealGetWindowClass");
void *_imp__RealGetWindowClass = NULL;
__attribute__((constructor)) void _elfimplib_init_RealGetWindowClass() {
load_dll_user32();
_imp__RealGetWindowClass = (void *) _elf_GetProcAddress(_dll_user32, "RealGetWindowClass");
}
void _elfimplib_RealGetWindowClass() {
asm("leave\njmp *%0" : : "r"(_imp__RealGetWindowClass));
}

