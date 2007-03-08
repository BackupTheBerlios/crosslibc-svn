#include "kernel32.h"
void _elfimplib_lstrcpy() asm("lstrcpy");
void *_imp__lstrcpy = NULL;
__attribute__((constructor)) void _elfimplib_init_lstrcpy() {
load_dll_kernel32();
_imp__lstrcpy = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcpy");
}
void _elfimplib_lstrcpy() {
asm("leave\njmp *%0" : : "r"(_imp__lstrcpy));
}

