#include "user32.h"
void _elfimplib_DdeAddData() asm("DdeAddData");
void *_imp__DdeAddData = NULL;
__attribute__((constructor)) void _elfimplib_init_DdeAddData() {
load_dll_user32();
_imp__DdeAddData = (void *) _elf_GetProcAddress(_dll_user32, "DdeAddData");
}
void _elfimplib_DdeAddData() {
asm("leave\njmp *%0" : : "r"(_imp__DdeAddData));
}

