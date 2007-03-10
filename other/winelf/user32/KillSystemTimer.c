#include "user32.h"
void _elfimplib_KillSystemTimer() asm("KillSystemTimer");
void *_imp__KillSystemTimer = NULL;
__attribute__((constructor)) void _elfimplib_init_KillSystemTimer() {
load_dll_user32();
_imp__KillSystemTimer = (void *) _elf_GetProcAddress(_dll_user32, "KillSystemTimer");
}
void _elfimplib_KillSystemTimer() {
asm("leave\njmp *%0" : : "r"(_imp__KillSystemTimer));
}

