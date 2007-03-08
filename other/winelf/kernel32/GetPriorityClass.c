#include "kernel32.h"
void _elfimplib_GetPriorityClass() asm("GetPriorityClass");
void *_imp__GetPriorityClass = NULL;
__attribute__((constructor)) void _elfimplib_init_GetPriorityClass() {
load_dll_kernel32();
_imp__GetPriorityClass = (void *) _elf_GetProcAddress(_dll_kernel32, "GetPriorityClass");
}
void _elfimplib_GetPriorityClass() {
asm("leave\njmp *%0" : : "r"(_imp__GetPriorityClass));
}

