#include "kernel32.h"
void _elfimplib_QueryInformationJobObject() asm("QueryInformationJobObject");
void *_imp__QueryInformationJobObject = NULL;
__attribute__((constructor)) void _elfimplib_init_QueryInformationJobObject() {
load_dll_kernel32();
_imp__QueryInformationJobObject = (void *) _elf_GetProcAddress(_dll_kernel32, "QueryInformationJobObject");
}
void _elfimplib_QueryInformationJobObject() {
asm("leave\njmp *%0" : : "r"(_imp__QueryInformationJobObject));
}

