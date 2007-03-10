#include "user32.h"
void _elfimplib_wvsprintfW() asm("wvsprintfW");
void *_imp__wvsprintfW = NULL;
__attribute__((constructor)) void _elfimplib_init_wvsprintfW() {
load_dll_user32();
_imp__wvsprintfW = (void *) _elf_GetProcAddress(_dll_user32, "wvsprintfW");
}
void _elfimplib_wvsprintfW() {
asm("leave\njmp *%0" : : "r"(_imp__wvsprintfW));
}

