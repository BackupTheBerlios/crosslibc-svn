#include "kernel32.h"
void _elfimplib_NlsConvertIntegerToString() asm("NlsConvertIntegerToString");
void *_imp__NlsConvertIntegerToString = NULL;
__attribute__((constructor)) void _elfimplib_init_NlsConvertIntegerToString() {
load_dll_kernel32();
_imp__NlsConvertIntegerToString = (void *) _elf_GetProcAddress(_dll_kernel32, "NlsConvertIntegerToString");
}
void _elfimplib_NlsConvertIntegerToString() {
asm("leave\njmp *%0" : : "r"(_imp__NlsConvertIntegerToString));
}

