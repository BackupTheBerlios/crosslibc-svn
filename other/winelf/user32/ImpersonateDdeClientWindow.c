#include "user32.h"
void _elfimplib_ImpersonateDdeClientWindow() asm("ImpersonateDdeClientWindow");
void *_imp__ImpersonateDdeClientWindow = NULL;
__attribute__((constructor)) void _elfimplib_init_ImpersonateDdeClientWindow() {
load_dll_user32();
_imp__ImpersonateDdeClientWindow = (void *) _elf_GetProcAddress(_dll_user32, "ImpersonateDdeClientWindow");
}
void _elfimplib_ImpersonateDdeClientWindow() {
asm("leave\njmp *%0" : : "r"(_imp__ImpersonateDdeClientWindow));
}

