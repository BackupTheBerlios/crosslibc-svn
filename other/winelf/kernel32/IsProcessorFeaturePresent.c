#include "kernel32.h"
void _elfimplib_IsProcessorFeaturePresent() asm("IsProcessorFeaturePresent");
void *_imp__IsProcessorFeaturePresent = NULL;
__attribute__((constructor)) void _elfimplib_init_IsProcessorFeaturePresent() {
load_dll_kernel32();
_imp__IsProcessorFeaturePresent = (void *) _elf_GetProcAddress(_dll_kernel32, "IsProcessorFeaturePresent");
}
void _elfimplib_IsProcessorFeaturePresent() {
asm("leave\njmp *%0" : : "r"(_imp__IsProcessorFeaturePresent));
}

