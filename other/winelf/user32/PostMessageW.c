#include "user32.h"
void _elfimplib_PostMessageW() asm("PostMessageW");
void *_imp__PostMessageW = NULL;
__attribute__((constructor)) void _elfimplib_init_PostMessageW() {
load_dll_user32();
_imp__PostMessageW = (void *) _elf_GetProcAddress(_dll_user32, "PostMessageW");
}
void _elfimplib_PostMessageW() {
asm("leave\njmp *%0" : : "r"(_imp__PostMessageW));
}

