#include "kernel32.h"
void _elfimplib_WaitForMultipleObjectsEx() asm("WaitForMultipleObjectsEx");
void *_imp__WaitForMultipleObjectsEx = NULL;
__attribute__((constructor)) void _elfimplib_init_WaitForMultipleObjectsEx() {
load_dll_kernel32();
_imp__WaitForMultipleObjectsEx = (void *) _elf_GetProcAddress(_dll_kernel32, "WaitForMultipleObjectsEx");
}
void _elfimplib_WaitForMultipleObjectsEx() {
asm("leave\njmp *%0" : : "r"(_imp__WaitForMultipleObjectsEx));
}

