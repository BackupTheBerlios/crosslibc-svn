#include "user32.h"
void _elfimplib_EndDeferWindowPos() asm("EndDeferWindowPos");
void *_imp__EndDeferWindowPos = NULL;
__attribute__((constructor)) void _elfimplib_init_EndDeferWindowPos() {
load_dll_user32();
_imp__EndDeferWindowPos = (void *) _elf_GetProcAddress(_dll_user32, "EndDeferWindowPos");
}
void _elfimplib_EndDeferWindowPos() {
asm("leave\njmp *%0" : : "r"(_imp__EndDeferWindowPos));
}

