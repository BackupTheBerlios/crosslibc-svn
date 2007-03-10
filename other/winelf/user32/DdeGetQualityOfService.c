#include "user32.h"
void _elfimplib_DdeGetQualityOfService() asm("DdeGetQualityOfService");
void *_imp__DdeGetQualityOfService = NULL;
__attribute__((constructor)) void _elfimplib_init_DdeGetQualityOfService() {
load_dll_user32();
_imp__DdeGetQualityOfService = (void *) _elf_GetProcAddress(_dll_user32, "DdeGetQualityOfService");
}
void _elfimplib_DdeGetQualityOfService() {
asm("leave\njmp *%0" : : "r"(_imp__DdeGetQualityOfService));
}

