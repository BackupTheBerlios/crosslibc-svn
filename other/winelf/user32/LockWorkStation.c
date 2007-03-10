#include "user32.h"
void _elfimplib_LockWorkStation() asm("LockWorkStation");
void *_imp__LockWorkStation = NULL;
__attribute__((constructor)) void _elfimplib_init_LockWorkStation() {
load_dll_user32();
_imp__LockWorkStation = (void *) _elf_GetProcAddress(_dll_user32, "LockWorkStation");
}
void _elfimplib_LockWorkStation() {
asm("leave\njmp *%0" : : "r"(_imp__LockWorkStation));
}

