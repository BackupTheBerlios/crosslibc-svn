#include "user32.h"
void _elfimplib_DdeQueryConvInfo() asm("DdeQueryConvInfo");
void *_imp__DdeQueryConvInfo = NULL;
__attribute__((constructor)) void _elfimplib_init_DdeQueryConvInfo() {
load_dll_user32();
_imp__DdeQueryConvInfo = (void *) _elf_GetProcAddress(_dll_user32, "DdeQueryConvInfo");
}
void _elfimplib_DdeQueryConvInfo() {
asm("leave\njmp *%0" : : "r"(_imp__DdeQueryConvInfo));
}

