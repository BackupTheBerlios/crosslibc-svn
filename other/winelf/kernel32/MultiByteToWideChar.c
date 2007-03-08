#include "kernel32.h"
void _elfimplib_MultiByteToWideChar() asm("MultiByteToWideChar");
void *_imp__MultiByteToWideChar = NULL;
__attribute__((constructor)) void _elfimplib_init_MultiByteToWideChar() {
load_dll_kernel32();
_imp__MultiByteToWideChar = (void *) _elf_GetProcAddress(_dll_kernel32, "MultiByteToWideChar");
}
void _elfimplib_MultiByteToWideChar() {
asm("leave\njmp *%0" : : "r"(_imp__MultiByteToWideChar));
}

