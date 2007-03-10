#include "user32.h"
void _elfimplib_IsHungAppWindow() asm("IsHungAppWindow");
void *_imp__IsHungAppWindow = NULL;
__attribute__((constructor)) void _elfimplib_init_IsHungAppWindow() {
load_dll_user32();
_imp__IsHungAppWindow = (void *) _elf_GetProcAddress(_dll_user32, "IsHungAppWindow");
}
void _elfimplib_IsHungAppWindow() {
asm("leave\njmp *%0" : : "r"(_imp__IsHungAppWindow));
}

