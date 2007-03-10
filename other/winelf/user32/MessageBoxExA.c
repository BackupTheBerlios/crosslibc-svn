#include "user32.h"
void _elfimplib_MessageBoxExA() asm("MessageBoxExA");
void *_imp__MessageBoxExA = NULL;
__attribute__((constructor)) void _elfimplib_init_MessageBoxExA() {
load_dll_user32();
_imp__MessageBoxExA = (void *) _elf_GetProcAddress(_dll_user32, "MessageBoxExA");
}
void _elfimplib_MessageBoxExA() {
asm("leave\njmp *%0" : : "r"(_imp__MessageBoxExA));
}

