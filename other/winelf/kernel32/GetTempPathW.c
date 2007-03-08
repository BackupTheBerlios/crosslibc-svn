#include "kernel32.h"
void _elfimplib_GetTempPathW() asm("GetTempPathW");
void *_imp__GetTempPathW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetTempPathW() {
load_dll_kernel32();
_imp__GetTempPathW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetTempPathW");
}
void _elfimplib_GetTempPathW() {
asm("leave\njmp *%0" : : "r"(_imp__GetTempPathW));
}

