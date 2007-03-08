#include "kernel32.h"
void _elfimplib_lstrcmpW() asm("lstrcmpW");
void *_imp__lstrcmpW = NULL;
__attribute__((constructor)) void _elfimplib_init_lstrcmpW() {
load_dll_kernel32();
_imp__lstrcmpW = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcmpW");
}
void _elfimplib_lstrcmpW() {
asm("leave\njmp *%0" : : "r"(_imp__lstrcmpW));
}

