#include "kernel32.h"
void _elfimplib_ConvertThreadToFiber() asm("ConvertThreadToFiber");
void *_imp__ConvertThreadToFiber = NULL;
__attribute__((constructor)) void _elfimplib_init_ConvertThreadToFiber() {
load_dll_kernel32();
_imp__ConvertThreadToFiber = (void *) _elf_GetProcAddress(_dll_kernel32, "ConvertThreadToFiber");
}
void _elfimplib_ConvertThreadToFiber() {
asm("leave\njmp *%0" : : "r"(_imp__ConvertThreadToFiber));
}

