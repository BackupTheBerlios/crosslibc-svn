#include "kernel32.h"
void _elfimplib_RtlCaptureStackBackTrace() asm("RtlCaptureStackBackTrace");
void *_imp__RtlCaptureStackBackTrace = NULL;
__attribute__((constructor)) void _elfimplib_init_RtlCaptureStackBackTrace() {
load_dll_kernel32();
_imp__RtlCaptureStackBackTrace = (void *) _elf_GetProcAddress(_dll_kernel32, "RtlCaptureStackBackTrace");
}
void _elfimplib_RtlCaptureStackBackTrace() {
asm("leave\njmp *%0" : : "r"(_imp__RtlCaptureStackBackTrace));
}

