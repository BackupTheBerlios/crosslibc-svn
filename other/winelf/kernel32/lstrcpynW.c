#include "kernel32.h"
void _elfimplib_lstrcpynW() asm("lstrcpynW");
void *_imp__lstrcpynW = NULL;
__attribute__((constructor)) void _elfimplib_init_lstrcpynW() {
load_dll_kernel32();
_imp__lstrcpynW = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcpynW");
}
void _elfimplib_lstrcpynW() {
asm("leave\njmp *%0" : : "r"(_imp__lstrcpynW));
}

