#include "user32.h"
void _elfimplib_PostMessageA() asm("PostMessageA");
void *_imp__PostMessageA = NULL;
__attribute__((constructor)) void _elfimplib_init_PostMessageA() {
load_dll_user32();
_imp__PostMessageA = (void *) _elf_GetProcAddress(_dll_user32, "PostMessageA");
}
void _elfimplib_PostMessageA() {
asm("leave\njmp *%0" : : "r"(_imp__PostMessageA));
}

