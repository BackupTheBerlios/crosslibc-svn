#include "kernel32.h"
void _elfimplib_IsSystemResumeAutomatic() asm("IsSystemResumeAutomatic");
void *_imp__IsSystemResumeAutomatic = NULL;
__attribute__((constructor)) void _elfimplib_init_IsSystemResumeAutomatic() {
load_dll_kernel32();
_imp__IsSystemResumeAutomatic = (void *) _elf_GetProcAddress(_dll_kernel32, "IsSystemResumeAutomatic");
}
void _elfimplib_IsSystemResumeAutomatic() {
asm("leave\njmp *%0" : : "r"(_imp__IsSystemResumeAutomatic));
}

