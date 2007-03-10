#include "user32.h"
void _elfimplib_AppendMenuA() asm("AppendMenuA");
void *_imp__AppendMenuA = NULL;
__attribute__((constructor)) void _elfimplib_init_AppendMenuA() {
load_dll_user32();
_imp__AppendMenuA = (void *) _elf_GetProcAddress(_dll_user32, "AppendMenuA");
}
void _elfimplib_AppendMenuA() {
asm("leave\njmp *%0" : : "r"(_imp__AppendMenuA));
}

