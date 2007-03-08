#include "kernel32.h"
void _elfimplib_GetNamedPipeHandleStateW() asm("GetNamedPipeHandleStateW");
void *_imp__GetNamedPipeHandleStateW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetNamedPipeHandleStateW() {
load_dll_kernel32();
_imp__GetNamedPipeHandleStateW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNamedPipeHandleStateW");
}
void _elfimplib_GetNamedPipeHandleStateW() {
asm("leave\njmp *%0" : : "r"(_imp__GetNamedPipeHandleStateW));
}

