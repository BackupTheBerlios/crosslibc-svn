#include "user32.h"
void _elfimplib_BringWindowToTop() asm("BringWindowToTop");
void *_imp__BringWindowToTop = NULL;
__attribute__((constructor)) void _elfimplib_init_BringWindowToTop() {
load_dll_user32();
_imp__BringWindowToTop = (void *) _elf_GetProcAddress(_dll_user32, "BringWindowToTop");
}
void _elfimplib_BringWindowToTop() {
asm("leave\njmp *%0" : : "r"(_imp__BringWindowToTop));
}

