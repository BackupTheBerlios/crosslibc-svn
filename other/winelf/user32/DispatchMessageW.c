#include "user32.h"
void _elfimplib_DispatchMessageW() asm("DispatchMessageW");
void *_imp__DispatchMessageW = NULL;
__attribute__((constructor)) void _elfimplib_init_DispatchMessageW() {
load_dll_user32();
_imp__DispatchMessageW = (void *) _elf_GetProcAddress(_dll_user32, "DispatchMessageW");
}
void _elfimplib_DispatchMessageW() {
asm("leave\njmp *%0" : : "r"(_imp__DispatchMessageW));
}

