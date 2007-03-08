#include "msvcrt.h"
void _elfimplib_fclose() asm("fclose");
void *_imp__fclose = NULL;
__attribute__((constructor)) void _elfimplib_init_fclose() {
load_dll_msvcrt();
_imp__fclose = (void *) _elf_GetProcAddress(_dll_msvcrt, "fclose");
}
void _elfimplib_fclose() {
asm("leave\njmp *%0" : : "r"(_imp__fclose));
}

