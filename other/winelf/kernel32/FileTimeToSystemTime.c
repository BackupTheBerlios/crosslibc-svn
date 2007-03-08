#include "kernel32.h"
void _elfimplib_FileTimeToSystemTime() asm("FileTimeToSystemTime");
void *_imp__FileTimeToSystemTime = NULL;
__attribute__((constructor)) void _elfimplib_init_FileTimeToSystemTime() {
load_dll_kernel32();
_imp__FileTimeToSystemTime = (void *) _elf_GetProcAddress(_dll_kernel32, "FileTimeToSystemTime");
}
void _elfimplib_FileTimeToSystemTime() {
asm("leave\njmp *%0" : : "r"(_imp__FileTimeToSystemTime));
}

