#include "user32.h"
void _elfimplib_DisableProcessWindowsGhosting() asm("DisableProcessWindowsGhosting");
void *_imp__DisableProcessWindowsGhosting = NULL;
__attribute__((constructor)) void _elfimplib_init_DisableProcessWindowsGhosting() {
load_dll_user32();
_imp__DisableProcessWindowsGhosting = (void *) _elf_GetProcAddress(_dll_user32, "DisableProcessWindowsGhosting");
}
void _elfimplib_DisableProcessWindowsGhosting() {
asm("leave\njmp *%0" : : "r"(_imp__DisableProcessWindowsGhosting));
}

