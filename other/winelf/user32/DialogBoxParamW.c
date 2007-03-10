#include "user32.h"
void _elfimplib_DialogBoxParamW() asm("DialogBoxParamW");
void *_imp__DialogBoxParamW = NULL;
__attribute__((constructor)) void _elfimplib_init_DialogBoxParamW() {
load_dll_user32();
_imp__DialogBoxParamW = (void *) _elf_GetProcAddress(_dll_user32, "DialogBoxParamW");
}
void _elfimplib_DialogBoxParamW() {
asm("leave\njmp *%0" : : "r"(_imp__DialogBoxParamW));
}

