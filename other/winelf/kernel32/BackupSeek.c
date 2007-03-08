#include "kernel32.h"
void _elfimplib_BackupSeek() asm("BackupSeek");
void *_imp__BackupSeek = NULL;
__attribute__((constructor)) void _elfimplib_init_BackupSeek() {
load_dll_kernel32();
_imp__BackupSeek = (void *) _elf_GetProcAddress(_dll_kernel32, "BackupSeek");
}
void _elfimplib_BackupSeek() {
asm("leave\njmp *%0" : : "r"(_imp__BackupSeek));
}

