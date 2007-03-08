#include "kernel32.h"
void _elfimplib_FindCloseChangeNotification() asm("FindCloseChangeNotification");
void *_imp__FindCloseChangeNotification = NULL;
__attribute__((constructor)) void _elfimplib_init_FindCloseChangeNotification() {
load_dll_kernel32();
_imp__FindCloseChangeNotification = (void *) _elf_GetProcAddress(_dll_kernel32, "FindCloseChangeNotification");
}
void _elfimplib_FindCloseChangeNotification() {
asm("leave\njmp *%0" : : "r"(_imp__FindCloseChangeNotification));
}

