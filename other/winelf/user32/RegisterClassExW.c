#include "user32.h"
void _elfimplib_RegisterClassExW() asm("RegisterClassExW");
void *_imp__RegisterClassExW = NULL;
__attribute__((constructor)) void _elfimplib_init_RegisterClassExW() {
load_dll_user32();
_imp__RegisterClassExW = (void *) _elf_GetProcAddress(_dll_user32, "RegisterClassExW");
}
void _elfimplib_RegisterClassExW() {
asm("leave\njmp *%0" : : "r"(_imp__RegisterClassExW));
}

