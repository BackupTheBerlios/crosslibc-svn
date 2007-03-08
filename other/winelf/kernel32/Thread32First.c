#include "kernel32.h"
void _elfimplib_Thread32First() asm("Thread32First");
void *_imp__Thread32First = NULL;
__attribute__((constructor)) void _elfimplib_init_Thread32First() {
load_dll_kernel32();
_imp__Thread32First = (void *) _elf_GetProcAddress(_dll_kernel32, "Thread32First");
}
void _elfimplib_Thread32First() {
asm("leave\njmp *%0" : : "r"(_imp__Thread32First));
}

