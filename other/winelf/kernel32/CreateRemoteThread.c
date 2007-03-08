#include "kernel32.h"
void _elfimplib_CreateRemoteThread() asm("CreateRemoteThread");
void *_imp__CreateRemoteThread = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateRemoteThread() {
load_dll_kernel32();
_imp__CreateRemoteThread = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateRemoteThread");
}
void _elfimplib_CreateRemoteThread() {
asm("leave\njmp *%0" : : "r"(_imp__CreateRemoteThread));
}

