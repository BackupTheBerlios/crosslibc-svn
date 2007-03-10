#include "user32.h"
void _elfimplib_MessageBoxA() asm("MessageBoxA");
void *_imp__MessageBoxA = NULL;
__attribute__((constructor)) void _elfimplib_init_MessageBoxA() {
load_dll_user32();
_imp__MessageBoxA = (void *) _elf_GetProcAddress(_dll_user32, "MessageBoxA");
}
void _elfimplib_MessageBoxA() {
asm("leave\njmp *%0" : : "r"(_imp__MessageBoxA));
}

