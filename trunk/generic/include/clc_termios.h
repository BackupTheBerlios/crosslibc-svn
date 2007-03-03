#ifndef CROSSLIBC_TERMIOS_H
#define CROSSLIBC_TERMIOS_H

int tcgetattr (int fd, struct termios *termios_p);
int tcsetattr (int fd, int optional_actions, const struct termios *termios_p);

#endif
