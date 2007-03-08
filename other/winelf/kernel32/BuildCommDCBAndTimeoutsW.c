#include "kernel32.h"
void _elfimplib_BuildCommDCBAndTimeoutsW() asm("BuildCommDCBAndTimeoutsW");
void *_imp__BuildCommDCBAndTimeoutsW = NULL;
__attribute__((constructor)) void _elfimplib_init_BuildCommDCBAndTimeoutsW() {
load_dll_kernel32();
_imp__BuildCommDCBAndTimeoutsW = (void *) _elf_GetProcAddress(_dll_kernel32, "BuildCommDCBAndTimeoutsW");
}
void _elfimplib_BuildCommDCBAndTimeoutsW() {
asm("leave\njmp *%0" : : "r"(_imp__BuildCommDCBAndTimeoutsW));
}

