#include "user32.h"
void _elfimplib_GetReasonTitleFromReasonCode() asm("GetReasonTitleFromReasonCode");
void *_imp__GetReasonTitleFromReasonCode = NULL;
__attribute__((constructor)) void _elfimplib_init_GetReasonTitleFromReasonCode() {
load_dll_user32();
_imp__GetReasonTitleFromReasonCode = (void *) _elf_GetProcAddress(_dll_user32, "GetReasonTitleFromReasonCode");
}
void _elfimplib_GetReasonTitleFromReasonCode() {
asm("leave\njmp *%0" : : "r"(_imp__GetReasonTitleFromReasonCode));
}

