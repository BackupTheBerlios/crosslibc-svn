#include "user32.h"
void _elfimplib_RegisterClassExA() asm("RegisterClassExA");
void *_imp__RegisterClassExA = NULL;
__attribute__((constructor)) void _elfimplib_init_RegisterClassExA() {
load_dll_user32();
_imp__RegisterClassExA = (void *) _elf_GetProcAddress(_dll_user32, "RegisterClassExA");
}
void _elfimplib_RegisterClassExA() {
asm("leave\njmp *%0" : : "r"(_imp__RegisterClassExA));
}

