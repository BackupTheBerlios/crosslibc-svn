#include "kernel32.h"
void _elfimplib_RegisterConsoleVDM() asm("RegisterConsoleVDM");
void *_imp__RegisterConsoleVDM = NULL;
__attribute__((constructor)) void _elfimplib_init_RegisterConsoleVDM() {
load_dll_kernel32();
_imp__RegisterConsoleVDM = (void *) _elf_GetProcAddress(_dll_kernel32, "RegisterConsoleVDM");
}
void _elfimplib_RegisterConsoleVDM() {
asm("leave\njmp *%0" : : "r"(_imp__RegisterConsoleVDM));
}

