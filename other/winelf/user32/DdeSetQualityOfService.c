#include "user32.h"
void _elfimplib_DdeSetQualityOfService() asm("DdeSetQualityOfService");
void *_imp__DdeSetQualityOfService = NULL;
__attribute__((constructor)) void _elfimplib_init_DdeSetQualityOfService() {
load_dll_user32();
_imp__DdeSetQualityOfService = (void *) _elf_GetProcAddress(_dll_user32, "DdeSetQualityOfService");
}
void _elfimplib_DdeSetQualityOfService() {
asm("leave\njmp *%0" : : "r"(_imp__DdeSetQualityOfService));
}

