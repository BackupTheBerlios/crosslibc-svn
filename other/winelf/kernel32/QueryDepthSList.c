#include "kernel32.h"
void _elfimplib_QueryDepthSList() asm("QueryDepthSList");
void *_imp__QueryDepthSList = NULL;
__attribute__((constructor)) void _elfimplib_init_QueryDepthSList() {
load_dll_kernel32();
_imp__QueryDepthSList = (void *) _elf_GetProcAddress(_dll_kernel32, "QueryDepthSList");
}
void _elfimplib_QueryDepthSList() {
asm("leave\njmp *%0" : : "r"(_imp__QueryDepthSList));
}

