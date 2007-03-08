#include "kernel32.h"
void _elfimplib_DnsHostnameToComputerNameA() asm("DnsHostnameToComputerNameA");
void *_imp__DnsHostnameToComputerNameA = NULL;
__attribute__((constructor)) void _elfimplib_init_DnsHostnameToComputerNameA() {
load_dll_kernel32();
_imp__DnsHostnameToComputerNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "DnsHostnameToComputerNameA");
}
void _elfimplib_DnsHostnameToComputerNameA() {
asm("leave\njmp *%0" : : "r"(_imp__DnsHostnameToComputerNameA));
}

