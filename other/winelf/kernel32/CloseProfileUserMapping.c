#include "kernel32.h"
void _elfimplib_CloseProfileUserMapping() asm("CloseProfileUserMapping");
void *_imp__CloseProfileUserMapping = NULL;
__attribute__((constructor)) void _elfimplib_init_CloseProfileUserMapping() {
load_dll_kernel32();
_imp__CloseProfileUserMapping = (void *) _elf_GetProcAddress(_dll_kernel32, "CloseProfileUserMapping");
}
void _elfimplib_CloseProfileUserMapping() {
asm("leave\njmp *%0" : : "r"(_imp__CloseProfileUserMapping));
}

