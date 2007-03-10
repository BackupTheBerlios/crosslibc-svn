#include "user32.h"
void _elfimplib_IsDlgButtonChecked() asm("IsDlgButtonChecked");
void *_imp__IsDlgButtonChecked = NULL;
__attribute__((constructor)) void _elfimplib_init_IsDlgButtonChecked() {
load_dll_user32();
_imp__IsDlgButtonChecked = (void *) _elf_GetProcAddress(_dll_user32, "IsDlgButtonChecked");
}
void _elfimplib_IsDlgButtonChecked() {
asm("leave\njmp *%0" : : "r"(_imp__IsDlgButtonChecked));
}

