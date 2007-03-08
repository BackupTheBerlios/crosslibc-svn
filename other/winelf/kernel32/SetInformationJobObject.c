#include "kernel32.h"
void _elfimplib_SetInformationJobObject() asm("SetInformationJobObject");
void *_imp__SetInformationJobObject = NULL;
__attribute__((constructor)) void _elfimplib_init_SetInformationJobObject() {
load_dll_kernel32();
_imp__SetInformationJobObject = (void *) _elf_GetProcAddress(_dll_kernel32, "SetInformationJobObject");
}
void _elfimplib_SetInformationJobObject() {
asm("leave\njmp *%0" : : "r"(_imp__SetInformationJobObject));
}

