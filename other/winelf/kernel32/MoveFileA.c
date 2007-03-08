#include "kernel32.h"
void _elfimplib_MoveFileA() asm("MoveFileA");
void *_imp__MoveFileA = NULL;
__attribute__((constructor)) void _elfimplib_init_MoveFileA() {
load_dll_kernel32();
_imp__MoveFileA = (void *) _elf_GetProcAddress(_dll_kernel32, "MoveFileA");
}
void _elfimplib_MoveFileA() {
asm("leave\njmp *%0" : : "r"(_imp__MoveFileA));
}

