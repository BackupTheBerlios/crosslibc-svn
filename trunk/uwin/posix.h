#define NULL (void *) 0

extern void *(*_elf_LoadLibraryA)(char *);
extern void *(*_elf_GetProcAddress)(void *, char *);

extern void *_dll_posix;
extern int OSCALL_which;

void load_dll_posix();
