#include "kernel32.h"
void _elfimplib_VerifyVersionInfoA() asm("VerifyVersionInfoA");
void *_imp__VerifyVersionInfoA = NULL;
__attribute__((constructor)) void _elfimplib_init_VerifyVersionInfoA() {
load_dll_kernel32();
_imp__VerifyVersionInfoA = (void *) _elf_GetProcAddress(_dll_kernel32, "VerifyVersionInfoA");
}
void _elfimplib_VerifyVersionInfoA() {
asm("leave\njmp *%0" : : "r"(_imp__VerifyVersionInfoA));
}

