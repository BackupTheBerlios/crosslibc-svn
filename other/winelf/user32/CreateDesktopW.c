#include "user32.h"
void _elfimplib_CreateDesktopW() asm("CreateDesktopW");
void *_imp__CreateDesktopW = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateDesktopW() {
load_dll_user32();
_imp__CreateDesktopW = (void *) _elf_GetProcAddress(_dll_user32, "CreateDesktopW");
}
void _elfimplib_CreateDesktopW() {
asm("leave\njmp *%0" : : "r"(_imp__CreateDesktopW));
}

