#include "user32.h"
void _elfimplib_DdeImpersonateClient() asm("DdeImpersonateClient");
void *_imp__DdeImpersonateClient = NULL;
__attribute__((constructor)) void _elfimplib_init_DdeImpersonateClient() {
load_dll_user32();
_imp__DdeImpersonateClient = (void *) _elf_GetProcAddress(_dll_user32, "DdeImpersonateClient");
}
void _elfimplib_DdeImpersonateClient() {
asm("leave\njmp *%0" : : "r"(_imp__DdeImpersonateClient));
}

