#include "user32.h"
void _elfimplib_PostThreadMessageA() asm("PostThreadMessageA");
void *_imp__PostThreadMessageA = NULL;
__attribute__((constructor)) void _elfimplib_init_PostThreadMessageA() {
load_dll_user32();
_imp__PostThreadMessageA = (void *) _elf_GetProcAddress(_dll_user32, "PostThreadMessageA");
}
void _elfimplib_PostThreadMessageA() {
asm("leave\njmp *%0" : : "r"(_imp__PostThreadMessageA));
}

