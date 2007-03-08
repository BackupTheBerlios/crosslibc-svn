#include "kernel32.h"
void _elfimplib_FindNextChangeNotification() asm("FindNextChangeNotification");
void *_imp__FindNextChangeNotification = NULL;
__attribute__((constructor)) void _elfimplib_init_FindNextChangeNotification() {
load_dll_kernel32();
_imp__FindNextChangeNotification = (void *) _elf_GetProcAddress(_dll_kernel32, "FindNextChangeNotification");
}
void _elfimplib_FindNextChangeNotification() {
asm("leave\njmp *%0" : : "r"(_imp__FindNextChangeNotification));
}

