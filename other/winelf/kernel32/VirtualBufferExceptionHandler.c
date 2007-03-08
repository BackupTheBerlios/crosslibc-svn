#include "kernel32.h"
void _elfimplib_VirtualBufferExceptionHandler() asm("VirtualBufferExceptionHandler");
void *_imp__VirtualBufferExceptionHandler = NULL;
__attribute__((constructor)) void _elfimplib_init_VirtualBufferExceptionHandler() {
load_dll_kernel32();
_imp__VirtualBufferExceptionHandler = (void *) _elf_GetProcAddress(_dll_kernel32, "VirtualBufferExceptionHandler");
}
void _elfimplib_VirtualBufferExceptionHandler() {
asm("leave\njmp *%0" : : "r"(_imp__VirtualBufferExceptionHandler));
}

