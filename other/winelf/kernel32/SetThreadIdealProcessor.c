#include "kernel32.h"
void _elfimplib_SetThreadIdealProcessor() asm("SetThreadIdealProcessor");
void *_imp__SetThreadIdealProcessor = NULL;
__attribute__((constructor)) void _elfimplib_init_SetThreadIdealProcessor() {
load_dll_kernel32();
_imp__SetThreadIdealProcessor = (void *) _elf_GetProcAddress(_dll_kernel32, "SetThreadIdealProcessor");
}
void _elfimplib_SetThreadIdealProcessor() {
asm("leave\njmp *%0" : : "r"(_imp__SetThreadIdealProcessor));
}

