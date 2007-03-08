#include "kernel32.h"
void _elfimplib_MoveFileWithProgressA() asm("MoveFileWithProgressA");
void *_imp__MoveFileWithProgressA = NULL;
__attribute__((constructor)) void _elfimplib_init_MoveFileWithProgressA() {
load_dll_kernel32();
_imp__MoveFileWithProgressA = (void *) _elf_GetProcAddress(_dll_kernel32, "MoveFileWithProgressA");
}
void _elfimplib_MoveFileWithProgressA() {
asm("leave\njmp *%0" : : "r"(_imp__MoveFileWithProgressA));
}

