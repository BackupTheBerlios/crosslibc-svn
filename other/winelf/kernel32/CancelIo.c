#include "kernel32.h"
void _elfimplib_CancelIo() asm("CancelIo");
void *_imp__CancelIo = NULL;
__attribute__((constructor)) void _elfimplib_init_CancelIo() {
load_dll_kernel32();
_imp__CancelIo = (void *) _elf_GetProcAddress(_dll_kernel32, "CancelIo");
}
void _elfimplib_CancelIo() {
asm("leave\njmp *%0" : : "r"(_imp__CancelIo));
}

