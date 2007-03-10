#include "user32.h"
void _elfimplib_AnimateWindow() asm("AnimateWindow");
void *_imp__AnimateWindow = NULL;
__attribute__((constructor)) void _elfimplib_init_AnimateWindow() {
load_dll_user32();
_imp__AnimateWindow = (void *) _elf_GetProcAddress(_dll_user32, "AnimateWindow");
}
void _elfimplib_AnimateWindow() {
asm("leave\njmp *%0" : : "r"(_imp__AnimateWindow));
}

