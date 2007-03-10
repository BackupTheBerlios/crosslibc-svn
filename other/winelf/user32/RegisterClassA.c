#include "user32.h"
void _elfimplib_RegisterClassA() asm("RegisterClassA");
void *_imp__RegisterClassA = NULL;
__attribute__((constructor)) void _elfimplib_init_RegisterClassA() {
load_dll_user32();
_imp__RegisterClassA = (void *) _elf_GetProcAddress(_dll_user32, "RegisterClassA");
}
void _elfimplib_RegisterClassA() {
asm("leave\njmp *%0" : : "r"(_imp__RegisterClassA));
}

