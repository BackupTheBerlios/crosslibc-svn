#include "kernel32.h"
void _elfimplib_MoveFileExW() asm("MoveFileExW");
void *_imp__MoveFileExW = NULL;
__attribute__((constructor)) void _elfimplib_init_MoveFileExW() {
load_dll_kernel32();
_imp__MoveFileExW = (void *) _elf_GetProcAddress(_dll_kernel32, "MoveFileExW");
}
void _elfimplib_MoveFileExW() {
asm("leave\njmp *%0" : : "r"(_imp__MoveFileExW));
}

