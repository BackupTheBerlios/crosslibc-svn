#include "kernel32.h"
void _elfimplib_Heap32ListNext() asm("Heap32ListNext");
void *_imp__Heap32ListNext = NULL;
__attribute__((constructor)) void _elfimplib_init_Heap32ListNext() {
load_dll_kernel32();
_imp__Heap32ListNext = (void *) _elf_GetProcAddress(_dll_kernel32, "Heap32ListNext");
}
void _elfimplib_Heap32ListNext() {
asm("leave\njmp *%0" : : "r"(_imp__Heap32ListNext));
}

