#include "kernel32.h"
void _elfimplib_SignalObjectAndWait() asm("SignalObjectAndWait");
void *_imp__SignalObjectAndWait = NULL;
__attribute__((constructor)) void _elfimplib_init_SignalObjectAndWait() {
load_dll_kernel32();
_imp__SignalObjectAndWait = (void *) _elf_GetProcAddress(_dll_kernel32, "SignalObjectAndWait");
}
void _elfimplib_SignalObjectAndWait() {
asm("leave\njmp *%0" : : "r"(_imp__SignalObjectAndWait));
}

