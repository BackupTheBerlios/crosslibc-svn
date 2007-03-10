#include "msvcrt.h"
void _elfimplib__heapwalk() asm("heapwalk");
void *_imp___heapwalk = NULL;
__attribute__((constructor)) void _elfimplib_init__heapwalk() {
load_dll_msvcrt();
_imp___heapwalk = (void *) _elf_GetProcAddress(_dll_msvcrt, "_heapwalk");
}
void _elfimplib__heapwalk() {
asm("leave\njmp *%0" : : "r"(_imp___heapwalk));
}

void _elfimplibmang__heapwalk() asm("_heapwalk");
void _elfimplibmang__heapwalk() {
asm("leave\njmp *%0" : : "r"(_imp___heapwalk));
}

