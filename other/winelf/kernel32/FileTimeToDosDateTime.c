#include "kernel32.h"
void _elfimplib_FileTimeToDosDateTime() asm("FileTimeToDosDateTime");
void *_imp__FileTimeToDosDateTime = NULL;
__attribute__((constructor)) void _elfimplib_init_FileTimeToDosDateTime() {
load_dll_kernel32();
_imp__FileTimeToDosDateTime = (void *) _elf_GetProcAddress(_dll_kernel32, "FileTimeToDosDateTime");
}
void _elfimplib_FileTimeToDosDateTime() {
asm("leave\njmp *%0" : : "r"(_imp__FileTimeToDosDateTime));
}

