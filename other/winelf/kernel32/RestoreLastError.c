#include "kernel32.h"
void _elfimplib_RestoreLastError() asm("RestoreLastError");
void *_imp__RestoreLastError = NULL;
__attribute__((constructor)) void _elfimplib_init_RestoreLastError() {
load_dll_kernel32();
_imp__RestoreLastError = (void *) _elf_GetProcAddress(_dll_kernel32, "RestoreLastError");
}
void _elfimplib_RestoreLastError() {
asm("leave\njmp *%0" : : "r"(_imp__RestoreLastError));
}

