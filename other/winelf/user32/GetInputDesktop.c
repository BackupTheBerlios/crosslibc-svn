#include "user32.h"
void _elfimplib_GetInputDesktop() asm("GetInputDesktop");
void *_imp__GetInputDesktop = NULL;
__attribute__((constructor)) void _elfimplib_init_GetInputDesktop() {
load_dll_user32();
_imp__GetInputDesktop = (void *) _elf_GetProcAddress(_dll_user32, "GetInputDesktop");
}
void _elfimplib_GetInputDesktop() {
asm("leave\njmp *%0" : : "r"(_imp__GetInputDesktop));
}

