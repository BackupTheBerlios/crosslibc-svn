#include "kernel32.h"
void _elfimplib_FindNextVolumeW() asm("FindNextVolumeW");
void *_imp__FindNextVolumeW = NULL;
__attribute__((constructor)) void _elfimplib_init_FindNextVolumeW() {
load_dll_kernel32();
_imp__FindNextVolumeW = (void *) _elf_GetProcAddress(_dll_kernel32, "FindNextVolumeW");
}
void _elfimplib_FindNextVolumeW() {
asm("leave\njmp *%0" : : "r"(_imp__FindNextVolumeW));
}

