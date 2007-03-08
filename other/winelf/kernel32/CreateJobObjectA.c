#include "kernel32.h"
void _elfimplib_CreateJobObjectA() asm("CreateJobObjectA");
void *_imp__CreateJobObjectA = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateJobObjectA() {
load_dll_kernel32();
_imp__CreateJobObjectA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateJobObjectA");
}
void _elfimplib_CreateJobObjectA() {
asm("leave\njmp *%0" : : "r"(_imp__CreateJobObjectA));
}

