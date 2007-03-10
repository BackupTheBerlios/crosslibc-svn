#include "user32.h"
void _elfimplib_User32InitializeImmEntryTable() asm("User32InitializeImmEntryTable");
void *_imp__User32InitializeImmEntryTable = NULL;
__attribute__((constructor)) void _elfimplib_init_User32InitializeImmEntryTable() {
load_dll_user32();
_imp__User32InitializeImmEntryTable = (void *) _elf_GetProcAddress(_dll_user32, "User32InitializeImmEntryTable");
}
void _elfimplib_User32InitializeImmEntryTable() {
asm("leave\njmp *%0" : : "r"(_imp__User32InitializeImmEntryTable));
}

