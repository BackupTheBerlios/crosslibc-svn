#include "kernel32.h"
void _elfimplib_DosPathToSessionPathA() asm("DosPathToSessionPathA");
void *_imp__DosPathToSessionPathA = NULL;
__attribute__((constructor)) void _elfimplib_init_DosPathToSessionPathA() {
load_dll_kernel32();
_imp__DosPathToSessionPathA = (void *) _elf_GetProcAddress(_dll_kernel32, "DosPathToSessionPathA");
}
void _elfimplib_DosPathToSessionPathA() {
asm("leave\njmp *%0" : : "r"(_imp__DosPathToSessionPathA));
}

