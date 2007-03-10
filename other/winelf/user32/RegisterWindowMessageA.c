#include "user32.h"
void _elfimplib_RegisterWindowMessageA() asm("RegisterWindowMessageA");
void *_imp__RegisterWindowMessageA = NULL;
__attribute__((constructor)) void _elfimplib_init_RegisterWindowMessageA() {
load_dll_user32();
_imp__RegisterWindowMessageA = (void *) _elf_GetProcAddress(_dll_user32, "RegisterWindowMessageA");
}
void _elfimplib_RegisterWindowMessageA() {
asm("leave\njmp *%0" : : "r"(_imp__RegisterWindowMessageA));
}

