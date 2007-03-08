#include "kernel32.h"
void _elfimplib_VerSetConditionMask() asm("VerSetConditionMask");
void *_imp__VerSetConditionMask = NULL;
__attribute__((constructor)) void _elfimplib_init_VerSetConditionMask() {
load_dll_kernel32();
_imp__VerSetConditionMask = (void *) _elf_GetProcAddress(_dll_kernel32, "VerSetConditionMask");
}
void _elfimplib_VerSetConditionMask() {
asm("leave\njmp *%0" : : "r"(_imp__VerSetConditionMask));
}

