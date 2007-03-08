#include "msvcrt.h"
void _elfimplib___RTtypeid() asm("_RTtypeid");
void *_imp____RTtypeid = NULL;
__attribute__((constructor)) void _elfimplib_init___RTtypeid() {
load_dll_msvcrt();
_imp____RTtypeid = (void *) _elf_GetProcAddress(_dll_msvcrt, "__RTtypeid");
}
void _elfimplib___RTtypeid() {
asm("leave\njmp *%0" : : "r"(_imp____RTtypeid));
}

