#include "kernel32.h"
void _elfimplib_FileTimeToLocalFileTime() asm("FileTimeToLocalFileTime");
void *_imp__FileTimeToLocalFileTime = NULL;
__attribute__((constructor)) void _elfimplib_init_FileTimeToLocalFileTime() {
load_dll_kernel32();
_imp__FileTimeToLocalFileTime = (void *) _elf_GetProcAddress(_dll_kernel32, "FileTimeToLocalFileTime");
}
void _elfimplib_FileTimeToLocalFileTime() {
asm("leave\njmp *%0" : : "r"(_imp__FileTimeToLocalFileTime));
}

