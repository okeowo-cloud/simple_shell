#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/uio.h>

void print_prompt(void);
char *read_cmd(void);

#endif /* _SHELL_H_ */
