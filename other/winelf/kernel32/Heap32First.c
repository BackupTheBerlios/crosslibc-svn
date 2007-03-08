#include "kernel32.h"
void _elfimplib_Heap32First() asm("Heap32First");
void *_imp__Heap32First = NULL;
__attribute__((constructor)) void _elfimplib_init_Heap32First() {
load_dll_kernel32();
_imp__Heap32First = (void *) _elf_GetProcAddress(_dll_kernel32, "Heap32First");
}
void _elfimplib_Heap32First() {
asm("leave\njmp *%0" : : "r"(_imp__Heap32First));
}

