#include "kernel32.h"
void _elfimplib_OpenEventW() asm("OpenEventW");
void *_imp__OpenEventW = NULL;
__attribute__((constructor)) void _elfimplib_init_OpenEventW() {
load_dll_kernel32();
_imp__OpenEventW = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenEventW");
}
void _elfimplib_OpenEventW() {
asm("leave\njmp *%0" : : "r"(_imp__OpenEventW));
}

