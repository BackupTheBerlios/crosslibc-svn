#include "kernel32.h"
void _elfimplib_GetNumberOfConsoleFonts() asm("GetNumberOfConsoleFonts");
void *_imp__GetNumberOfConsoleFonts = NULL;
__attribute__((constructor)) void _elfimplib_init_GetNumberOfConsoleFonts() {
load_dll_kernel32();
_imp__GetNumberOfConsoleFonts = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNumberOfConsoleFonts");
}
void _elfimplib_GetNumberOfConsoleFonts() {
asm("leave\njmp *%0" : : "r"(_imp__GetNumberOfConsoleFonts));
}

