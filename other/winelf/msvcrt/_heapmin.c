#include "msvcrt.h"
void _elfimplib__heapmin() asm("heapmin");
void *_imp___heapmin = NULL;
__attribute__((constructor)) void _elfimplib_init__heapmin() {
load_dll_msvcrt();
_imp___heapmin = (void *) _elf_GetProcAddress(_dll_msvcrt, "_heapmin");
}
void _elfimplib__heapmin() {
asm("leave\njmp *%0" : : "r"(_imp___heapmin));
}

void _elfimplibmang__heapmin() asm("_heapmin");
void _elfimplibmang__heapmin() {
asm("leave\njmp *%0" : : "r"(_imp___heapmin));
}

