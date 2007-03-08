#include "kernel32.h"
void _elfimplib_FindVolumeClose() asm("FindVolumeClose");
void *_imp__FindVolumeClose = NULL;
__attribute__((constructor)) void _elfimplib_init_FindVolumeClose() {
load_dll_kernel32();
_imp__FindVolumeClose = (void *) _elf_GetProcAddress(_dll_kernel32, "FindVolumeClose");
}
void _elfimplib_FindVolumeClose() {
asm("leave\njmp *%0" : : "r"(_imp__FindVolumeClose));
}

