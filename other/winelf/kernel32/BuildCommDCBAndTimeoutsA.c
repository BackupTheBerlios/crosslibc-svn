#include "kernel32.h"
void _elfimplib_BuildCommDCBAndTimeoutsA() asm("BuildCommDCBAndTimeoutsA");
void *_imp__BuildCommDCBAndTimeoutsA = NULL;
__attribute__((constructor)) void _elfimplib_init_BuildCommDCBAndTimeoutsA() {
load_dll_kernel32();
_imp__BuildCommDCBAndTimeoutsA = (void *) _elf_GetProcAddress(_dll_kernel32, "BuildCommDCBAndTimeoutsA");
}
void _elfimplib_BuildCommDCBAndTimeoutsA() {
asm("leave\njmp *%0" : : "r"(_imp__BuildCommDCBAndTimeoutsA));
}

