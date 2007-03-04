/* Runtime loader support for ELF */

/*
 * Copyright (c) 2007  Gregor Richards
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to
 * deal in the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 */

#include "ldstaticelf.h"

#include "elf.h"
#include "exec.h"

void loadStaticELF(void *prog, size_t psz,
             char *nm, int argc, char **argv, char **envp,
             bbuffer_t bbuffer)
{
    /* Elf32_Ehdr is the header to this file */
    Elf32_Ehdr *ehdr = (Elf32_Ehdr *) prog;
    void *cur, *min, *max;
    uint16_t on;
    Elf32_Shdr *curshdr;
    Elf32_Phdr *curphdr;
    union {
        int i;
        char c[2];
    } endianCheck;
    
    /* Sanity */
    if (psz < sizeof(Elf32_Ehdr) ||
        ehdr->e_ident[0] != '\x7f' ||
        ehdr->e_ident[1] != 'E' ||
        ehdr->e_ident[2] != 'L' ||
        ehdr->e_ident[3] != 'F') {
        _xact_fprintf(stderr, "%s does not appear to be a vaild ELF binary.\n", nm);
        _xact_exit(1);
    }
    
    /* Only 32-bit supported right now */
    if (ehdr->e_ident[4] != ELFCLASS32) {
        _xact_fprintf(stderr, "%s is not a 32-bit ELF binary.\n", nm);
        _xact_exit(1);
    }
    
    /* Check the endianness */
    endianCheck.i = 1;
    if ((endianCheck.c[0] == 1 &&
         ehdr->e_ident[5] != ELFDATA2LSB) ||
        (endianCheck.c[0] == 0 &&
         ehdr->e_ident[5] != ELFDATA2MSB)) {
        _xact_fprintf(stderr, "%s is of the wrong endianness.\n", nm);
        _xact_exit(1);
    }
    
    /* Make sure it's an executable */
    if (ehdr->e_type != ET_EXEC) {
        _xact_fprintf(stderr, "%s is not an executable.\n", nm);
        _xact_exit(1);
    }
    
    /* 1) Figure out the mapping */
    min = ((void *) -1);
    max = NULL;
    
    /* Go through each section */
    if (ehdr->e_shoff) {
        cur = prog + ehdr->e_shoff - ehdr->e_shentsize;
        for (on = ehdr->e_shnum; on > 0; on--) {
            /* Get to the right entry */
            cur += ehdr->e_shentsize;
            curshdr = (Elf32_Shdr *) cur;
            
            /* Perhaps load it in */
            if (curshdr->sh_type == SHT_PROGBITS ||
                curshdr->sh_type == SHT_NOBITS) {
                if ((void *) curshdr->sh_addr < min) {
                    min = (void *) curshdr->sh_addr;
                }
                if ((void *) curshdr->sh_addr + curshdr->sh_size > max) {
                    max = (void *) curshdr->sh_addr + curshdr->sh_size;
                }
            }
        }
    }
    
    /* 2) Load in the actual data */
    bbuffer(min, max - min);
    
    /* Go through each section */
    if (ehdr->e_shoff) {
        cur = prog + ehdr->e_shoff - ehdr->e_shentsize;
        for (on = ehdr->e_shnum; on > 0; on--) {
            /* Get to the right entry */
            cur += ehdr->e_shentsize;
            curshdr = (Elf32_Shdr *) cur;
            
            /* Perhaps load it in */
            if (curshdr->sh_type == SHT_PROGBITS) {
                INLINE_MEMCPY(curshdr->sh_addr, prog + curshdr->sh_offset, curshdr->sh_size);
            } else if (curshdr->sh_type == SHT_NOBITS) {
                INLINE_MEMZERO(curshdr->sh_addr, curshdr->sh_size);
            }
        }
    }
    
    /* Now run! */
    EXEC_REORDERED(ehdr->e_entry);
}

void loadStaticELFEnd() {}

int isStaticELF(void *prog, size_t psz)
{
    /* Elf32_Ehdr is the header to this file */
    Elf32_Ehdr *ehdr = (Elf32_Ehdr *) prog;
    
    if (psz < sizeof(Elf32_Ehdr) ||
        ehdr->e_ident[0] != '\x7f' ||
        ehdr->e_ident[1] != 'E' ||
        ehdr->e_ident[2] != 'L' ||
        ehdr->e_ident[3] != 'F') {
        return 0;
    }
    return 1;
}
