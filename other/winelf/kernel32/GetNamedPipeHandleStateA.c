#include "kernel32.h"
void _elfimplib_GetNamedPipeHandleStateA() asm("GetNamedPipeHandleStateA");
void *_imp__GetNamedPipeHandleStateA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetNamedPipeHandleStateA() {
load_dll_kernel32();
_imp__GetNamedPipeHandleStateA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNamedPipeHandleStateA");
}
void _elfimplib_GetNamedPipeHandleStateA() {
asm("leave\njmp *%0" : : "r"(_imp__GetNamedPipeHandleStateA));
}

