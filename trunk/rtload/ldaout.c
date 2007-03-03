/* Runtime loader support for a.out */

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

#include "ldaout.h"

#include "a.out.h"
#include "exec.h"

void loadAOut(void *prog, size_t psz,
              char *nm, int argc, char **argv, char **envp,
              bbuffer_t bbuffer)
{
    size_t txt, dat, bss, txto, dato, bsso;
    
    /* struct exec is the header to this file */
    struct exec *seprog = (struct exec *) prog;
    
    /* Sanity */
    if (psz < sizeof(struct exec) ||
        (N_MAGIC(*seprog) != QMAGIC && N_MAGIC(*seprog) != ZMAGIC)) {
        _xact_fprintf(stderr, "%s does not appear to be a Q/ZMAGIC a.out binary.\n", nm);
        _xact_exit(1);
    }
    
    txt = N_TXTADDR(*seprog);
    txto = N_TXTOFF(*seprog);
    dat = N_DATADDR(*seprog);
    dato = N_DATOFF(*seprog);
    bss = N_BSSADDR(*seprog);
    
    /* More sanity */
    if (psz < dato + seprog->a_data) {
        _xact_fprintf(stderr, "%s does not appear to be a valid a.out binary.\n", nm);
        _xact_exit(1);
    }
    
    /* Map in the text segment ... */
    bbuffer((void *) txt, bss + seprog->a_bss - txt);
    INLINE_MEMCPY(txt, prog + txto, seprog->a_text);
    INLINE_MEMCPY(dat, prog + dato, seprog->a_data);
    
    /* run it */
    EXEC_ORIGORDER(seprog->a_entry);
}

void loadAOutEnd() {}

int isAOut(void *prog, size_t psz)
{
    /* struct exec is the header to this file */
    struct exec *seprog = (struct exec *) prog;
    
    if (psz < sizeof(struct exec) ||
        (N_MAGIC(*seprog) != QMAGIC && N_MAGIC(*seprog) != ZMAGIC)) {
        return 0;
    }
    return 1;
}
