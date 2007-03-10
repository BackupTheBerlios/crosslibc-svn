#include "user32.h"
void _elfimplib_OemKeyScan() asm("OemKeyScan");
void *_imp__OemKeyScan = NULL;
__attribute__((constructor)) void _elfimplib_init_OemKeyScan() {
load_dll_user32();
_imp__OemKeyScan = (void *) _elf_GetProcAddress(_dll_user32, "OemKeyScan");
}
void _elfimplib_OemKeyScan() {
asm("leave\njmp *%0" : : "r"(_imp__OemKeyScan));
}

