#include "msvcrt.h"
void _elfimplib__heapchk() asm("heapchk");
void *_imp___heapchk = NULL;
__attribute__((constructor)) void _elfimplib_init__heapchk() {
load_dll_msvcrt();
_imp___heapchk = (void *) _elf_GetProcAddress(_dll_msvcrt, "_heapchk");
}
void _elfimplib__heapchk() {
asm("leave\njmp *%0" : : "r"(_imp___heapchk));
}

