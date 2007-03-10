#include "user32.h"
void _elfimplib_ResolveDesktopForWOW() asm("ResolveDesktopForWOW");
void *_imp__ResolveDesktopForWOW = NULL;
__attribute__((constructor)) void _elfimplib_init_ResolveDesktopForWOW() {
load_dll_user32();
_imp__ResolveDesktopForWOW = (void *) _elf_GetProcAddress(_dll_user32, "ResolveDesktopForWOW");
}
void _elfimplib_ResolveDesktopForWOW() {
asm("leave\njmp *%0" : : "r"(_imp__ResolveDesktopForWOW));
}

