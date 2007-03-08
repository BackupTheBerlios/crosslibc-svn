#include "kernel32.h"
void _elfimplib_CreateJobObjectW() asm("CreateJobObjectW");
void *_imp__CreateJobObjectW = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateJobObjectW() {
load_dll_kernel32();
_imp__CreateJobObjectW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateJobObjectW");
}
void _elfimplib_CreateJobObjectW() {
asm("leave\njmp *%0" : : "r"(_imp__CreateJobObjectW));
}

