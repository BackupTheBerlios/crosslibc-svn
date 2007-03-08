#include "kernel32.h"
void _elfimplib_ResumeThread() asm("ResumeThread");
void *_imp__ResumeThread = NULL;
__attribute__((constructor)) void _elfimplib_init_ResumeThread() {
load_dll_kernel32();
_imp__ResumeThread = (void *) _elf_GetProcAddress(_dll_kernel32, "ResumeThread");
}
void _elfimplib_ResumeThread() {
asm("leave\njmp *%0" : : "r"(_imp__ResumeThread));
}

