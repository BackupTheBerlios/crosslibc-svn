#include "kernel32.h"
void _elfimplib_BindIoCompletionCallback() asm("BindIoCompletionCallback");
void *_imp__BindIoCompletionCallback = NULL;
__attribute__((constructor)) void _elfimplib_init_BindIoCompletionCallback() {
load_dll_kernel32();
_imp__BindIoCompletionCallback = (void *) _elf_GetProcAddress(_dll_kernel32, "BindIoCompletionCallback");
}
void _elfimplib_BindIoCompletionCallback() {
asm("leave\njmp *%0" : : "r"(_imp__BindIoCompletionCallback));
}

