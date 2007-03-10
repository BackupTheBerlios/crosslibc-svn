#include "user32.h"
void _elfimplib_EndTask() asm("EndTask");
void *_imp__EndTask = NULL;
__attribute__((constructor)) void _elfimplib_init_EndTask() {
load_dll_user32();
_imp__EndTask = (void *) _elf_GetProcAddress(_dll_user32, "EndTask");
}
void _elfimplib_EndTask() {
asm("leave\njmp *%0" : : "r"(_imp__EndTask));
}

