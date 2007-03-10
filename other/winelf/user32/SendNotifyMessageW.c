#include "user32.h"
void _elfimplib_SendNotifyMessageW() asm("SendNotifyMessageW");
void *_imp__SendNotifyMessageW = NULL;
__attribute__((constructor)) void _elfimplib_init_SendNotifyMessageW() {
load_dll_user32();
_imp__SendNotifyMessageW = (void *) _elf_GetProcAddress(_dll_user32, "SendNotifyMessageW");
}
void _elfimplib_SendNotifyMessageW() {
asm("leave\njmp *%0" : : "r"(_imp__SendNotifyMessageW));
}

