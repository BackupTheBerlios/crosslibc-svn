#include "user32.h"
void _elfimplib_ShowWindow() asm("ShowWindow");
void *_imp__ShowWindow = NULL;
__attribute__((constructor)) void _elfimplib_init_ShowWindow() {
load_dll_user32();
_imp__ShowWindow = (void *) _elf_GetProcAddress(_dll_user32, "ShowWindow");
}
void _elfimplib_ShowWindow() {
asm("leave\njmp *%0" : : "r"(_imp__ShowWindow));
}

