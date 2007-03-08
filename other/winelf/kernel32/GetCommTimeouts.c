#include "kernel32.h"
void _elfimplib_GetCommTimeouts() asm("GetCommTimeouts");
void *_imp__GetCommTimeouts = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCommTimeouts() {
load_dll_kernel32();
_imp__GetCommTimeouts = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCommTimeouts");
}
void _elfimplib_GetCommTimeouts() {
asm("leave\njmp *%0" : : "r"(_imp__GetCommTimeouts));
}

