#include "user32.h"
void _elfimplib_AllowForegroundActivation() asm("AllowForegroundActivation");
void *_imp__AllowForegroundActivation = NULL;
__attribute__((constructor)) void _elfimplib_init_AllowForegroundActivation() {
load_dll_user32();
_imp__AllowForegroundActivation = (void *) _elf_GetProcAddress(_dll_user32, "AllowForegroundActivation");
}
void _elfimplib_AllowForegroundActivation() {
asm("leave\njmp *%0" : : "r"(_imp__AllowForegroundActivation));
}

