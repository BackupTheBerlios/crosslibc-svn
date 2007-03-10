#include "user32.h"
void _elfimplib_InitializeWin32EntryTable() asm("InitializeWin32EntryTable");
void *_imp__InitializeWin32EntryTable = NULL;
__attribute__((constructor)) void _elfimplib_init_InitializeWin32EntryTable() {
load_dll_user32();
_imp__InitializeWin32EntryTable = (void *) _elf_GetProcAddress(_dll_user32, "InitializeWin32EntryTable");
}
void _elfimplib_InitializeWin32EntryTable() {
asm("leave\njmp *%0" : : "r"(_imp__InitializeWin32EntryTable));
}

