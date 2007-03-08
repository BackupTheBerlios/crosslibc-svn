#include "kernel32.h"
void _elfimplib_AreFileApisANSI() asm("AreFileApisANSI");
void *_imp__AreFileApisANSI = NULL;
__attribute__((constructor)) void _elfimplib_init_AreFileApisANSI() {
load_dll_kernel32();
_imp__AreFileApisANSI = (void *) _elf_GetProcAddress(_dll_kernel32, "AreFileApisANSI");
}
void _elfimplib_AreFileApisANSI() {
asm("leave\njmp *%0" : : "r"(_imp__AreFileApisANSI));
}

