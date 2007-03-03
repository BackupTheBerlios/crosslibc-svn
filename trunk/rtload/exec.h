/* From a loader, pop off our entire stack and execute the loaded program */

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

#ifdef __i386__
#define EXEC_ORIGORDER(start) \
{ \
    asm( \
         "leave;\n" \
         "pop %1;\n" /* leave loader */ \
         "leave;\n" \
         "pop %1;\n" /* leave rtload */ \
         "leave;\n" \
         "pop %1;\n" /* leave main */ \
         "jmp *%0;\n" /* jump to start code */ \
         : \
         : "r"(start), "r"(0)); \
}

#define EXEC_REORDERED(start) \
{ \
    asm( \
         "leave;\n" \
         "pop %1;\n" /* leave loader */\
         "leave;\n" \
         "pop %1;\n" /* leave rtload */ \
         "addl $16, %%esp;\n" /* get rid of rtload args */ \
         "jmp *%0;\n" /* jump to start code */ \
         : \
         : "r"(start), "r"(0)); \
}
#else
#error No assembly code for subprocess execution known.
#endif
