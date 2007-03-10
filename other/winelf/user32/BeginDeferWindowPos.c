#include "user32.h"
void _elfimplib_BeginDeferWindowPos() asm("BeginDeferWindowPos");
void *_imp__BeginDeferWindowPos = NULL;
__attribute__((constructor)) void _elfimplib_init_BeginDeferWindowPos() {
load_dll_user32();
_imp__BeginDeferWindowPos = (void *) _elf_GetProcAddress(_dll_user32, "BeginDeferWindowPos");
}
void _elfimplib_BeginDeferWindowPos() {
asm("leave\njmp *%0" : : "r"(_imp__BeginDeferWindowPos));
}

