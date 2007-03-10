#include "user32.h"
void _elfimplib_AdjustWindowRect() asm("AdjustWindowRect");
void *_imp__AdjustWindowRect = NULL;
__attribute__((constructor)) void _elfimplib_init_AdjustWindowRect() {
load_dll_user32();
_imp__AdjustWindowRect = (void *) _elf_GetProcAddress(_dll_user32, "AdjustWindowRect");
}
void _elfimplib_AdjustWindowRect() {
asm("leave\njmp *%0" : : "r"(_imp__AdjustWindowRect));
}

