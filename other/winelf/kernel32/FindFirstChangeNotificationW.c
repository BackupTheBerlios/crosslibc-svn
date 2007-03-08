#include "kernel32.h"
void _elfimplib_FindFirstChangeNotificationW() asm("FindFirstChangeNotificationW");
void *_imp__FindFirstChangeNotificationW = NULL;
__attribute__((constructor)) void _elfimplib_init_FindFirstChangeNotificationW() {
load_dll_kernel32();
_imp__FindFirstChangeNotificationW = (void *) _elf_GetProcAddress(_dll_kernel32, "FindFirstChangeNotificationW");
}
void _elfimplib_FindFirstChangeNotificationW() {
asm("leave\njmp *%0" : : "r"(_imp__FindFirstChangeNotificationW));
}

