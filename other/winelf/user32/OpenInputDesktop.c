#include "user32.h"
void _elfimplib_OpenInputDesktop() asm("OpenInputDesktop");
void *_imp__OpenInputDesktop = NULL;
__attribute__((constructor)) void _elfimplib_init_OpenInputDesktop() {
load_dll_user32();
_imp__OpenInputDesktop = (void *) _elf_GetProcAddress(_dll_user32, "OpenInputDesktop");
}
void _elfimplib_OpenInputDesktop() {
asm("leave\njmp *%0" : : "r"(_imp__OpenInputDesktop));
}

