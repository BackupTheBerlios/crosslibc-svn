#include "user32.h"
void _elfimplib_OffsetRect() asm("OffsetRect");
void *_imp__OffsetRect = NULL;
__attribute__((constructor)) void _elfimplib_init_OffsetRect() {
load_dll_user32();
_imp__OffsetRect = (void *) _elf_GetProcAddress(_dll_user32, "OffsetRect");
}
void _elfimplib_OffsetRect() {
asm("leave\njmp *%0" : : "r"(_imp__OffsetRect));
}

