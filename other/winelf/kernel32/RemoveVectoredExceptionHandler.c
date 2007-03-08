#include "kernel32.h"
void _elfimplib_RemoveVectoredExceptionHandler() asm("RemoveVectoredExceptionHandler");
void *_imp__RemoveVectoredExceptionHandler = NULL;
__attribute__((constructor)) void _elfimplib_init_RemoveVectoredExceptionHandler() {
load_dll_kernel32();
_imp__RemoveVectoredExceptionHandler = (void *) _elf_GetProcAddress(_dll_kernel32, "RemoveVectoredExceptionHandler");
}
void _elfimplib_RemoveVectoredExceptionHandler() {
asm("leave\njmp *%0" : : "r"(_imp__RemoveVectoredExceptionHandler));
}

