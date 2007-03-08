#include "kernel32.h"
void _elfimplib_FatalAppExitW() asm("FatalAppExitW");
void *_imp__FatalAppExitW = NULL;
__attribute__((constructor)) void _elfimplib_init_FatalAppExitW() {
load_dll_kernel32();
_imp__FatalAppExitW = (void *) _elf_GetProcAddress(_dll_kernel32, "FatalAppExitW");
}
void _elfimplib_FatalAppExitW() {
asm("leave\njmp *%0" : : "r"(_imp__FatalAppExitW));
}

