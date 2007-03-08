#include "kernel32.h"
void _elfimplib_AddVectoredExceptionHandler() asm("AddVectoredExceptionHandler");
void *_imp__AddVectoredExceptionHandler = NULL;
__attribute__((constructor)) void _elfimplib_init_AddVectoredExceptionHandler() {
load_dll_kernel32();
_imp__AddVectoredExceptionHandler = (void *) _elf_GetProcAddress(_dll_kernel32, "AddVectoredExceptionHandler");
}
void _elfimplib_AddVectoredExceptionHandler() {
asm("leave\njmp *%0" : : "r"(_imp__AddVectoredExceptionHandler));
}

