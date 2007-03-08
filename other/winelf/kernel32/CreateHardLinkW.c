#include "kernel32.h"
void _elfimplib_CreateHardLinkW() asm("CreateHardLinkW");
void *_imp__CreateHardLinkW = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateHardLinkW() {
load_dll_kernel32();
_imp__CreateHardLinkW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateHardLinkW");
}
void _elfimplib_CreateHardLinkW() {
asm("leave\njmp *%0" : : "r"(_imp__CreateHardLinkW));
}

