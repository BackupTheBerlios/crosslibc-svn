#include "kernel32.h"
void _elfimplib_SetVolumeLabelA() asm("SetVolumeLabelA");
void *_imp__SetVolumeLabelA = NULL;
__attribute__((constructor)) void _elfimplib_init_SetVolumeLabelA() {
load_dll_kernel32();
_imp__SetVolumeLabelA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetVolumeLabelA");
}
void _elfimplib_SetVolumeLabelA() {
asm("leave\njmp *%0" : : "r"(_imp__SetVolumeLabelA));
}

