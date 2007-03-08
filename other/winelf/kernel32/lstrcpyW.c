#include "kernel32.h"
void _elfimplib_lstrcpyW() asm("lstrcpyW");
void *_imp__lstrcpyW = NULL;
__attribute__((constructor)) void _elfimplib_init_lstrcpyW() {
load_dll_kernel32();
_imp__lstrcpyW = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcpyW");
}
void _elfimplib_lstrcpyW() {
asm("leave\njmp *%0" : : "r"(_imp__lstrcpyW));
}

