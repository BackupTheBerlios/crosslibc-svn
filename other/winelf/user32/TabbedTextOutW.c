#include "user32.h"
void _elfimplib_TabbedTextOutW() asm("TabbedTextOutW");
void *_imp__TabbedTextOutW = NULL;
__attribute__((constructor)) void _elfimplib_init_TabbedTextOutW() {
load_dll_user32();
_imp__TabbedTextOutW = (void *) _elf_GetProcAddress(_dll_user32, "TabbedTextOutW");
}
void _elfimplib_TabbedTextOutW() {
asm("leave\njmp *%0" : : "r"(_imp__TabbedTextOutW));
}

