#include "kernel32.h"
void _elfimplib_ReadFileScatter() asm("ReadFileScatter");
void *_imp__ReadFileScatter = NULL;
__attribute__((constructor)) void _elfimplib_init_ReadFileScatter() {
load_dll_kernel32();
_imp__ReadFileScatter = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadFileScatter");
}
void _elfimplib_ReadFileScatter() {
asm("leave\njmp *%0" : : "r"(_imp__ReadFileScatter));
}

