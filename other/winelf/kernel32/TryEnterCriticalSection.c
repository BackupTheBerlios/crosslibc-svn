#include "kernel32.h"
void _elfimplib_TryEnterCriticalSection() asm("TryEnterCriticalSection");
void *_imp__TryEnterCriticalSection = NULL;
__attribute__((constructor)) void _elfimplib_init_TryEnterCriticalSection() {
load_dll_kernel32();
_imp__TryEnterCriticalSection = (void *) _elf_GetProcAddress(_dll_kernel32, "TryEnterCriticalSection");
}
void _elfimplib_TryEnterCriticalSection() {
asm("leave\njmp *%0" : : "r"(_imp__TryEnterCriticalSection));
}

