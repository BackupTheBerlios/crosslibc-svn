#include "kernel32.h"
void _elfimplib_Process32NextW() asm("Process32NextW");
void *_imp__Process32NextW = NULL;
__attribute__((constructor)) void _elfimplib_init_Process32NextW() {
load_dll_kernel32();
_imp__Process32NextW = (void *) _elf_GetProcAddress(_dll_kernel32, "Process32NextW");
}
void _elfimplib_Process32NextW() {
asm("leave\njmp *%0" : : "r"(_imp__Process32NextW));
}

