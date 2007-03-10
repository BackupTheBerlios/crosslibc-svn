#include "user32.h"
void _elfimplib_LockWindowUpdate() asm("LockWindowUpdate");
void *_imp__LockWindowUpdate = NULL;
__attribute__((constructor)) void _elfimplib_init_LockWindowUpdate() {
load_dll_user32();
_imp__LockWindowUpdate = (void *) _elf_GetProcAddress(_dll_user32, "LockWindowUpdate");
}
void _elfimplib_LockWindowUpdate() {
asm("leave\njmp *%0" : : "r"(_imp__LockWindowUpdate));
}

