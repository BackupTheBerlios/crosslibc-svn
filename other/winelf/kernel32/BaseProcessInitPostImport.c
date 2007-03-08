#include "kernel32.h"
void _elfimplib_BaseProcessInitPostImport() asm("BaseProcessInitPostImport");
void *_imp__BaseProcessInitPostImport = NULL;
__attribute__((constructor)) void _elfimplib_init_BaseProcessInitPostImport() {
load_dll_kernel32();
_imp__BaseProcessInitPostImport = (void *) _elf_GetProcAddress(_dll_kernel32, "BaseProcessInitPostImport");
}
void _elfimplib_BaseProcessInitPostImport() {
asm("leave\njmp *%0" : : "r"(_imp__BaseProcessInitPostImport));
}

