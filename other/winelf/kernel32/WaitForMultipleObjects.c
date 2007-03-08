#include "kernel32.h"
void _elfimplib_WaitForMultipleObjects() asm("WaitForMultipleObjects");
void *_imp__WaitForMultipleObjects = NULL;
__attribute__((constructor)) void _elfimplib_init_WaitForMultipleObjects() {
load_dll_kernel32();
_imp__WaitForMultipleObjects = (void *) _elf_GetProcAddress(_dll_kernel32, "WaitForMultipleObjects");
}
void _elfimplib_WaitForMultipleObjects() {
asm("leave\njmp *%0" : : "r"(_imp__WaitForMultipleObjects));
}

