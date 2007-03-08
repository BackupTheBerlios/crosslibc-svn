#include "kernel32.h"
void _elfimplib_VDMOperationStarted() asm("VDMOperationStarted");
void *_imp__VDMOperationStarted = NULL;
__attribute__((constructor)) void _elfimplib_init_VDMOperationStarted() {
load_dll_kernel32();
_imp__VDMOperationStarted = (void *) _elf_GetProcAddress(_dll_kernel32, "VDMOperationStarted");
}
void _elfimplib_VDMOperationStarted() {
asm("leave\njmp *%0" : : "r"(_imp__VDMOperationStarted));
}

