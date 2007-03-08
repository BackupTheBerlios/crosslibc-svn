#include "kernel32.h"
void _elfimplib_GetBinaryTypeW() asm("GetBinaryTypeW");
void *_imp__GetBinaryTypeW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetBinaryTypeW() {
load_dll_kernel32();
_imp__GetBinaryTypeW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetBinaryTypeW");
}
void _elfimplib_GetBinaryTypeW() {
asm("leave\njmp *%0" : : "r"(_imp__GetBinaryTypeW));
}

