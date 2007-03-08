#include "kernel32.h"
void _elfimplib_WaitForSingleObjectEx() asm("WaitForSingleObjectEx");
void *_imp__WaitForSingleObjectEx = NULL;
__attribute__((constructor)) void _elfimplib_init_WaitForSingleObjectEx() {
load_dll_kernel32();
_imp__WaitForSingleObjectEx = (void *) _elf_GetProcAddress(_dll_kernel32, "WaitForSingleObjectEx");
}
void _elfimplib_WaitForSingleObjectEx() {
asm("leave\njmp *%0" : : "r"(_imp__WaitForSingleObjectEx));
}

