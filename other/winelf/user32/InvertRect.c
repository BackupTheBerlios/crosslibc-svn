#include "user32.h"
void _elfimplib_InvertRect() asm("InvertRect");
void *_imp__InvertRect = NULL;
__attribute__((constructor)) void _elfimplib_init_InvertRect() {
load_dll_user32();
_imp__InvertRect = (void *) _elf_GetProcAddress(_dll_user32, "InvertRect");
}
void _elfimplib_InvertRect() {
asm("leave\njmp *%0" : : "r"(_imp__InvertRect));
}

