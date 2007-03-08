#include "kernel32.h"
void _elfimplib_RtlCaptureContext() asm("RtlCaptureContext");
void *_imp__RtlCaptureContext = NULL;
__attribute__((constructor)) void _elfimplib_init_RtlCaptureContext() {
load_dll_kernel32();
_imp__RtlCaptureContext = (void *) _elf_GetProcAddress(_dll_kernel32, "RtlCaptureContext");
}
void _elfimplib_RtlCaptureContext() {
asm("leave\njmp *%0" : : "r"(_imp__RtlCaptureContext));
}

