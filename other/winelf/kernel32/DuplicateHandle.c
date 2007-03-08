#include "kernel32.h"
void _elfimplib_DuplicateHandle() asm("DuplicateHandle");
void *_imp__DuplicateHandle = NULL;
__attribute__((constructor)) void _elfimplib_init_DuplicateHandle() {
load_dll_kernel32();
_imp__DuplicateHandle = (void *) _elf_GetProcAddress(_dll_kernel32, "DuplicateHandle");
}
void _elfimplib_DuplicateHandle() {
asm("leave\njmp *%0" : : "r"(_imp__DuplicateHandle));
}

