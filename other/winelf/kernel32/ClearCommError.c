#include "kernel32.h"
void _elfimplib_ClearCommError() asm("ClearCommError");
void *_imp__ClearCommError = NULL;
__attribute__((constructor)) void _elfimplib_init_ClearCommError() {
load_dll_kernel32();
_imp__ClearCommError = (void *) _elf_GetProcAddress(_dll_kernel32, "ClearCommError");
}
void _elfimplib_ClearCommError() {
asm("leave\njmp *%0" : : "r"(_imp__ClearCommError));
}

