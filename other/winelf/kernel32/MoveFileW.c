#include "kernel32.h"
void _elfimplib_MoveFileW() asm("MoveFileW");
void *_imp__MoveFileW = NULL;
__attribute__((constructor)) void _elfimplib_init_MoveFileW() {
load_dll_kernel32();
_imp__MoveFileW = (void *) _elf_GetProcAddress(_dll_kernel32, "MoveFileW");
}
void _elfimplib_MoveFileW() {
asm("leave\njmp *%0" : : "r"(_imp__MoveFileW));
}

