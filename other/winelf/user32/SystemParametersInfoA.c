#include "user32.h"
void _elfimplib_SystemParametersInfoA() asm("SystemParametersInfoA");
void *_imp__SystemParametersInfoA = NULL;
__attribute__((constructor)) void _elfimplib_init_SystemParametersInfoA() {
load_dll_user32();
_imp__SystemParametersInfoA = (void *) _elf_GetProcAddress(_dll_user32, "SystemParametersInfoA");
}
void _elfimplib_SystemParametersInfoA() {
asm("leave\njmp *%0" : : "r"(_imp__SystemParametersInfoA));
}

