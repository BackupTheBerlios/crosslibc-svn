#include "kernel32.h"
void _elfimplib_SetVolumeLabelW() asm("SetVolumeLabelW");
void *_imp__SetVolumeLabelW = NULL;
__attribute__((constructor)) void _elfimplib_init_SetVolumeLabelW() {
load_dll_kernel32();
_imp__SetVolumeLabelW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetVolumeLabelW");
}
void _elfimplib_SetVolumeLabelW() {
asm("leave\njmp *%0" : : "r"(_imp__SetVolumeLabelW));
}

