#include "kernel32.h"
void _elfimplib_WideCharToMultiByte() asm("WideCharToMultiByte");
void *_imp__WideCharToMultiByte = NULL;
__attribute__((constructor)) void _elfimplib_init_WideCharToMultiByte() {
load_dll_kernel32();
_imp__WideCharToMultiByte = (void *) _elf_GetProcAddress(_dll_kernel32, "WideCharToMultiByte");
}
void _elfimplib_WideCharToMultiByte() {
asm("leave\njmp *%0" : : "r"(_imp__WideCharToMultiByte));
}

