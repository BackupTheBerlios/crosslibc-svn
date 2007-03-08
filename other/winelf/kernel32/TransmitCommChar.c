#include "kernel32.h"
void _elfimplib_TransmitCommChar() asm("TransmitCommChar");
void *_imp__TransmitCommChar = NULL;
__attribute__((constructor)) void _elfimplib_init_TransmitCommChar() {
load_dll_kernel32();
_imp__TransmitCommChar = (void *) _elf_GetProcAddress(_dll_kernel32, "TransmitCommChar");
}
void _elfimplib_TransmitCommChar() {
asm("leave\njmp *%0" : : "r"(_imp__TransmitCommChar));
}

