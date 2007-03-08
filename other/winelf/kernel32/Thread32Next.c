#include "kernel32.h"
void _elfimplib_Thread32Next() asm("Thread32Next");
void *_imp__Thread32Next = NULL;
__attribute__((constructor)) void _elfimplib_init_Thread32Next() {
load_dll_kernel32();
_imp__Thread32Next = (void *) _elf_GetProcAddress(_dll_kernel32, "Thread32Next");
}
void _elfimplib_Thread32Next() {
asm("leave\njmp *%0" : : "r"(_imp__Thread32Next));
}

