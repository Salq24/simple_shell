#define SHELL_H_
#ifndef SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

void prompt();

void execute(char* cmd);


#endif

