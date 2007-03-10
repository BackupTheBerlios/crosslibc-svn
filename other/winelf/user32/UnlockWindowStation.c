#include "user32.h"
void _elfimplib_UnlockWindowStation() asm("UnlockWindowStation");
void *_imp__UnlockWindowStation = NULL;
__attribute__((constructor)) void _elfimplib_init_UnlockWindowStation() {
load_dll_user32();
_imp__UnlockWindowStation = (void *) _elf_GetProcAddress(_dll_user32, "UnlockWindowStation");
}
void _elfimplib_UnlockWindowStation() {
asm("leave\njmp *%0" : : "r"(_imp__UnlockWindowStation));
}

