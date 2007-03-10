#include "user32.h"
void _elfimplib_FillRect() asm("FillRect");
void *_imp__FillRect = NULL;
__attribute__((constructor)) void _elfimplib_init_FillRect() {
load_dll_user32();
_imp__FillRect = (void *) _elf_GetProcAddress(_dll_user32, "FillRect");
}
void _elfimplib_FillRect() {
asm("leave\njmp *%0" : : "r"(_imp__FillRect));
}

