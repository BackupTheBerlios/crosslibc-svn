#include "kernel32.h"
void _elfimplib_lstrcpyn() asm("lstrcpyn");
void *_imp__lstrcpyn = NULL;
__attribute__((constructor)) void _elfimplib_init_lstrcpyn() {
load_dll_kernel32();
_imp__lstrcpyn = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcpyn");
}
void _elfimplib_lstrcpyn() {
asm("leave\njmp *%0" : : "r"(_imp__lstrcpyn));
}

