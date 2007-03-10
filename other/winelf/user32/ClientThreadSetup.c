#include "user32.h"
void _elfimplib_ClientThreadSetup() asm("ClientThreadSetup");
void *_imp__ClientThreadSetup = NULL;
__attribute__((constructor)) void _elfimplib_init_ClientThreadSetup() {
load_dll_user32();
_imp__ClientThreadSetup = (void *) _elf_GetProcAddress(_dll_user32, "ClientThreadSetup");
}
void _elfimplib_ClientThreadSetup() {
asm("leave\njmp *%0" : : "r"(_imp__ClientThreadSetup));
}

