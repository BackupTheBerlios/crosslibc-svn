#include "user32.h"
void _elfimplib_wvsprintfA() asm("wvsprintfA");
void *_imp__wvsprintfA = NULL;
__attribute__((constructor)) void _elfimplib_init_wvsprintfA() {
load_dll_user32();
_imp__wvsprintfA = (void *) _elf_GetProcAddress(_dll_user32, "wvsprintfA");
}
void _elfimplib_wvsprintfA() {
asm("leave\njmp *%0" : : "r"(_imp__wvsprintfA));
}

