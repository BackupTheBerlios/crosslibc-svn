#include "user32.h"
void _elfimplib_DestroyCaret() asm("DestroyCaret");
void *_imp__DestroyCaret = NULL;
__attribute__((constructor)) void _elfimplib_init_DestroyCaret() {
load_dll_user32();
_imp__DestroyCaret = (void *) _elf_GetProcAddress(_dll_user32, "DestroyCaret");
}
void _elfimplib_DestroyCaret() {
asm("leave\njmp *%0" : : "r"(_imp__DestroyCaret));
}

