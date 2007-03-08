#include "kernel32.h"
void _elfimplib_DeleteFiber() asm("DeleteFiber");
void *_imp__DeleteFiber = NULL;
__attribute__((constructor)) void _elfimplib_init_DeleteFiber() {
load_dll_kernel32();
_imp__DeleteFiber = (void *) _elf_GetProcAddress(_dll_kernel32, "DeleteFiber");
}
void _elfimplib_DeleteFiber() {
asm("leave\njmp *%0" : : "r"(_imp__DeleteFiber));
}

