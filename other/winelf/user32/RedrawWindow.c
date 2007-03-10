#include "user32.h"
void _elfimplib_RedrawWindow() asm("RedrawWindow");
void *_imp__RedrawWindow = NULL;
__attribute__((constructor)) void _elfimplib_init_RedrawWindow() {
load_dll_user32();
_imp__RedrawWindow = (void *) _elf_GetProcAddress(_dll_user32, "RedrawWindow");
}
void _elfimplib_RedrawWindow() {
asm("leave\njmp *%0" : : "r"(_imp__RedrawWindow));
}

