#include "kernel32.h"
void _elfimplib_MoveFileWithProgressW() asm("MoveFileWithProgressW");
void *_imp__MoveFileWithProgressW = NULL;
__attribute__((constructor)) void _elfimplib_init_MoveFileWithProgressW() {
load_dll_kernel32();
_imp__MoveFileWithProgressW = (void *) _elf_GetProcAddress(_dll_kernel32, "MoveFileWithProgressW");
}
void _elfimplib_MoveFileWithProgressW() {
asm("leave\njmp *%0" : : "r"(_imp__MoveFileWithProgressW));
}

