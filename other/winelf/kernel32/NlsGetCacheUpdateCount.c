#include "kernel32.h"
void _elfimplib_NlsGetCacheUpdateCount() asm("NlsGetCacheUpdateCount");
void *_imp__NlsGetCacheUpdateCount = NULL;
__attribute__((constructor)) void _elfimplib_init_NlsGetCacheUpdateCount() {
load_dll_kernel32();
_imp__NlsGetCacheUpdateCount = (void *) _elf_GetProcAddress(_dll_kernel32, "NlsGetCacheUpdateCount");
}
void _elfimplib_NlsGetCacheUpdateCount() {
asm("leave\njmp *%0" : : "r"(_imp__NlsGetCacheUpdateCount));
}

