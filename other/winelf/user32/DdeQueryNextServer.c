#include "user32.h"
void _elfimplib_DdeQueryNextServer() asm("DdeQueryNextServer");
void *_imp__DdeQueryNextServer = NULL;
__attribute__((constructor)) void _elfimplib_init_DdeQueryNextServer() {
load_dll_user32();
_imp__DdeQueryNextServer = (void *) _elf_GetProcAddress(_dll_user32, "DdeQueryNextServer");
}
void _elfimplib_DdeQueryNextServer() {
asm("leave\njmp *%0" : : "r"(_imp__DdeQueryNextServer));
}

