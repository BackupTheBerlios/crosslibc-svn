#include "kernel32.h"
void _elfimplib_FindFirstVolumeA() asm("FindFirstVolumeA");
void *_imp__FindFirstVolumeA = NULL;
__attribute__((constructor)) void _elfimplib_init_FindFirstVolumeA() {
load_dll_kernel32();
_imp__FindFirstVolumeA = (void *) _elf_GetProcAddress(_dll_kernel32, "FindFirstVolumeA");
}
void _elfimplib_FindFirstVolumeA() {
asm("leave\njmp *%0" : : "r"(_imp__FindFirstVolumeA));
}

