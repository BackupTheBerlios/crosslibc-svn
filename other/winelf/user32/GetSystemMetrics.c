#include "user32.h"
void _elfimplib_GetSystemMetrics() asm("GetSystemMetrics");
void *_imp__GetSystemMetrics = NULL;
__attribute__((constructor)) void _elfimplib_init_GetSystemMetrics() {
load_dll_user32();
_imp__GetSystemMetrics = (void *) _elf_GetProcAddress(_dll_user32, "GetSystemMetrics");
}
void _elfimplib_GetSystemMetrics() {
asm("leave\njmp *%0" : : "r"(_imp__GetSystemMetrics));
}
