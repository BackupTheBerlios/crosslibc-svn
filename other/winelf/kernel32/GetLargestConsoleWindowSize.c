#include "kernel32.h"
void _elfimplib_GetLargestConsoleWindowSize() asm("GetLargestConsoleWindowSize");
void *_imp__GetLargestConsoleWindowSize = NULL;
__attribute__((constructor)) void _elfimplib_init_GetLargestConsoleWindowSize() {
load_dll_kernel32();
_imp__GetLargestConsoleWindowSize = (void *) _elf_GetProcAddress(_dll_kernel32, "GetLargestConsoleWindowSize");
}
void _elfimplib_GetLargestConsoleWindowSize() {
asm("leave\njmp *%0" : : "r"(_imp__GetLargestConsoleWindowSize));
}

