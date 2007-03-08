#include "kernel32.h"
void _elfimplib_GetFileInformationByHandle() asm("GetFileInformationByHandle");
void *_imp__GetFileInformationByHandle = NULL;
__attribute__((constructor)) void _elfimplib_init_GetFileInformationByHandle() {
load_dll_kernel32();
_imp__GetFileInformationByHandle = (void *) _elf_GetProcAddress(_dll_kernel32, "GetFileInformationByHandle");
}
void _elfimplib_GetFileInformationByHandle() {
asm("leave\njmp *%0" : : "r"(_imp__GetFileInformationByHandle));
}

