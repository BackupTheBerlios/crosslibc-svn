#include "kernel32.h"
void _elfimplib_InterlockedFlushSList() asm("InterlockedFlushSList");
void *_imp__InterlockedFlushSList = NULL;
__attribute__((constructor)) void _elfimplib_init_InterlockedFlushSList() {
load_dll_kernel32();
_imp__InterlockedFlushSList = (void *) _elf_GetProcAddress(_dll_kernel32, "InterlockedFlushSList");
}
void _elfimplib_InterlockedFlushSList() {
asm("leave\njmp *%0" : : "r"(_imp__InterlockedFlushSList));
}

