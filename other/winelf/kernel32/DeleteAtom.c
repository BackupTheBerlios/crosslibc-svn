#include "kernel32.h"
void _elfimplib_DeleteAtom() asm("DeleteAtom");
void *_imp__DeleteAtom = NULL;
__attribute__((constructor)) void _elfimplib_init_DeleteAtom() {
load_dll_kernel32();
_imp__DeleteAtom = (void *) _elf_GetProcAddress(_dll_kernel32, "DeleteAtom");
}
void _elfimplib_DeleteAtom() {
asm("leave\njmp *%0" : : "r"(_imp__DeleteAtom));
}

