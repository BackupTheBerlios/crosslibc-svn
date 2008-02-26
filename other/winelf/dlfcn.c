/* these functions are just stubs. libdl is provided by the loader, not a library */
void *dlopen(const char *filename, int flag) {return (void *) 0;}
char *dlerror(void) {return (char *) 0;}
void *dlsym(void *handle, const char *symbol) {return (void *) 0;}
int dlclose(void *handle) {return 0;}
