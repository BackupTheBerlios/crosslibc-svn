#include "kernel32.h"
void _elfimplib_lstrcmpiA() asm("lstrcmpiA");
void *_imp__lstrcmpiA = NULL;
__attribute__((constructor)) void _elfimplib_init_lstrcmpiA() {
load_dll_kernel32();
_imp__lstrcmpiA = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcmpiA");
}
void _elfimplib_lstrcmpiA() {
asm("leave\njmp *%0" : : "r"(_imp__lstrcmpiA));
}

