#include "user32.h"
void _elfimplib_DdeUninitialize() asm("DdeUninitialize");
void *_imp__DdeUninitialize = NULL;
__attribute__((constructor)) void _elfimplib_init_DdeUninitialize() {
load_dll_user32();
_imp__DdeUninitialize = (void *) _elf_GetProcAddress(_dll_user32, "DdeUninitialize");
}
void _elfimplib_DdeUninitialize() {
asm("leave\njmp *%0" : : "r"(_imp__DdeUninitialize));
}

