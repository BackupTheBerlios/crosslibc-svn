#include "kernel32.h"
void _elfimplib_Heap32ListFirst() asm("Heap32ListFirst");
void *_imp__Heap32ListFirst = NULL;
__attribute__((constructor)) void _elfimplib_init_Heap32ListFirst() {
load_dll_kernel32();
_imp__Heap32ListFirst = (void *) _elf_GetProcAddress(_dll_kernel32, "Heap32ListFirst");
}
void _elfimplib_Heap32ListFirst() {
asm("leave\njmp *%0" : : "r"(_imp__Heap32ListFirst));
}

