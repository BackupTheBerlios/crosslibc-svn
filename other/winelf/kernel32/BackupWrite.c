#include "kernel32.h"
void _elfimplib_BackupWrite() asm("BackupWrite");
void *_imp__BackupWrite = NULL;
__attribute__((constructor)) void _elfimplib_init_BackupWrite() {
load_dll_kernel32();
_imp__BackupWrite = (void *) _elf_GetProcAddress(_dll_kernel32, "BackupWrite");
}
void _elfimplib_BackupWrite() {
asm("leave\njmp *%0" : : "r"(_imp__BackupWrite));
}

