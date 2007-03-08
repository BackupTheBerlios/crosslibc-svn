#include "kernel32.h"
void _elfimplib_DosDateTimeToFileTime() asm("DosDateTimeToFileTime");
void *_imp__DosDateTimeToFileTime = NULL;
__attribute__((constructor)) void _elfimplib_init_DosDateTimeToFileTime() {
load_dll_kernel32();
_imp__DosDateTimeToFileTime = (void *) _elf_GetProcAddress(_dll_kernel32, "DosDateTimeToFileTime");
}
void _elfimplib_DosDateTimeToFileTime() {
asm("leave\njmp *%0" : : "r"(_imp__DosDateTimeToFileTime));
}

