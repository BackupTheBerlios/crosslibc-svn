#include "kernel32.h"
void _elfimplib_DosPathToSessionPathW() asm("DosPathToSessionPathW");
void *_imp__DosPathToSessionPathW = NULL;
__attribute__((constructor)) void _elfimplib_init_DosPathToSessionPathW() {
load_dll_kernel32();
_imp__DosPathToSessionPathW = (void *) _elf_GetProcAddress(_dll_kernel32, "DosPathToSessionPathW");
}
void _elfimplib_DosPathToSessionPathW() {
asm("leave\njmp *%0" : : "r"(_imp__DosPathToSessionPathW));
}

