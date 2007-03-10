#include "msvcrt.h"
void _elfimplib__heapset() asm("heapset");
void *_imp___heapset = NULL;
__attribute__((constructor)) void _elfimplib_init__heapset() {
load_dll_msvcrt();
_imp___heapset = (void *) _elf_GetProcAddress(_dll_msvcrt, "_heapset");
}
void _elfimplib__heapset() {
asm("leave\njmp *%0" : : "r"(_imp___heapset));
}

void _elfimplibmang__heapset() asm("_heapset");
void _elfimplibmang__heapset() {
asm("leave\njmp *%0" : : "r"(_imp___heapset));
}

