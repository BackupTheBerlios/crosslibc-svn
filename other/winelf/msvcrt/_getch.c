#include "msvcrt.h"
void _elfimplib__getch() asm("getch");
void *_imp___getch = NULL;
__attribute__((constructor)) void _elfimplib_init__getch() {
load_dll_msvcrt();
_imp___getch = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getch");
}
void _elfimplib__getch() {
asm("leave\njmp *%0" : : "r"(_imp___getch));
}

void _elfimplibmang__getch() asm("_getch");
void _elfimplibmang__getch() {
asm("leave\njmp *%0" : : "r"(_imp___getch));
}

