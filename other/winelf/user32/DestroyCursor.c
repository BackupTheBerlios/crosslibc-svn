#include "user32.h"
void _elfimplib_DestroyCursor() asm("DestroyCursor");
void *_imp__DestroyCursor = NULL;
__attribute__((constructor)) void _elfimplib_init_DestroyCursor() {
load_dll_user32();
_imp__DestroyCursor = (void *) _elf_GetProcAddress(_dll_user32, "DestroyCursor");
}
void _elfimplib_DestroyCursor() {
asm("leave\njmp *%0" : : "r"(_imp__DestroyCursor));
}

