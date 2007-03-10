#include "user32.h"
void _elfimplib_OemToCharW() asm("OemToCharW");
void *_imp__OemToCharW = NULL;
__attribute__((constructor)) void _elfimplib_init_OemToCharW() {
load_dll_user32();
_imp__OemToCharW = (void *) _elf_GetProcAddress(_dll_user32, "OemToCharW");
}
void _elfimplib_OemToCharW() {
asm("leave\njmp *%0" : : "r"(_imp__OemToCharW));
}

