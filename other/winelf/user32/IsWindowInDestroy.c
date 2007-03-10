#include "user32.h"
void _elfimplib_IsWindowInDestroy() asm("IsWindowInDestroy");
void *_imp__IsWindowInDestroy = NULL;
__attribute__((constructor)) void _elfimplib_init_IsWindowInDestroy() {
load_dll_user32();
_imp__IsWindowInDestroy = (void *) _elf_GetProcAddress(_dll_user32, "IsWindowInDestroy");
}
void _elfimplib_IsWindowInDestroy() {
asm("leave\njmp *%0" : : "r"(_imp__IsWindowInDestroy));
}

