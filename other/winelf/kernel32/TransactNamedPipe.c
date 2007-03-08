#include "kernel32.h"
void _elfimplib_TransactNamedPipe() asm("TransactNamedPipe");
void *_imp__TransactNamedPipe = NULL;
__attribute__((constructor)) void _elfimplib_init_TransactNamedPipe() {
load_dll_kernel32();
_imp__TransactNamedPipe = (void *) _elf_GetProcAddress(_dll_kernel32, "TransactNamedPipe");
}
void _elfimplib_TransactNamedPipe() {
asm("leave\njmp *%0" : : "r"(_imp__TransactNamedPipe));
}

