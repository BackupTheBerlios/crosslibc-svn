#include "kernel32.h"
void _elfimplib_GetOverlappedResult() asm("GetOverlappedResult");
void *_imp__GetOverlappedResult = NULL;
__attribute__((constructor)) void _elfimplib_init_GetOverlappedResult() {
load_dll_kernel32();
_imp__GetOverlappedResult = (void *) _elf_GetProcAddress(_dll_kernel32, "GetOverlappedResult");
}
void _elfimplib_GetOverlappedResult() {
asm("leave\njmp *%0" : : "r"(_imp__GetOverlappedResult));
}

