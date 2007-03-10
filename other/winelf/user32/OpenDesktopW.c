#include "user32.h"
void _elfimplib_OpenDesktopW() asm("OpenDesktopW");
void *_imp__OpenDesktopW = NULL;
__attribute__((constructor)) void _elfimplib_init_OpenDesktopW() {
load_dll_user32();
_imp__OpenDesktopW = (void *) _elf_GetProcAddress(_dll_user32, "OpenDesktopW");
}
void _elfimplib_OpenDesktopW() {
asm("leave\njmp *%0" : : "r"(_imp__OpenDesktopW));
}

