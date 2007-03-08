#include "kernel32.h"
void _elfimplib_lstrcmp() asm("lstrcmp");
void *_imp__lstrcmp = NULL;
__attribute__((constructor)) void _elfimplib_init_lstrcmp() {
load_dll_kernel32();
_imp__lstrcmp = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcmp");
}
void _elfimplib_lstrcmp() {
asm("leave\njmp *%0" : : "r"(_imp__lstrcmp));
}

