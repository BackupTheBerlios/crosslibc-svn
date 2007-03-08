#include "kernel32.h"
void _elfimplib_EnumSystemLocalesW() asm("EnumSystemLocalesW");
void *_imp__EnumSystemLocalesW = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumSystemLocalesW() {
load_dll_kernel32();
_imp__EnumSystemLocalesW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumSystemLocalesW");
}
void _elfimplib_EnumSystemLocalesW() {
asm("leave\njmp *%0" : : "r"(_imp__EnumSystemLocalesW));
}

