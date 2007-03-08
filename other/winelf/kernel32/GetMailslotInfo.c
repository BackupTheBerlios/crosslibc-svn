#include "kernel32.h"
void _elfimplib_GetMailslotInfo() asm("GetMailslotInfo");
void *_imp__GetMailslotInfo = NULL;
__attribute__((constructor)) void _elfimplib_init_GetMailslotInfo() {
load_dll_kernel32();
_imp__GetMailslotInfo = (void *) _elf_GetProcAddress(_dll_kernel32, "GetMailslotInfo");
}
void _elfimplib_GetMailslotInfo() {
asm("leave\njmp *%0" : : "r"(_imp__GetMailslotInfo));
}

