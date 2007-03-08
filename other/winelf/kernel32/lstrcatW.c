#include "kernel32.h"
void _elfimplib_lstrcatW() asm("lstrcatW");
void *_imp__lstrcatW = NULL;
__attribute__((constructor)) void _elfimplib_init_lstrcatW() {
load_dll_kernel32();
_imp__lstrcatW = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcatW");
}
void _elfimplib_lstrcatW() {
asm("leave\njmp *%0" : : "r"(_imp__lstrcatW));
}

