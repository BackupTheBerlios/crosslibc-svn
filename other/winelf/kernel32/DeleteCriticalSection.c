#include "kernel32.h"
void _elfimplib_DeleteCriticalSection() asm("DeleteCriticalSection");
void *_imp__DeleteCriticalSection = NULL;
__attribute__((constructor)) void _elfimplib_init_DeleteCriticalSection() {
load_dll_kernel32();
_imp__DeleteCriticalSection = (void *) _elf_GetProcAddress(_dll_kernel32, "DeleteCriticalSection");
}
void _elfimplib_DeleteCriticalSection() {
asm("leave\njmp *%0" : : "r"(_imp__DeleteCriticalSection));
}

