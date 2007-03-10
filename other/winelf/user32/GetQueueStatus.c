#include "user32.h"
void _elfimplib_GetQueueStatus() asm("GetQueueStatus");
void *_imp__GetQueueStatus = NULL;
__attribute__((constructor)) void _elfimplib_init_GetQueueStatus() {
load_dll_user32();
_imp__GetQueueStatus = (void *) _elf_GetProcAddress(_dll_user32, "GetQueueStatus");
}
void _elfimplib_GetQueueStatus() {
asm("leave\njmp *%0" : : "r"(_imp__GetQueueStatus));
}

