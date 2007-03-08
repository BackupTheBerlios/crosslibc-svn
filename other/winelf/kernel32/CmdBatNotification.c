#include "kernel32.h"
void _elfimplib_CmdBatNotification() asm("CmdBatNotification");
void *_imp__CmdBatNotification = NULL;
__attribute__((constructor)) void _elfimplib_init_CmdBatNotification() {
load_dll_kernel32();
_imp__CmdBatNotification = (void *) _elf_GetProcAddress(_dll_kernel32, "CmdBatNotification");
}
void _elfimplib_CmdBatNotification() {
asm("leave\njmp *%0" : : "r"(_imp__CmdBatNotification));
}

