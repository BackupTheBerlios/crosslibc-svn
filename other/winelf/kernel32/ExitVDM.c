#include "kernel32.h"
void _elfimplib_ExitVDM() asm("ExitVDM");
void *_imp__ExitVDM = NULL;
__attribute__((constructor)) void _elfimplib_init_ExitVDM() {
load_dll_kernel32();
_imp__ExitVDM = (void *) _elf_GetProcAddress(_dll_kernel32, "ExitVDM");
}
void _elfimplib_ExitVDM() {
asm("leave\njmp *%0" : : "r"(_imp__ExitVDM));
}

