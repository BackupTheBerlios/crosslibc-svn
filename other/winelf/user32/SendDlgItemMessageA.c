#include "user32.h"
void _elfimplib_SendDlgItemMessageA() asm("SendDlgItemMessageA");
void *_imp__SendDlgItemMessageA = NULL;
__attribute__((constructor)) void _elfimplib_init_SendDlgItemMessageA() {
load_dll_user32();
_imp__SendDlgItemMessageA = (void *) _elf_GetProcAddress(_dll_user32, "SendDlgItemMessageA");
}
void _elfimplib_SendDlgItemMessageA() {
asm("leave\njmp *%0" : : "r"(_imp__SendDlgItemMessageA));
}

