#include "user32.h"
void _elfimplib_MessageBoxIndirectW() asm("MessageBoxIndirectW");
void *_imp__MessageBoxIndirectW = NULL;
__attribute__((constructor)) void _elfimplib_init_MessageBoxIndirectW() {
load_dll_user32();
_imp__MessageBoxIndirectW = (void *) _elf_GetProcAddress(_dll_user32, "MessageBoxIndirectW");
}
void _elfimplib_MessageBoxIndirectW() {
asm("leave\njmp *%0" : : "r"(_imp__MessageBoxIndirectW));
}

