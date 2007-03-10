#include "user32.h"
void _elfimplib_BlockInput() asm("BlockInput");
void *_imp__BlockInput = NULL;
__attribute__((constructor)) void _elfimplib_init_BlockInput() {
load_dll_user32();
_imp__BlockInput = (void *) _elf_GetProcAddress(_dll_user32, "BlockInput");
}
void _elfimplib_BlockInput() {
asm("leave\njmp *%0" : : "r"(_imp__BlockInput));
}

