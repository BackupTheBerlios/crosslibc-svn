#include "kernel32.h"
void _elfimplib_VDMConsoleOperation() asm("VDMConsoleOperation");
void *_imp__VDMConsoleOperation = NULL;
__attribute__((constructor)) void _elfimplib_init_VDMConsoleOperation() {
load_dll_kernel32();
_imp__VDMConsoleOperation = (void *) _elf_GetProcAddress(_dll_kernel32, "VDMConsoleOperation");
}
void _elfimplib_VDMConsoleOperation() {
asm("leave\njmp *%0" : : "r"(_imp__VDMConsoleOperation));
}

