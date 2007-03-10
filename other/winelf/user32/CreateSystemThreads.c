#include "user32.h"
void _elfimplib_CreateSystemThreads() asm("CreateSystemThreads");
void *_imp__CreateSystemThreads = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateSystemThreads() {
load_dll_user32();
_imp__CreateSystemThreads = (void *) _elf_GetProcAddress(_dll_user32, "CreateSystemThreads");
}
void _elfimplib_CreateSystemThreads() {
asm("leave\njmp *%0" : : "r"(_imp__CreateSystemThreads));
}

