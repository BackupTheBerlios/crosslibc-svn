#include "user32.h"
void _elfimplib_GetThreadDesktop() asm("GetThreadDesktop");
void *_imp__GetThreadDesktop = NULL;
__attribute__((constructor)) void _elfimplib_init_GetThreadDesktop() {
load_dll_user32();
_imp__GetThreadDesktop = (void *) _elf_GetProcAddress(_dll_user32, "GetThreadDesktop");
}
void _elfimplib_GetThreadDesktop() {
asm("leave\njmp *%0" : : "r"(_imp__GetThreadDesktop));
}

