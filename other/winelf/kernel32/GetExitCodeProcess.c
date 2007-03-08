#include "kernel32.h"
void _elfimplib_GetExitCodeProcess() asm("GetExitCodeProcess");
void *_imp__GetExitCodeProcess = NULL;
__attribute__((constructor)) void _elfimplib_init_GetExitCodeProcess() {
load_dll_kernel32();
_imp__GetExitCodeProcess = (void *) _elf_GetProcAddress(_dll_kernel32, "GetExitCodeProcess");
}
void _elfimplib_GetExitCodeProcess() {
asm("leave\njmp *%0" : : "r"(_imp__GetExitCodeProcess));
}

