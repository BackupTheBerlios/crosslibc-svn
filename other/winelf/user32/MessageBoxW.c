#include "user32.h"
void _elfimplib_MessageBoxW() asm("MessageBoxW");
void *_imp__MessageBoxW = NULL;
__attribute__((constructor)) void _elfimplib_init_MessageBoxW() {
load_dll_user32();
_imp__MessageBoxW = (void *) _elf_GetProcAddress(_dll_user32, "MessageBoxW");
}
void _elfimplib_MessageBoxW() {
asm("leave\njmp *%0" : : "r"(_imp__MessageBoxW));
}

