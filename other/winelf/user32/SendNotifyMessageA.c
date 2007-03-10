#include "user32.h"
void _elfimplib_SendNotifyMessageA() asm("SendNotifyMessageA");
void *_imp__SendNotifyMessageA = NULL;
__attribute__((constructor)) void _elfimplib_init_SendNotifyMessageA() {
load_dll_user32();
_imp__SendNotifyMessageA = (void *) _elf_GetProcAddress(_dll_user32, "SendNotifyMessageA");
}
void _elfimplib_SendNotifyMessageA() {
asm("leave\njmp *%0" : : "r"(_imp__SendNotifyMessageA));
}

