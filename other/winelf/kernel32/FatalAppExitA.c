#include "kernel32.h"
void _elfimplib_FatalAppExitA() asm("FatalAppExitA");
void *_imp__FatalAppExitA = NULL;
__attribute__((constructor)) void _elfimplib_init_FatalAppExitA() {
load_dll_kernel32();
_imp__FatalAppExitA = (void *) _elf_GetProcAddress(_dll_kernel32, "FatalAppExitA");
}
void _elfimplib_FatalAppExitA() {
asm("leave\njmp *%0" : : "r"(_imp__FatalAppExitA));
}

