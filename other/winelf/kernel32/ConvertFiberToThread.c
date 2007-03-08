#include "kernel32.h"
void _elfimplib_ConvertFiberToThread() asm("ConvertFiberToThread");
void *_imp__ConvertFiberToThread = NULL;
__attribute__((constructor)) void _elfimplib_init_ConvertFiberToThread() {
load_dll_kernel32();
_imp__ConvertFiberToThread = (void *) _elf_GetProcAddress(_dll_kernel32, "ConvertFiberToThread");
}
void _elfimplib_ConvertFiberToThread() {
asm("leave\njmp *%0" : : "r"(_imp__ConvertFiberToThread));
}

