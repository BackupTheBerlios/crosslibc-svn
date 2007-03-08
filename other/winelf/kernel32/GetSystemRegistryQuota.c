#include "kernel32.h"
void _elfimplib_GetSystemRegistryQuota() asm("GetSystemRegistryQuota");
void *_imp__GetSystemRegistryQuota = NULL;
__attribute__((constructor)) void _elfimplib_init_GetSystemRegistryQuota() {
load_dll_kernel32();
_imp__GetSystemRegistryQuota = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemRegistryQuota");
}
void _elfimplib_GetSystemRegistryQuota() {
asm("leave\njmp *%0" : : "r"(_imp__GetSystemRegistryQuota));
}

