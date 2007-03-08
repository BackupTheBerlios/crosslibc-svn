#include "kernel32.h"
void _elfimplib_GetLastError() asm("GetLastError");
void *_imp__GetLastError = NULL;
__attribute__((constructor)) void _elfimplib_init_GetLastError() {
load_dll_kernel32();
_imp__GetLastError = (void *) _elf_GetProcAddress(_dll_kernel32, "GetLastError");
}
void _elfimplib_GetLastError() {
asm("leave\njmp *%0" : : "r"(_imp__GetLastError));
}

