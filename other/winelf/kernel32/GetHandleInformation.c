#include "kernel32.h"
void _elfimplib_GetHandleInformation() asm("GetHandleInformation");
void *_imp__GetHandleInformation = NULL;
__attribute__((constructor)) void _elfimplib_init_GetHandleInformation() {
load_dll_kernel32();
_imp__GetHandleInformation = (void *) _elf_GetProcAddress(_dll_kernel32, "GetHandleInformation");
}
void _elfimplib_GetHandleInformation() {
asm("leave\njmp *%0" : : "r"(_imp__GetHandleInformation));
}

