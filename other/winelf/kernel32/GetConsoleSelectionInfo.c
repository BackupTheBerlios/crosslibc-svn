#include "kernel32.h"
void _elfimplib_GetConsoleSelectionInfo() asm("GetConsoleSelectionInfo");
void *_imp__GetConsoleSelectionInfo = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleSelectionInfo() {
load_dll_kernel32();
_imp__GetConsoleSelectionInfo = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleSelectionInfo");
}
void _elfimplib_GetConsoleSelectionInfo() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleSelectionInfo));
}

