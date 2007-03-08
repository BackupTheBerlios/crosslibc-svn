#include "kernel32.h"
void _elfimplib_RegisterWaitForSingleObjectEx() asm("RegisterWaitForSingleObjectEx");
void *_imp__RegisterWaitForSingleObjectEx = NULL;
__attribute__((constructor)) void _elfimplib_init_RegisterWaitForSingleObjectEx() {
load_dll_kernel32();
_imp__RegisterWaitForSingleObjectEx = (void *) _elf_GetProcAddress(_dll_kernel32, "RegisterWaitForSingleObjectEx");
}
void _elfimplib_RegisterWaitForSingleObjectEx() {
asm("leave\njmp *%0" : : "r"(_imp__RegisterWaitForSingleObjectEx));
}

