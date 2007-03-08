#include "kernel32.h"
void _elfimplib_FindFirstVolumeW() asm("FindFirstVolumeW");
void *_imp__FindFirstVolumeW = NULL;
__attribute__((constructor)) void _elfimplib_init_FindFirstVolumeW() {
load_dll_kernel32();
_imp__FindFirstVolumeW = (void *) _elf_GetProcAddress(_dll_kernel32, "FindFirstVolumeW");
}
void _elfimplib_FindFirstVolumeW() {
asm("leave\njmp *%0" : : "r"(_imp__FindFirstVolumeW));
}

