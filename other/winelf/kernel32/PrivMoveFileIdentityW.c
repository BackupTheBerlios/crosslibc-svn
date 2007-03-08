#include "kernel32.h"
void _elfimplib_PrivMoveFileIdentityW() asm("PrivMoveFileIdentityW");
void *_imp__PrivMoveFileIdentityW = NULL;
__attribute__((constructor)) void _elfimplib_init_PrivMoveFileIdentityW() {
load_dll_kernel32();
_imp__PrivMoveFileIdentityW = (void *) _elf_GetProcAddress(_dll_kernel32, "PrivMoveFileIdentityW");
}
void _elfimplib_PrivMoveFileIdentityW() {
asm("leave\njmp *%0" : : "r"(_imp__PrivMoveFileIdentityW));
}

