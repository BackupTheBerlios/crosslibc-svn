#include "user32.h"
void _elfimplib_DialogBoxIndirectParamW() asm("DialogBoxIndirectParamW");
void *_imp__DialogBoxIndirectParamW = NULL;
__attribute__((constructor)) void _elfimplib_init_DialogBoxIndirectParamW() {
load_dll_user32();
_imp__DialogBoxIndirectParamW = (void *) _elf_GetProcAddress(_dll_user32, "DialogBoxIndirectParamW");
}
void _elfimplib_DialogBoxIndirectParamW() {
asm("leave\njmp *%0" : : "r"(_imp__DialogBoxIndirectParamW));
}

