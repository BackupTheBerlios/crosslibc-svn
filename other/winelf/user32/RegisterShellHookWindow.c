#include "user32.h"
void _elfimplib_RegisterShellHookWindow() asm("RegisterShellHookWindow");
void *_imp__RegisterShellHookWindow = NULL;
__attribute__((constructor)) void _elfimplib_init_RegisterShellHookWindow() {
load_dll_user32();
_imp__RegisterShellHookWindow = (void *) _elf_GetProcAddress(_dll_user32, "RegisterShellHookWindow");
}
void _elfimplib_RegisterShellHookWindow() {
asm("leave\njmp *%0" : : "r"(_imp__RegisterShellHookWindow));
}

