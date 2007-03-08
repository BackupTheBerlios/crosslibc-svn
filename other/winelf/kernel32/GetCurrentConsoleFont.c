#include "kernel32.h"
void _elfimplib_GetCurrentConsoleFont() asm("GetCurrentConsoleFont");
void *_imp__GetCurrentConsoleFont = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCurrentConsoleFont() {
load_dll_kernel32();
_imp__GetCurrentConsoleFont = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCurrentConsoleFont");
}
void _elfimplib_GetCurrentConsoleFont() {
asm("leave\njmp *%0" : : "r"(_imp__GetCurrentConsoleFont));
}

