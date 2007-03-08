#include "kernel32.h"
void _elfimplib_GetNumaHighestNodeNumber() asm("GetNumaHighestNodeNumber");
void *_imp__GetNumaHighestNodeNumber = NULL;
__attribute__((constructor)) void _elfimplib_init_GetNumaHighestNodeNumber() {
load_dll_kernel32();
_imp__GetNumaHighestNodeNumber = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNumaHighestNodeNumber");
}
void _elfimplib_GetNumaHighestNodeNumber() {
asm("leave\njmp *%0" : : "r"(_imp__GetNumaHighestNodeNumber));
}

