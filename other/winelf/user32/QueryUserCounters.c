#include "user32.h"
void _elfimplib_QueryUserCounters() asm("QueryUserCounters");
void *_imp__QueryUserCounters = NULL;
__attribute__((constructor)) void _elfimplib_init_QueryUserCounters() {
load_dll_user32();
_imp__QueryUserCounters = (void *) _elf_GetProcAddress(_dll_user32, "QueryUserCounters");
}
void _elfimplib_QueryUserCounters() {
asm("leave\njmp *%0" : : "r"(_imp__QueryUserCounters));
}

