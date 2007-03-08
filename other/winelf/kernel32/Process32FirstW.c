#include "kernel32.h"
void _elfimplib_Process32FirstW() asm("Process32FirstW");
void *_imp__Process32FirstW = NULL;
__attribute__((constructor)) void _elfimplib_init_Process32FirstW() {
load_dll_kernel32();
_imp__Process32FirstW = (void *) _elf_GetProcAddress(_dll_kernel32, "Process32FirstW");
}
void _elfimplib_Process32FirstW() {
asm("leave\njmp *%0" : : "r"(_imp__Process32FirstW));
}

