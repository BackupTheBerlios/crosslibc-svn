#include "kernel32.h"
void _elfimplib_ZombifyActCtx() asm("ZombifyActCtx");
void *_imp__ZombifyActCtx = NULL;
__attribute__((constructor)) void _elfimplib_init_ZombifyActCtx() {
load_dll_kernel32();
_imp__ZombifyActCtx = (void *) _elf_GetProcAddress(_dll_kernel32, "ZombifyActCtx");
}
void _elfimplib_ZombifyActCtx() {
asm("leave\njmp *%0" : : "r"(_imp__ZombifyActCtx));
}

