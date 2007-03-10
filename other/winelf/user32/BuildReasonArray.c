#include "user32.h"
void _elfimplib_BuildReasonArray() asm("BuildReasonArray");
void *_imp__BuildReasonArray = NULL;
__attribute__((constructor)) void _elfimplib_init_BuildReasonArray() {
load_dll_user32();
_imp__BuildReasonArray = (void *) _elf_GetProcAddress(_dll_user32, "BuildReasonArray");
}
void _elfimplib_BuildReasonArray() {
asm("leave\njmp *%0" : : "r"(_imp__BuildReasonArray));
}

