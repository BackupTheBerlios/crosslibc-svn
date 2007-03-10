#include "user32.h"
void _elfimplib_MessageBoxIndirectA() asm("MessageBoxIndirectA");
void *_imp__MessageBoxIndirectA = NULL;
__attribute__((constructor)) void _elfimplib_init_MessageBoxIndirectA() {
load_dll_user32();
_imp__MessageBoxIndirectA = (void *) _elf_GetProcAddress(_dll_user32, "MessageBoxIndirectA");
}
void _elfimplib_MessageBoxIndirectA() {
asm("leave\njmp *%0" : : "r"(_imp__MessageBoxIndirectA));
}

