#include "kernel32.h"
void _elfimplib_FindFirstChangeNotificationA() asm("FindFirstChangeNotificationA");
void *_imp__FindFirstChangeNotificationA = NULL;
__attribute__((constructor)) void _elfimplib_init_FindFirstChangeNotificationA() {
load_dll_kernel32();
_imp__FindFirstChangeNotificationA = (void *) _elf_GetProcAddress(_dll_kernel32, "FindFirstChangeNotificationA");
}
void _elfimplib_FindFirstChangeNotificationA() {
asm("leave\njmp *%0" : : "r"(_imp__FindFirstChangeNotificationA));
}

