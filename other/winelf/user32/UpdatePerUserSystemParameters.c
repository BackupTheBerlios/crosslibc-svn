#include "user32.h"
void _elfimplib_UpdatePerUserSystemParameters() asm("UpdatePerUserSystemParameters");
void *_imp__UpdatePerUserSystemParameters = NULL;
__attribute__((constructor)) void _elfimplib_init_UpdatePerUserSystemParameters() {
load_dll_user32();
_imp__UpdatePerUserSystemParameters = (void *) _elf_GetProcAddress(_dll_user32, "UpdatePerUserSystemParameters");
}
void _elfimplib_UpdatePerUserSystemParameters() {
asm("leave\njmp *%0" : : "r"(_imp__UpdatePerUserSystemParameters));
}

