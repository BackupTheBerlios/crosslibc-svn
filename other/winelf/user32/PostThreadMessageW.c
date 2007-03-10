#include "user32.h"
void _elfimplib_PostThreadMessageW() asm("PostThreadMessageW");
void *_imp__PostThreadMessageW = NULL;
__attribute__((constructor)) void _elfimplib_init_PostThreadMessageW() {
load_dll_user32();
_imp__PostThreadMessageW = (void *) _elf_GetProcAddress(_dll_user32, "PostThreadMessageW");
}
void _elfimplib_PostThreadMessageW() {
asm("leave\njmp *%0" : : "r"(_imp__PostThreadMessageW));
}

