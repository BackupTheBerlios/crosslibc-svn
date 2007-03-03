#ifndef CROSSLIBC_TYPES_H
#define CROSSLIBC_TYPES_H

/* some generic types definitions, should usually work :P */
#ifdef __i386__
typedef signed char int8_t;
typedef unsigned char u_int8_t;
typedef short int16_t;
typedef unsigned short u_int16_t;
typedef int int32_t;
typedef unsigned int u_int32_t;
typedef long long int int64_t;
typedef unsigned long long int u_int64_t;
#endif

#endif
