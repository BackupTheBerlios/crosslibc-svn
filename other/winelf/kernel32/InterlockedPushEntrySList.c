#include "kernel32.h"
void _elfimplib_InterlockedPushEntrySList() asm("InterlockedPushEntrySList");
void *_imp__InterlockedPushEntrySList = NULL;
__attribute__((constructor)) void _elfimplib_init_InterlockedPushEntrySList() {
load_dll_kernel32();
_imp__InterlockedPushEntrySList = (void *) _elf_GetProcAddress(_dll_kernel32, "InterlockedPushEntrySList");
}
void _elfimplib_InterlockedPushEntrySList() {
asm("leave\njmp *%0" : : "r"(_imp__InterlockedPushEntrySList));
}

