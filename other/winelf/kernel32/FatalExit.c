#include "kernel32.h"
void _elfimplib_FatalExit() asm("FatalExit");
void *_imp__FatalExit = NULL;
__attribute__((constructor)) void _elfimplib_init_FatalExit() {
load_dll_kernel32();
_imp__FatalExit = (void *) _elf_GetProcAddress(_dll_kernel32, "FatalExit");
}
void _elfimplib_FatalExit() {
asm("leave\njmp *%0" : : "r"(_imp__FatalExit));
}
