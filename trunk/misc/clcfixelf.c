#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    char *fmap;
    int fd;
    struct stat sbuf;
    
    if (argc < 2) {
        fprintf(stderr, "Use: fixelf <filename>\n");
        return 1;
    }
    
    /* open the file */
    fd = open(argv[1], O_RDWR);
    if (fd == -1) {
        perror(argv[1]);
        return 1;
    }
    
    /* get its size */
    if (fstat(fd, &sbuf) == -1) {
        perror("fstat");
        return 1;
    }
    
    /* mmap it */
    fmap = mmap(NULL, sbuf.st_size, PROT_READ|PROT_WRITE, MAP_SHARED, fd, 0);
    if (fmap == MAP_FAILED) {
        perror("mmap");
        return 1;
    }
    
    /* verify that it's an ELF */
    if (memcmp(fmap, "\x7f" "ELF", 4)) {
        munmap(fmap, sbuf.st_size);
        close(fd);
        fprintf(stderr, "This isn't an ELF!\n");
        return 1;
    }
    
    /* tweak it */
    fmap[0x7] = '\x09'; /* fix to work on FreeBSD */
    
    /* munmap it */
    if (munmap(fmap, sbuf.st_size) == -1) {
        perror("munmap");
        return 1;
    }
    
    /* close it */
    if (close(fd) == -1) {
        perror("close");
        return 1;
    }
    
    return 0;
}
