#include "kernel32.h"
void _elfimplib_WriteTapemark() asm("WriteTapemark");
void *_imp__WriteTapemark = NULL;
__attribute__((constructor)) void _elfimplib_init_WriteTapemark() {
load_dll_kernel32();
_imp__WriteTapemark = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteTapemark");
}
void _elfimplib_WriteTapemark() {
asm("leave\njmp *%0" : : "r"(_imp__WriteTapemark));
}

