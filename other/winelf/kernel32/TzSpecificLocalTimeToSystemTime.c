#include "kernel32.h"
void _elfimplib_TzSpecificLocalTimeToSystemTime() asm("TzSpecificLocalTimeToSystemTime");
void *_imp__TzSpecificLocalTimeToSystemTime = NULL;
__attribute__((constructor)) void _elfimplib_init_TzSpecificLocalTimeToSystemTime() {
load_dll_kernel32();
_imp__TzSpecificLocalTimeToSystemTime = (void *) _elf_GetProcAddress(_dll_kernel32, "TzSpecificLocalTimeToSystemTime");
}
void _elfimplib_TzSpecificLocalTimeToSystemTime() {
asm("leave\njmp *%0" : : "r"(_imp__TzSpecificLocalTimeToSystemTime));
}

