#include "kernel32.h"
void _elfimplib_lstrcmpi() asm("lstrcmpi");
void *_imp__lstrcmpi = NULL;
__attribute__((constructor)) void _elfimplib_init_lstrcmpi() {
load_dll_kernel32();
_imp__lstrcmpi = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcmpi");
}
void _elfimplib_lstrcmpi() {
asm("leave\njmp *%0" : : "r"(_imp__lstrcmpi));
}

