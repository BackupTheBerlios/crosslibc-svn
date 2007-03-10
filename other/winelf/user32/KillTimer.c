#include "user32.h"
void _elfimplib_KillTimer() asm("KillTimer");
void *_imp__KillTimer = NULL;
__attribute__((constructor)) void _elfimplib_init_KillTimer() {
load_dll_user32();
_imp__KillTimer = (void *) _elf_GetProcAddress(_dll_user32, "KillTimer");
}
void _elfimplib_KillTimer() {
asm("leave\njmp *%0" : : "r"(_imp__KillTimer));
}

