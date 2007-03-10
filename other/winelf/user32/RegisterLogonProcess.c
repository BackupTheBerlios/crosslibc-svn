#include "user32.h"
void _elfimplib_RegisterLogonProcess() asm("RegisterLogonProcess");
void *_imp__RegisterLogonProcess = NULL;
__attribute__((constructor)) void _elfimplib_init_RegisterLogonProcess() {
load_dll_user32();
_imp__RegisterLogonProcess = (void *) _elf_GetProcAddress(_dll_user32, "RegisterLogonProcess");
}
void _elfimplib_RegisterLogonProcess() {
asm("leave\njmp *%0" : : "r"(_imp__RegisterLogonProcess));
}

