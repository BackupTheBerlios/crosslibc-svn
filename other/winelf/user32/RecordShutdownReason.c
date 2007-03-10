#include "user32.h"
void _elfimplib_RecordShutdownReason() asm("RecordShutdownReason");
void *_imp__RecordShutdownReason = NULL;
__attribute__((constructor)) void _elfimplib_init_RecordShutdownReason() {
load_dll_user32();
_imp__RecordShutdownReason = (void *) _elf_GetProcAddress(_dll_user32, "RecordShutdownReason");
}
void _elfimplib_RecordShutdownReason() {
asm("leave\njmp *%0" : : "r"(_imp__RecordShutdownReason));
}

