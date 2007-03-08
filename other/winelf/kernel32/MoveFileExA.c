#include "kernel32.h"
void _elfimplib_MoveFileExA() asm("MoveFileExA");
void *_imp__MoveFileExA = NULL;
__attribute__((constructor)) void _elfimplib_init_MoveFileExA() {
load_dll_kernel32();
_imp__MoveFileExA = (void *) _elf_GetProcAddress(_dll_kernel32, "MoveFileExA");
}
void _elfimplib_MoveFileExA() {
asm("leave\njmp *%0" : : "r"(_imp__MoveFileExA));
}

