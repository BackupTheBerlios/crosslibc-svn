#include "user32.h"
void _elfimplib_WINNLSGetEnableStatus() asm("WINNLSGetEnableStatus");
void *_imp__WINNLSGetEnableStatus = NULL;
__attribute__((constructor)) void _elfimplib_init_WINNLSGetEnableStatus() {
load_dll_user32();
_imp__WINNLSGetEnableStatus = (void *) _elf_GetProcAddress(_dll_user32, "WINNLSGetEnableStatus");
}
void _elfimplib_WINNLSGetEnableStatus() {
asm("leave\njmp *%0" : : "r"(_imp__WINNLSGetEnableStatus));
}

