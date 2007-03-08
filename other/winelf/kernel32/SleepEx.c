#include "kernel32.h"
void _elfimplib_SleepEx() asm("SleepEx");
void *_imp__SleepEx = NULL;
__attribute__((constructor)) void _elfimplib_init_SleepEx() {
load_dll_kernel32();
_imp__SleepEx = (void *) _elf_GetProcAddress(_dll_kernel32, "SleepEx");
}
void _elfimplib_SleepEx() {
asm("leave\njmp *%0" : : "r"(_imp__SleepEx));
}

