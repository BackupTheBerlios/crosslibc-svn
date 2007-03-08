#include "kernel32.h"
void _elfimplib_BackupRead() asm("BackupRead");
void *_imp__BackupRead = NULL;
__attribute__((constructor)) void _elfimplib_init_BackupRead() {
load_dll_kernel32();
_imp__BackupRead = (void *) _elf_GetProcAddress(_dll_kernel32, "BackupRead");
}
void _elfimplib_BackupRead() {
asm("leave\njmp *%0" : : "r"(_imp__BackupRead));
}

