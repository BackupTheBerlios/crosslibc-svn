#include "user32.h"
void _elfimplib_SendDlgItemMessageW() asm("SendDlgItemMessageW");
void *_imp__SendDlgItemMessageW = NULL;
__attribute__((constructor)) void _elfimplib_init_SendDlgItemMessageW() {
load_dll_user32();
_imp__SendDlgItemMessageW = (void *) _elf_GetProcAddress(_dll_user32, "SendDlgItemMessageW");
}
void _elfimplib_SendDlgItemMessageW() {
asm("leave\njmp *%0" : : "r"(_imp__SendDlgItemMessageW));
}

