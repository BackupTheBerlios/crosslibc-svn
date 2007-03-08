#include "kernel32.h"
void _elfimplib_HeapCreateTagsW() asm("HeapCreateTagsW");
void *_imp__HeapCreateTagsW = NULL;
__attribute__((constructor)) void _elfimplib_init_HeapCreateTagsW() {
load_dll_kernel32();
_imp__HeapCreateTagsW = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapCreateTagsW");
}
void _elfimplib_HeapCreateTagsW() {
asm("leave\njmp *%0" : : "r"(_imp__HeapCreateTagsW));
}

