#include "kernel32.h"
void _elfimplib_DnsHostnameToComputerNameW() asm("DnsHostnameToComputerNameW");
void *_imp__DnsHostnameToComputerNameW = NULL;
__attribute__((constructor)) void _elfimplib_init_DnsHostnameToComputerNameW() {
load_dll_kernel32();
_imp__DnsHostnameToComputerNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "DnsHostnameToComputerNameW");
}
void _elfimplib_DnsHostnameToComputerNameW() {
asm("leave\njmp *%0" : : "r"(_imp__DnsHostnameToComputerNameW));
}

