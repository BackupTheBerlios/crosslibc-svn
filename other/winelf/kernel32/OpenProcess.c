#include "kernel32.h"
void _elfimplib_OpenProcess() asm("OpenProcess");
void *_imp__OpenProcess = NULL;
__attribute__((constructor)) void _elfimplib_init_OpenProcess() {
load_dll_kernel32();
_imp__OpenProcess = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenProcess");
}
void _elfimplib_OpenProcess() {
asm("leave\njmp *%0" : : "r"(_imp__OpenProcess));
}

