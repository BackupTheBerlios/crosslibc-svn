#include "user32.h"
void _elfimplib_SubtractRect() asm("SubtractRect");
void *_imp__SubtractRect = NULL;
__attribute__((constructor)) void _elfimplib_init_SubtractRect() {
load_dll_user32();
_imp__SubtractRect = (void *) _elf_GetProcAddress(_dll_user32, "SubtractRect");
}
void _elfimplib_SubtractRect() {
asm("leave\njmp *%0" : : "r"(_imp__SubtractRect));
}

