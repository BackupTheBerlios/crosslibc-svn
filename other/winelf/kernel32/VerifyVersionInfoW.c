#include "kernel32.h"
void _elfimplib_VerifyVersionInfoW() asm("VerifyVersionInfoW");
void *_imp__VerifyVersionInfoW = NULL;
__attribute__((constructor)) void _elfimplib_init_VerifyVersionInfoW() {
load_dll_kernel32();
_imp__VerifyVersionInfoW = (void *) _elf_GetProcAddress(_dll_kernel32, "VerifyVersionInfoW");
}
void _elfimplib_VerifyVersionInfoW() {
asm("leave\njmp *%0" : : "r"(_imp__VerifyVersionInfoW));
}

