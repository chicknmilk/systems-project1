#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>
#include <signal.h>
#include <time.h>
#include <sys/wait.h>

// for now the max args it takes is 5 if you input during the prompt
#define ARG_NUM 5

char ** parse_args(char *line);

#endif