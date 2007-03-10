#include "user32.h"
void _elfimplib_wsprintfW() asm("wsprintfW");
void *_imp__wsprintfW = NULL;
__attribute__((constructor)) void _elfimplib_init_wsprintfW() {
load_dll_user32();
_imp__wsprintfW = (void *) _elf_GetProcAddress(_dll_user32, "wsprintfW");
}
void _elfimplib_wsprintfW() {
asm("leave\njmp *%0" : : "r"(_imp__wsprintfW));
}

