#include "user32.h"
void _elfimplib_DdeFreeDataHandle() asm("DdeFreeDataHandle");
void *_imp__DdeFreeDataHandle = NULL;
__attribute__((constructor)) void _elfimplib_init_DdeFreeDataHandle() {
load_dll_user32();
_imp__DdeFreeDataHandle = (void *) _elf_GetProcAddress(_dll_user32, "DdeFreeDataHandle");
}
void _elfimplib_DdeFreeDataHandle() {
asm("leave\njmp *%0" : : "r"(_imp__DdeFreeDataHandle));
}

