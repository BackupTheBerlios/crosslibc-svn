#include "kernel32.h"
void _elfimplib_Process32First() asm("Process32First");
void *_imp__Process32First = NULL;
__attribute__((constructor)) void _elfimplib_init_Process32First() {
load_dll_kernel32();
_imp__Process32First = (void *) _elf_GetProcAddress(_dll_kernel32, "Process32First");
}
void _elfimplib_Process32First() {
asm("leave\njmp *%0" : : "r"(_imp__Process32First));
}

