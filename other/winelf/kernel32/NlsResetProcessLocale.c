#include "kernel32.h"
void _elfimplib_NlsResetProcessLocale() asm("NlsResetProcessLocale");
void *_imp__NlsResetProcessLocale = NULL;
__attribute__((constructor)) void _elfimplib_init_NlsResetProcessLocale() {
load_dll_kernel32();
_imp__NlsResetProcessLocale = (void *) _elf_GetProcAddress(_dll_kernel32, "NlsResetProcessLocale");
}
void _elfimplib_NlsResetProcessLocale() {
asm("leave\njmp *%0" : : "r"(_imp__NlsResetProcessLocale));
}

