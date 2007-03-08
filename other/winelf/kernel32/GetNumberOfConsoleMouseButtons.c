#include "kernel32.h"
void _elfimplib_GetNumberOfConsoleMouseButtons() asm("GetNumberOfConsoleMouseButtons");
void *_imp__GetNumberOfConsoleMouseButtons = NULL;
__attribute__((constructor)) void _elfimplib_init_GetNumberOfConsoleMouseButtons() {
load_dll_kernel32();
_imp__GetNumberOfConsoleMouseButtons = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNumberOfConsoleMouseButtons");
}
void _elfimplib_GetNumberOfConsoleMouseButtons() {
asm("leave\njmp *%0" : : "r"(_imp__GetNumberOfConsoleMouseButtons));
}

