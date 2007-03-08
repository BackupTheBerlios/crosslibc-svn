#include "kernel32.h"
void _elfimplib_FindNextVolumeA() asm("FindNextVolumeA");
void *_imp__FindNextVolumeA = NULL;
__attribute__((constructor)) void _elfimplib_init_FindNextVolumeA() {
load_dll_kernel32();
_imp__FindNextVolumeA = (void *) _elf_GetProcAddress(_dll_kernel32, "FindNextVolumeA");
}
void _elfimplib_FindNextVolumeA() {
asm("leave\njmp *%0" : : "r"(_imp__FindNextVolumeA));
}

