#include "user32.h"
void _elfimplib_DisplayExitWindowsWarnings() asm("DisplayExitWindowsWarnings");
void *_imp__DisplayExitWindowsWarnings = NULL;
__attribute__((constructor)) void _elfimplib_init_DisplayExitWindowsWarnings() {
load_dll_user32();
_imp__DisplayExitWindowsWarnings = (void *) _elf_GetProcAddress(_dll_user32, "DisplayExitWindowsWarnings");
}
void _elfimplib_DisplayExitWindowsWarnings() {
asm("leave\njmp *%0" : : "r"(_imp__DisplayExitWindowsWarnings));
}

