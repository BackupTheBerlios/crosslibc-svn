#include "kernel32.h"
void _elfimplib_CreateIoCompletionPort() asm("CreateIoCompletionPort");
void *_imp__CreateIoCompletionPort = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateIoCompletionPort() {
load_dll_kernel32();
_imp__CreateIoCompletionPort = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateIoCompletionPort");
}
void _elfimplib_CreateIoCompletionPort() {
asm("leave\njmp *%0" : : "r"(_imp__CreateIoCompletionPort));
}

