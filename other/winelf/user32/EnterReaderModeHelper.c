#include "user32.h"
void _elfimplib_EnterReaderModeHelper() asm("EnterReaderModeHelper");
void *_imp__EnterReaderModeHelper = NULL;
__attribute__((constructor)) void _elfimplib_init_EnterReaderModeHelper() {
load_dll_user32();
_imp__EnterReaderModeHelper = (void *) _elf_GetProcAddress(_dll_user32, "EnterReaderModeHelper");
}
void _elfimplib_EnterReaderModeHelper() {
asm("leave\njmp *%0" : : "r"(_imp__EnterReaderModeHelper));
}

