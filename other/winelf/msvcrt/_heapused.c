#include "msvcrt.h"
void _elfimplib__heapused() asm("heapused");
void *_imp___heapused = NULL;
__attribute__((constructor)) void _elfimplib_init__heapused() {
load_dll_msvcrt();
_imp___heapused = (void *) _elf_GetProcAddress(_dll_msvcrt, "_heapused");
}
void _elfimplib__heapused() {
asm("leave\njmp *%0" : : "r"(_imp___heapused));
}

