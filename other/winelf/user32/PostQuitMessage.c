#include "user32.h"
void _elfimplib_PostQuitMessage() asm("PostQuitMessage");
void *_imp__PostQuitMessage = NULL;
__attribute__((constructor)) void _elfimplib_init_PostQuitMessage() {
load_dll_user32();
_imp__PostQuitMessage = (void *) _elf_GetProcAddress(_dll_user32, "PostQuitMessage");
}
void _elfimplib_PostQuitMessage() {
asm("leave\njmp *%0" : : "r"(_imp__PostQuitMessage));
}

