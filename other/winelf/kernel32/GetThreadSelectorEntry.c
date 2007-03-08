#include "kernel32.h"
void _elfimplib_GetThreadSelectorEntry() asm("GetThreadSelectorEntry");
void *_imp__GetThreadSelectorEntry = NULL;
__attribute__((constructor)) void _elfimplib_init_GetThreadSelectorEntry() {
load_dll_kernel32();
_imp__GetThreadSelectorEntry = (void *) _elf_GetProcAddress(_dll_kernel32, "GetThreadSelectorEntry");
}
void _elfimplib_GetThreadSelectorEntry() {
asm("leave\njmp *%0" : : "r"(_imp__GetThreadSelectorEntry));
}

