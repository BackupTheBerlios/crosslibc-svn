#include "user32.h"
void _elfimplib_CliImmSetHotKey() asm("CliImmSetHotKey");
void *_imp__CliImmSetHotKey = NULL;
__attribute__((constructor)) void _elfimplib_init_CliImmSetHotKey() {
load_dll_user32();
_imp__CliImmSetHotKey = (void *) _elf_GetProcAddress(_dll_user32, "CliImmSetHotKey");
}
void _elfimplib_CliImmSetHotKey() {
asm("leave\njmp *%0" : : "r"(_imp__CliImmSetHotKey));
}

