#include "user32.h"
void _elfimplib_DeregisterShellHookWindow() asm("DeregisterShellHookWindow");
void *_imp__DeregisterShellHookWindow = NULL;
__attribute__((constructor)) void _elfimplib_init_DeregisterShellHookWindow() {
load_dll_user32();
_imp__DeregisterShellHookWindow = (void *) _elf_GetProcAddress(_dll_user32, "DeregisterShellHookWindow");
}
void _elfimplib_DeregisterShellHookWindow() {
asm("leave\njmp *%0" : : "r"(_imp__DeregisterShellHookWindow));
}

