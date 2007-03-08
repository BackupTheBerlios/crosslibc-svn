#include "kernel32.h"
void _elfimplib_FreeLibraryAndExitThread() asm("FreeLibraryAndExitThread");
void *_imp__FreeLibraryAndExitThread = NULL;
__attribute__((constructor)) void _elfimplib_init_FreeLibraryAndExitThread() {
load_dll_kernel32();
_imp__FreeLibraryAndExitThread = (void *) _elf_GetProcAddress(_dll_kernel32, "FreeLibraryAndExitThread");
}
void _elfimplib_FreeLibraryAndExitThread() {
asm("leave\njmp *%0" : : "r"(_imp__FreeLibraryAndExitThread));
}

