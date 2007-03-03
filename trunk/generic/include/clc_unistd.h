#ifndef CROSSLIBC_UNISTD_H
#define CROSSLIBC_UNISTD_H

/* fake posix versions, we're 200112L, right? 
 * Just to convince some configures that we're posix at all */
#define	_POSIX_VERSION 200112L
#define _POSIX2_VERSION 200112L
#define	_POSIX2_C_BIND 200112L
#define	_POSIX2_C_DEV 200112L
#define	_POSIX2_SW_DEV 200112L
#define _POSIX2_LOCALEDEF 200112L

#endif
