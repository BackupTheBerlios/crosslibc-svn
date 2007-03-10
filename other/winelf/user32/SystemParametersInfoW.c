#include "user32.h"
void _elfimplib_SystemParametersInfoW() asm("SystemParametersInfoW");
void *_imp__SystemParametersInfoW = NULL;
__attribute__((constructor)) void _elfimplib_init_SystemParametersInfoW() {
load_dll_user32();
_imp__SystemParametersInfoW = (void *) _elf_GetProcAddress(_dll_user32, "SystemParametersInfoW");
}
void _elfimplib_SystemParametersInfoW() {
asm("leave\njmp *%0" : : "r"(_imp__SystemParametersInfoW));
}

