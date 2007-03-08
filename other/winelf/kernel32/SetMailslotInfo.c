#include "kernel32.h"
void _elfimplib_SetMailslotInfo() asm("SetMailslotInfo");
void *_imp__SetMailslotInfo = NULL;
__attribute__((constructor)) void _elfimplib_init_SetMailslotInfo() {
load_dll_kernel32();
_imp__SetMailslotInfo = (void *) _elf_GetProcAddress(_dll_kernel32, "SetMailslotInfo");
}
void _elfimplib_SetMailslotInfo() {
asm("leave\njmp *%0" : : "r"(_imp__SetMailslotInfo));
}

