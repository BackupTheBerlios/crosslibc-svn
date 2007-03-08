#include "kernel32.h"
void _elfimplib_ConnectNamedPipe() asm("ConnectNamedPipe");
void *_imp__ConnectNamedPipe = NULL;
__attribute__((constructor)) void _elfimplib_init_ConnectNamedPipe() {
load_dll_kernel32();
_imp__ConnectNamedPipe = (void *) _elf_GetProcAddress(_dll_kernel32, "ConnectNamedPipe");
}
void _elfimplib_ConnectNamedPipe() {
asm("leave\njmp *%0" : : "r"(_imp__ConnectNamedPipe));
}

