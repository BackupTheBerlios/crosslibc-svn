#include "kernel32.h"
void _elfimplib_lstrcmpiW() asm("lstrcmpiW");
void *_imp__lstrcmpiW = NULL;
__attribute__((constructor)) void _elfimplib_init_lstrcmpiW() {
load_dll_kernel32();
_imp__lstrcmpiW = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcmpiW");
}
void _elfimplib_lstrcmpiW() {
asm("leave\njmp *%0" : : "r"(_imp__lstrcmpiW));
}

