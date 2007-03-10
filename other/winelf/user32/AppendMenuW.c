#include "user32.h"
void _elfimplib_AppendMenuW() asm("AppendMenuW");
void *_imp__AppendMenuW = NULL;
__attribute__((constructor)) void _elfimplib_init_AppendMenuW() {
load_dll_user32();
_imp__AppendMenuW = (void *) _elf_GetProcAddress(_dll_user32, "AppendMenuW");
}
void _elfimplib_AppendMenuW() {
asm("leave\njmp *%0" : : "r"(_imp__AppendMenuW));
}

