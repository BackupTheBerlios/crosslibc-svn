#include "kernel32.h"
void _elfimplib_AssignProcessToJobObject() asm("AssignProcessToJobObject");
void *_imp__AssignProcessToJobObject = NULL;
__attribute__((constructor)) void _elfimplib_init_AssignProcessToJobObject() {
load_dll_kernel32();
_imp__AssignProcessToJobObject = (void *) _elf_GetProcAddress(_dll_kernel32, "AssignProcessToJobObject");
}
void _elfimplib_AssignProcessToJobObject() {
asm("leave\njmp *%0" : : "r"(_imp__AssignProcessToJobObject));
}

