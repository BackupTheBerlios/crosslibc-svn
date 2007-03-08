#include "kernel32.h"
void _elfimplib_QueryActCtxW() asm("QueryActCtxW");
void *_imp__QueryActCtxW = NULL;
__attribute__((constructor)) void _elfimplib_init_QueryActCtxW() {
load_dll_kernel32();
_imp__QueryActCtxW = (void *) _elf_GetProcAddress(_dll_kernel32, "QueryActCtxW");
}
void _elfimplib_QueryActCtxW() {
asm("leave\njmp *%0" : : "r"(_imp__QueryActCtxW));
}

