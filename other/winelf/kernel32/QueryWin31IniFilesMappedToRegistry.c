#include "kernel32.h"
void _elfimplib_QueryWin31IniFilesMappedToRegistry() asm("QueryWin31IniFilesMappedToRegistry");
void *_imp__QueryWin31IniFilesMappedToRegistry = NULL;
__attribute__((constructor)) void _elfimplib_init_QueryWin31IniFilesMappedToRegistry() {
load_dll_kernel32();
_imp__QueryWin31IniFilesMappedToRegistry = (void *) _elf_GetProcAddress(_dll_kernel32, "QueryWin31IniFilesMappedToRegistry");
}
void _elfimplib_QueryWin31IniFilesMappedToRegistry() {
asm("leave\njmp *%0" : : "r"(_imp__QueryWin31IniFilesMappedToRegistry));
}

