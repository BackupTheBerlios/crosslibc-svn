#include "kernel32.h"
void _elfimplib_RegisterWaitForInputIdle() asm("RegisterWaitForInputIdle");
void *_imp__RegisterWaitForInputIdle = NULL;
__attribute__((constructor)) void _elfimplib_init_RegisterWaitForInputIdle() {
load_dll_kernel32();
_imp__RegisterWaitForInputIdle = (void *) _elf_GetProcAddress(_dll_kernel32, "RegisterWaitForInputIdle");
}
void _elfimplib_RegisterWaitForInputIdle() {
asm("leave\njmp *%0" : : "r"(_imp__RegisterWaitForInputIdle));
}

