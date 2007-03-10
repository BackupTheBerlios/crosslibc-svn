#include "user32.h"
void _elfimplib_MessageBoxTimeoutW() asm("MessageBoxTimeoutW");
void *_imp__MessageBoxTimeoutW = NULL;
__attribute__((constructor)) void _elfimplib_init_MessageBoxTimeoutW() {
load_dll_user32();
_imp__MessageBoxTimeoutW = (void *) _elf_GetProcAddress(_dll_user32, "MessageBoxTimeoutW");
}
void _elfimplib_MessageBoxTimeoutW() {
asm("leave\njmp *%0" : : "r"(_imp__MessageBoxTimeoutW));
}

