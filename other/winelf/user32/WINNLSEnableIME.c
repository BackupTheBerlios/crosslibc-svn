#include "user32.h"
void _elfimplib_WINNLSEnableIME() asm("WINNLSEnableIME");
void *_imp__WINNLSEnableIME = NULL;
__attribute__((constructor)) void _elfimplib_init_WINNLSEnableIME() {
load_dll_user32();
_imp__WINNLSEnableIME = (void *) _elf_GetProcAddress(_dll_user32, "WINNLSEnableIME");
}
void _elfimplib_WINNLSEnableIME() {
asm("leave\njmp *%0" : : "r"(_imp__WINNLSEnableIME));
}

