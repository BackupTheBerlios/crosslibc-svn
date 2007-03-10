#include "user32.h"
void _elfimplib_MessageBoxExW() asm("MessageBoxExW");
void *_imp__MessageBoxExW = NULL;
__attribute__((constructor)) void _elfimplib_init_MessageBoxExW() {
load_dll_user32();
_imp__MessageBoxExW = (void *) _elf_GetProcAddress(_dll_user32, "MessageBoxExW");
}
void _elfimplib_MessageBoxExW() {
asm("leave\njmp *%0" : : "r"(_imp__MessageBoxExW));
}

